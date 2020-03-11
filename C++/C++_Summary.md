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
  문자열 리터럴 상수로 초기화 할 때 사용하는 것이 좋다.
