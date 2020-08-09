# C++ 내용 정리

*본 문서는 C++을 학습하면서 새롭게 알게 된 내용들을 정리한 문서이다.*


- **10진수를 2진수로 변환하는 함수 (재귀함수 이용)**

```C++
to_binary(int n)
{
  to_binary(n/2);
  cout << n % 2;
}
```

---

- **char형 숫자를 int형 숫자로 변환**
  
  : *char형 숫자 - '0'*

  ex)
  ```C++
  char num_char = '98';
  int num_int = num_char - '0';
  ```

---

- **알파벳 다룰 때** ***ASCII코드 명심!***

  대문자 : 65 ~
  
  소문자 : 97 ~
  
---
  
- **출력 여백, 정렬**
 
    - *`<iomanip>` 헤더파일*
  
        - setw(int num) : 출력하는 데이터의 칸을 지정한 수 만큼 정렬 시켜 줌
    
        - setfill(사용자 지정 문자) : 빈칸을 공백 대신 사용자가 지정한 문자로 채우는 함수, 한번 설정하면 계속 유지
    
        - setbase(int num) : num은 8, 10, 16이 가능하며 사용자가 진법을 설정 할 수 있음 *(8진법, 10진법, 16진법)*
    
        - setprecision(int num) : 실수의 유효숫자 자리수를 지정한다
        
    - *`<iostream>` 헤더파일*
    
        - cout.width(int num) : setw(int num)과 기능 동일
        
        - cout.fill(사용자 지정 문자) : setfill()과 기능 동일
        
        - cout.setf(ios::right 또는 left) : 오른쪽 또는 왼쪽 정렬
        
    ex)
    ```C++
    #include <iomanip>
    
    double x = 3.1415;
    cout << x << endl;
    cout << setprecision(3) << x << endl; // 소수점 아래 셋째자리까지 표현
    
    string str = "string";
    cout.setf(ios::left); // 좌측 정렬
    cout << setw(10) << str << endl;
    
    cout.setf(ios::right); // 우측 정렬
    cout << setw(10) << str << endl;
    ```
    
    *출력 결과*
    
    ```
    3.1415
    
    3.142
    
    string
    
        string
    ```
    
---

- **char형식 배열 문자열 vs char 포인터 형식 문자열**

  char형식 원소로 배열을 선언하고 문자열을 초기화 하면 문자열을 구성하는 문자 데이터를 기억하는 메모리를
  할당하여 조회 및 변경이 가능하다
  
  하지만 포인터 변수에 문자열을 할당하면, 예를 들어 
  ```C++
  char* str = "yahoo";
  ```
  로 선언하면 읽기전용 메모리에
  문자열 배치 후 포인터 변수는 해당 메모리 주소를 값으로 가진다. 따라서 char형 배열을 인자로 전달받거나
  문자열 리터럴 상수(읽기 전용 메모리에 할당한 문자열)로 초기화 할 때 사용하는 것이 좋다.

---

- **strtok 사용법**

  ```C++
  string str_arr[1000]; // 자른 문자열을 넣어줄 배열, vector 사용해도 됨
  int str_cnt // 배열의 index로 활용
  
  string a = "My name is Claude";
  
  /* strtok는 char배열만 되므로(포인터, 즉 문자열 리터럴 상수로 안됨) strcpy로 string a를 c_str()을 활용해
  동적할당한 배열에 집어 넣어주고 strtok 이용! (c_str()은 포인터를 반환함) */
  
  char* str_buff = new char[1000];
  strcpy(str_buff, a.c_str());
  
  char* tok = strtok(str_buff, " ");
  /* strtok가 포인터를 반환하므로 tok는 포인터로 선언, 첫번째 인자는 자르고 싶은 C style 문자열 배열(포인터 x),
  두번째 인자는 기준으로 자를 토큰을 넣는다.(여기는 포인터 된다) -> 이렇게 자르면 tok의 경우 맨 첫 주소를
  가지고 있다. 출력하면 My가 출력됨 */
  
  while(tok != nullptr)
  {
    str_arr[str_cnt++] = string(tok); // 후위 연산자의 활용과 string형변환에 주목하라.
    tok = strtok(nullptr, " ") // 다음 문자열 부터 잘라낼 때는 자를 문자열 대신에 nullptr 넣어준다.
  }
  ```
  
  웬만하면 strtok_s, strcpy_s 사용 (VS option에서 STL check 끄면 strtok, strcpy 사용 가능)
  
  ```C++
  // strtok_s
  char* context;
  char* tok = (str, " ", &context)
  
  // strcpy_s
  strcpy(str1, size, str2) // size : buffer size + 1
  ```
  
---
  
- **rand함수 (난수 생성)**
  - `<cstdlib>` 헤더파일에 존재
  - 0 ~ RAND_MAX(32767)까지의 난수를 생성함
    
    but. 프로그램이 실행될 때 난수가 정해지므로 몇 번을 실행해도 같은 결과값이 나온다.
  - 따라서 srand()와 time()활용
    - srand()는 `<cstdlib>` 헤더파일에 존재, ()안에 seed값이 들어감. seed값에 따라 다른 난수 생성
    - time()은 `<ctime>` 헤더파일에 존재
    - srand(time(nullptr)) 해주면 시시각각 다른 seed값이 들어가므로 항상 다른 난수 생성
      ```C++
      srand(time(nullptr));
      int num = rand();
      ```
  - rand함수 범위지정
    - 0 ~ (n - 1) 사이의 난수 생성
      *rand % n*
      
      이 때 rand % n + 1 해주면 1 ~ n까지 난수 생성
    - a ~ b 사이의 난수 생성 (a <= n < b)
      *rand % (b-a) + a
      
      이 때 b-a = 개수, a = 범위 시작하는 수이다.
      
---

- **&#42;연산자, &연산자**
  ```C++
  int* x; // 포인터형 변수
  
  int i = 3;
  int* j = &i; // &는 변수의 주소값 리턴
  *j = 4; // 역참조, 포인터형 변수에 저장된 주소값의 메모리에 쓰여있는 값을 나타냄, i = 4
  
  int a;
  int &b = a; // a의 별명은 b
  b = 3; // a = 3
  
---

- **string find함수**
  - string에서 특정 substring을 찾는 함수다. 찾은 substring의 index값을 반환한다.
    ```C++
    string a = "hi hello";
    int idx = a.find(hello); // idx = 3
    ```
  - 내가 찾으려 하는 substring이 string에 없는 경우가 필요할 때는
    ```C++
    if(a.find("claude") == string::npos)
    ```
    위와 같이 코드를 작성하면 된다.

---

- **`<cmath>` 헤더파일**
  - pow(a, b) : a의 b승
  - sqrt() : 루트
  - 코드 맨 윗줄에
    ```C++
    #define _USE_MATH_DEFINES
    ```
    추가하면 `M_PI // 3.141592...` 등의 상수 사용 가능
   
---

- **isupper, islower, isalpha, toupper, tolower**
  ```C++
  isupper(c);
  //c : 검사할 문자 또는 아스키 값
  //반환값 : 문자가 A~Z 사이에 속하면 true, 아니면 false

  islower(c);
  //c : 검사할 문자 또는 아스키 값
  //반환값 : 문자가 a~z 사이에 속하면 true, 아니면 false

  isalpha(c);
  //c : 검사할 문자 또는 아스키 값
  //반환값 : 문자가 A~Z나 a~z 사이에 속하면 true, 아니면 false
  
  toupper(c);
  //c : 단일문자
  //반환값 : 단일문자 c를 대문자로 변환
 
  toupper(c);
  //c : 단일문자
  //반환값 : 단일문자 c를 소문자로 변환
  ```
  
---

- **cin.get()**
  - `<iostream>`에 존재
  - 표준 입력 버퍼에서 문자 하나만 가져옴
  - 공백, 개행 포함
  - 문자만 입력받음
  - **※주의※**
  
    cin.get과 getline은 개행을 포함하지만 cin은 개행을 무시하므로 입력 버퍼에 개행문자가 그대로 남아있게된다.
    
    cin과 cin.get, getline을 섞어서 사용할 때에는 주의해야한다!
  
  - ```C++
    while(1)
    {
      char ch;
      cin.get(ch);
      if (ch == '\n')
      break;
     }
     // Enter 입력시 종료
     ``` 

---

- **세 수가 같을 때 비교 법**
  
  두 개만 비교하면 된다
  
  ex)
  ```C++
  int num1, num2, num3;
  if(num1 == num2 && num1 == num3)
  {
     ...
  }
  ```
     
---

- **반복문에서 배열의 원소를 번갈아 출력하고 싶을 때**
  
  나머지를 활용한다
  
  ex)
  ```C++
  string arr[2] = {"Men", "Women"};
  int cnt = 0;
  while(true)
  {
    cout << arr[cnt % 2] << endl;
    cnt++;
  }
  /* 출력값
  Men
  Women
  Men
  Women
  ...
  */
  ```

---

- **입력 개수를 모를 때 입력받기**

  ```C++
  string str;
  do {
    cin >> str;
  } while(getc(stdin) == ' ');
  ```

---

- **sort() 함수**

  sort() 함수는 `<algorithm>`헤더에 포함되어 있다.
  
  - 기본 사용법
    ```C++
    #include <algorithm>
   
    int arr[5] = {3, 5, 2, 4, 1};
    sort(arr, arr + 5);
    ```
    위와 같이 배열의 시작 주소와 마지막 주소 + 1을 전달해 주면 된다. 기본적으로 오름차순 정렬을 수행한다.
    ```C++
    #include <iostream>
    #include <algorithm>
    using namespace std;
    
    bool compare(int a, int b) {
      return a < b;
    }
    
    int main() {
      int arr[5] = {3, 5, 2, 4, 1};
      sort(a, a + 5, compare);
    }
    ```
    위와 같이 compare함수를 작성하여 세 번째 인자값으로 전달하면 해당 함수의 반환 값에 맞게 정렬이 동작한다.
    
    *a < b : 오름차순, a > b : 내림차순*
    
  - 클래스 정렬
    
    연산자 오버로딩을 이용한 프로퍼티의 비교를 통해 클래스를 정렬할 수 있다.
    ```C++
    #include <iostream>
    #include <algorithm>
    using namespace std;
    
    class BlackPink {
    public:
      string name;
      int age;
      
      BlackPink(string name, int age) {
        this->name = name;
        this->age = age;
      }
      
      // 오름차순
      bool operator <(BlackPink& blackpink) {
        return this->age < blackpink.age;
      }
    };
    
    int main() {
      BlackPink members[] = {
        BlackPink("로제", 24),
        BlackPink("지수", 26),
        BlackPink("제니", 25),
        BlackPink("리사", 24)
      };
      sort(members, members + 4);
    }
    ```
  
    
