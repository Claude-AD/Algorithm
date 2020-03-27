# C 내용 정리

본 문서는 C언어 코딩 도장이라는 책을 공부하면서 C에 대해 새롭게 알게 된 내용들을 정리한 문서이다. 

다음은 [C언어 코딩도장](https://dojang.io/course/view.php?id=2)의 링크이다. 

---

- **변수 선언**
  - 변수 이름은 영문과 밑줄문자(_)로 시작할 수 있지만 숫자로는 시작할 수 없다.
  - ```C
    int num1 = 20, num2 = 30; 
    ```
    이런 식으로 여러 번수를 한꺼번에 초기화 하면서 선언할 수 있다.

---

- **디버깅 중지**

  *Shift + F5*

---

- **정수형 변수**
  1. 부호 있는 정수형 변수
      - char(1byte) < short(2byte) < int(4byte) = long(4byte) < long long(8byte)
      - char, short, int는 서식지정자 %d로 출력하지만 long은 %ld, long long은 %lld로 출력한다.
      - C에서는 char형이 기본적으로 정수형이다. 문자형과 정수형 둘 다 쓰인다.
        ```C
        char a = 65;
        printf("%c", a);
        // A 출력
        printf("%d", a);
        // 65 출력
        ```
      
  2. 부호 없는 정수형 변수
      - 부호 없는 정수형 변수는 unsigned를 붙인다. 나머지는 부호 있는 정수형 변수와 동일하다.
      - unsigned char, short는 서식지정자 %d로 출력하지만 unsigned int는 %u, long은 %lu, long long은           %llu로 출력한다.
      
---

- **오버플로우, 언더플로우**
  
  char, short, int, long, long long등에 저장할 수 있는 범위를 넘어서면 오버플로우(overflow)가 발생하여   최솟값부터 다시 시작하고 
  
  반대로 최솟값보다 작아지면 언더플로우(underflow)가 발생하여최댓값부터 다시 시작하게 된다.
  
  ![overflow, underflow](https://dojang.io/pluginfile.php/75/mod_page/content/34/unit7-2.png)
  
---

- **sizeof**
  - 자료형(타입)의 크기를 바이트(byte)단위로 구하는 연산자
  - 사용 방법
    - sizeof 표현식
    - sizeof(자료형)
    - sizeof(표현식)
    
    ex)
    ```C++
    int num1 = 0;
    int size = sizeof num1; // size = 4
    size = sizeof(short); // size = 2
  
    char num2 = 1;
    size = sizeof(num2); // size = 1
    ```
  
---

- **정수 자료형의 최솟값과 최댓값**
  - `<limits.h>`헤더파일에 정리되어 있다.
    |자료형|최솟값|최댓값|
    |------|------|------|
    |char|CHAR_MIN|CHAR_MAX|
    |short|SHRT_MIN|SHRT_MAX|
    |int|INT_MIN|INT_MAX|
    |long|LONG_MIN|LONG_MAX|
    |long long|LLONG_MIN|LLONG_MAX|
    |unsigned char|0|UCHAR_MAX|
    |unsigned short|0|USHRT_MAX|
    |unsigned int|0|UINT_MAX|
    |unsigned long|0|ULONG_MAX|
    |unsigned long long|0|ULLONG_MAX|
  - `<limits.h>`에 정의된 최댓값, 최솟값을 넘어서도 오버플로우, 언더플로우가 발생한다.
  
---

- **크기가 표시된 정수 자료형 사용하기**
  - `<stdint.h>`헤더파일을 사용
  - ```C++
    #include <stdint.h>    // 크기별로 정수 자료형이 정의된 헤더 파일

    int main()
    {
      int8_t num1 = -128;                    // 8비트(1바이트) 크기의 부호 있는 정수형 변수 선언
      int16_t num2 = 32767;                  // 16비트(2바이트) 크기의 부호 있는 정수형 변수 선언 
      int32_t num3 = 2147483647;             // 32비트(4바이트) 크기의 부호 있는 정수형 변수 선언
      int64_t num4 = 9223372036854775807;    // 64비트(8바이트) 크기의 부호 있는 정수형 변수 선언
      
      uint8_t num5 = 255;                      // 8비트(1바이트) 크기의 부호 없는 정수형 변수 선언
      uint16_t num6 = 65535;                   // 16비트(2바이트) 크기의 부호 없는 정수형 변수 선언
      uint32_t num7 = 4294967295;              // 32비트(4바이트) 크기의 부호 없는 정수형 변수 선언
      uint64_t num8 = 18446744073709551615;    // 64비트(8바이트) 크기의 부호 없는 정수형 변수 선언
    }
    ```
  - 이런 자료형은 크기를 정확하게 표현해야 하는 파일 압축 및 암호화, 네트워크 프로그래밍을 할 때 특히 유용하며, 일반적인 프로그래밍을 할 때도 처음부터 `<stdint.h>`를 사용하는 것이 좋다. 서식지정자도 %d로 동일하다.
  - stdint의 최소, 최댓값은 `<stdint.h>` 헤더 파일 안에 정의되어 있으므로 `<limits.h>` 헤더 파일을 사용하지 않아도 된다.
    - 부호 있는 정수(signed) 최솟값: INT8_MIN, INT16_MIN, INT32_MIN, INT64_MIN
    - 부호 있는 정수 최댓값: INT8_MAX, INT16_MAX, INT32_MAX, INT64_MAX
    - 부호 없는 정수(unsigned) 최솟값: 0
    - 부호 없는 정수 최댓값: UINT8_MAX, UINT16_MAX, UINT32_MAX, UINT64_MAX

---

- **실수 자료형**
  - float은 숫자 뒤에 f를 붙이고 long double은 l, L을 붙여주고 double은 아무것도 붙이지 않는다.
    ```C
    float num1 = 0.1f;
    double num2 = 3.14;
    long double num3 = 10.324235l;
    ```
  - 소수점 앞 또는 뒤의 0은 생략 가능 ex) .1f, 1. f
  - float과 double을 printf로 출력할 때는 서식지정자 %f를 사용하고 long double은 %Lf 사용
  - Window기준 float은 4byte 7자리, double, long double은 8byte 15자리이다.
  - 지수 표기법으로 표기할 때는 정수부분은 한 자릿수만 적고, 소수자릿수 뒤에 e와 지수를 표기한다.
    - f와 l을 붙이는 것은 동일
    - e는 x10^를 뜻한다.
    - printf로 지수표기법 그대로 출력하려면 서식 지정자 %e, %Le를 사용한다.
  - 양수 최댓값, 최솟값은 헤더파일 `<float.h>`에 존재한다.
    - float : FLT_MIN, FLT_MAX
    - double : DBL_MIN, DBL_MAX
    - long double : LDBL_MIN, LDBL_MAX
  - 실수형의 언더플로우는 0 또는 쓰레기 값으로 처리하고 오버플로우는 무한대(inf)로 출력한다.

---

- **8, 16진수 서식 지정자**
  
  16진수를 표기할 때 서식 지정자는 %x로 사용한다. 하지만 10진수와 구분하기 어려우므로 보통 "0x%x"와 같은 형태로 출력한다.
  ```C
  char c1 = 0x61;
  printf("%c, %d, 0x%x\n", c1, c1, c1);
  // 출력값
  // a, 97, 0x61
  ```
  
  8진수를 표기할 때 서식 지정자는 %o로 사용한다. 하지만 10진수와 구분하기 어려우므로 보통 "0%o"와 같은 형태로 출력한다.
  
  Tip. 문자열의 서식 지정자는 %s이다.
---

- **문자 자료형**
  - 정수를 더하거나 빼면 그에 해당하는 ASCII코드의 문자를 반환한다.
    ```C
    printf("%c, %d\n", 'a' + 1, 'a' + 1);
    // 출력값
    // b, 98
    ```
  - 자주 사용하는 제어문자
    |ASCII|문자|표기법|설명|
    |-----|----|------|----|
    |10|LF|\n|개행, Line Feed, 줄바꿈|
    |13|CR|\r|복귀, Carriage Return, 줄의 끝에서 시작 위치로 되돌아감|
    |9|TAB|\t|수평 탭(horizontal tab)|

---

- **상수와 리터럴**
  
  상수란 변하지 않는 값을 뜻한다. 변수는 한 번 선언하면 값을 계속 바꿀 수 있지만 상수는 처음 선언할 때만 값을 할당 할 수 있으며 그 다음부터는 값을 바꿀 수 없다.
  
  리터럴(literal)은 "문자 그대로"라는 뜻인데 C 언어에서는 값 그 자체를 뜻한다. 그리고 상수는 변수처럼 리터럴이 저장된 공간이다.
  
  ```C
  //         ↓ 상수
  const int con1 = 10;
  //                ↑ 리터럴
  ```
  
  - const를 사용하여 상수를 사용할 수 있다. 위치는 자료형의 앞 뒤 모두 상관 없다.
  ```C
  const int num1 = 1;
  int const num1 = 1;
  ```
  
  - 리터럴의 크기를 명확하게 표현하기 위해 접미사(suffix)를 사용할 수도 있다. 변수를 선언할 때는 long, long long, unsigned long처럼 정수 자료형으로 크기를 정할 수 있지만 리터럴은 접미사를 활용하여 크기를 명시적으로 표기한다. 8, 16진수에도 접미사 사용 가능하다.
    ```C
    // 접미사 생략하면 int
    // 정수형
    printf("%ld\n", -10L);                       // long 크기의 정수 리터럴
    printf("%lld\n", -1234567890123456789LL);    // long long 크기의 정수 리터럴

    printf("%u\n", 10U);                         // unsigned int 크기의 정수 리터럴
    printf("%lu\n", 1234567890UL);               // unsigned long 크기의 정수 리터럴

    printf("%lu\n", 10UL);                       // unsigned long 크기의 정수 리터럴
    printf("%llu\n", 1234567890123456789ULL);    // unsigned long long 크기의 정수 리터럴
    
    //실수형
    printf("%f\n", 0.1f);     // 0.100000: float 크기의 실수 리터럴
    printf("%f\n", 0.1F);     // 0.100000: float 크기의 실수 리터럴
    
    printf("%f\n", 0.1);      // 0.100000: double 크기의 실수 리터럴
    
    printf("%Lf\n", 0.1l);    // 0.100000: long double 크기의 실수 리터럴
    printf("%Lf\n", 0.1L);    // 0.100000: long double 크기의 실수 리터럴
    ```
    
---

- **scanf**
  
  - scanf(서식, 변수의주소);
    - int scanf(char const * const _Format, ...);
    - 성공하면 가져온 값의 개수를 반환, 실패하면 EOF(-1)를 반환
    ```C
    //     ↓ 첫 번째 인수
    scanf("%d", &num1);    // 표준 입력을 받아서 변수에 저장
    //            ↑ 두 번째 인수
    ```
    
  - `#define _CRT_SECURE_NO_WARNINGS`는 Visual Studio에서만 넣어주면 된다.(리눅스, OS X 사용자라면 넣지 않아도 된다). scanf는 나온 지 오래된 함수라 입력 값의 길이를 설정할 수가 없다. 따라서 보안에 취약하기 때문에 Visual Studio에서는 사용하지 말라는 경고가 출력되고 컴파일 에러가 발생합니다. `#define _CRT_SECURE_NO_WARNINGS`를 넣지 않고 scanf 함수를 사용하면 scanf_s 함수를 대신 사용하거나 _CRT_SECURE_NO_WARNINGS를 사용하라고 나온다. scanf_s 함수는 입력 값의 길이를 설정할 수 있지만 C 언어 표준 함수는 아니며 Visual studio(Visual C++) 전용이다.
  
  - scanf 함수는 printf 함수와 사용 방법이 유사하다. 입력받을 개수만큼 서식 지정자를 넣어주고, 서식 지정자 개수만큼 변수를 넣어주면 된다. 
    ```C
    printf("정수를 두 개 입력하세요: ");
    scanf("%d %d", &num1, &num2);    // 값을 두 개 입력받아서 변수 두 개에 저장
    ```
    
  - 여기서 변수를 double로 선언했다면 scanf에는 서식 지정자로 %lf를 넣고, long double로 선언했다면 %Lf를 넣어야 한다(double은 printf로 출력할 때 %f를 써도 되지만 scanf는 %lf를 써야 한다).
    ```C
    double num1;
    scanf("%lf", &num1);    // 자료형이 double일 때는 %lf

    long double num2;
    scanf("%Lf", &num2);    // 자료형이 long double일 때는 %Lf
    ```
    
---

- **getchar, putchar**

  getchar 함수는 표준 입력에서 문자 하나를 입력받은 뒤 결과를 반환한다. 만약 문자 여러 개를 입력해도 첫 번째 문자만 반환된다.

  getchar 함수에 대응하는 함수로 putchar가 있는데 이 함수는 문자 하나를 화면에 출력한다.
  
  둘 다 모두 `<stdio.h>`헤더파일에 선언되어 있다.
  
  ```C
  char c1 = getchar();    // 문자 하나를 입력받음
  printf("%c\n", c1);
  // 키보드로 a를 입력받으면 a를 출력
  
  char c1 = 'a';
  putchar(c1);
  // 출력값 a
  ```
  
---

- **참, 거짓**
  
  - C언어에서는 0 이외의 모든 수를 참으로 처리하고 0은 거짓으로 처리한다.
  ```C
  if(1)
    printf("True\n");
    
  else
    printf("False\n");
    
  // 출력값
  // True
  // 1이 아니라 0이었으면 False 출력
  ```
  - `<stdbool.h>`를 사용하면 bool자료형이 사용 가능하다. (true, false)
    - true, false는 서식지정자 없이도 출력이 가능하고 %s 로도 출력이 가능하다.
  
---

- **&& 연산자**

  &&연산자는 첫번째 조건이 만족하지 않으면 뒤의 조건들은 검사하지 않는다.

---

- **비트와 바이트**
  - 비트(bit) : 2진수를 저장하는 최소 단위 (0 또는 1)
  - 바이트(byte) : 8비트

---

- **비트 연산자**

  - 비트 연산자는 비트로 옵션을 설정할 때 주로 사용하며 저장 공간을 아낄 수 있는 장점이 있다. 특히 이런 방식을 플래그(flag)라고 부른다.
  - *비트 연산자 종류*
  
    |연산자|설명|
    |------|----|
    |&|비트 AND|
    |&#124;|비트 OR|
    |^|비트 XOR|
    |~|비트 NOT|
    |<<|비트를 왼쪽으로 시프트|
    |>>|비트를 오른쪽으로 시프트|
    
  - 예시 1
    ```C
    unsigned char num1 = 1;    // 0000 0001
    unsigned char num2 = 3;    // 0000 0011
 
    printf("%d\n", num1 & num2);    // 0000 0001: 01과 11을 비트 AND하면 01이 됨
    printf("%d\n", num1 | num2);    // 0000 0011: 01과 11을 비트 OR하면 11이 됨
    printf("%d\n", num1 ^ num2);    // 0000 0010: 01과 11을 비트 XOR하면 10이 됨
    
    // 출력값
    // 1, 3, 2
    ```
  - unsigned char를 이용하는 이유
    
    비트 연산으로 인해 부호 비트가 영향을 받지 않도록 부호 없는 자료형을 사용, 1byte기 때문
    
  - 예시 2
    ```C
    unsigned char num1 = 3;     //  3: 0000 0011
    unsigned char num2 = 24;    // 24: 0001 1000
 
    printf("%u\n", num1 << 3);  // 24: 0001 1000: num1의 비트 값을 왼쪽으로 3번 이동
    printf("%u\n", num2 >> 2);  //  6: 0000 0110: num2의 비트 값을 오른쪽으로 2번 이동
    ```
    **주의!** 부호 있는 자료형에서 시프트 연산을 할 때는 맨 앞의 부호비트에 유의한다! 예기치 않은 값이 나올 수 있다.
    

***Tip. Window계산기에서 프로그래머용을 선택하면 여러가지 유용한 계산을 할 수 있다.(2진수... etc)***

---

- **비트 연산자 활용**
  
  - 시프트 연산자는 2의 거듭제곱인 숫자를 빠르게 구할 때 유용하다.
    ```C
    unsigned char num1 = 1;    //   1: 0000 0001
 
    printf("%u\n", num1 << 1);    //   2: 0000 0010: 2
    printf("%u\n", num1 << 2);    //   4: 0000 0100: 2^2
    printf("%u\n", num1 << 3);    //   8: 0000 1000: 2^3
    printf("%u\n", num1 << 4);    //  16: 0001 0000: 2^4
    printf("%u\n", num1 << 5);    //  32: 0010 0000: 2^5
    printf("%u\n", num1 << 6);    //  64: 0100 0000: 2^6
    printf("%u\n", num1 << 7);    // 128: 1000 0000: 2^7
    ```
    즉, 비트의 각 자릿수는 2의 거듭제곱을 뜻하므로 비트의 이동 횟수는 지수(exponent)라 할 수 있고 예를 들면 1 << 3은 2^3과 같다.
    
  - 비트에서 첫째 자리나 마지막 자리를 넘어서는 비트는 그대로 사라진다. 부족한 공간은 unsigned일 때는 0으로, signed일 때는 부호 비트의 값으로 채워진다.
    - *참고 ~ 최상위 비트, 최하위 비트*
      ![MSB, LSB](https://dojang.io/pluginfile.php/245/mod_page/content/19/unit24-1.png)
      비트에서 첫 번째 비트를 최상위 비트(Most Significant Bit, MSB), 마지막 비트를 최하위 비트(Least Siginificant Bit, LSB)라고 부른다.
      
---

- **비트 연산자로 flag 처리하기**
  - flag란?
    
    상태를 저장하는 방식으로 비트가 1이면 on, 0이면 off를 나타낸다. 주로 적은 공간에 정보를 저장해야 하고, 빠른 속도가 필요할 때 사용한다 (ex. cpu ... etc). 비트 하나에 상태 하나가 저장되므로 예를 들어 int 자료형에는 32가지의 상태를 저장할 수 있다(int는 4byte, 32bit).
    
  - 특정 비트를 켜는 법
  
    *플래그 |= 마스크*
    ```C
    unsigned char flag = 0;
 
    flag |= 1;    // 0000 0001 마스크와 비트 OR로 여덟 번째 비트를 켬
    flag |= 2;    // 0000 0010 마스크와 비트 OR로 일곱 번째 비트를 켬
    flag |= 4;    // 0000 0100 마스크와 비트 OR로 여섯 번째 비트를 켬
 
    printf("%u\n", flag);    // 7: 0000 0111
    ```
    플래그로 사용할 변수에 |= 연산자와 숫자를 사용하여 특정 비트를 켠다. 여기서 플래그의 비트를 조작하거나 검사할 때 사용하는 숫자를 마스크(mask)라고 부른다. 예제에서는 1, 2, 4가 마스크다.
    
    플래그의 비트를 켜는 동작은 비트 OR 연산의 특성을 활용한 것인데 0 | 1과 1 | 1은 1이므로 flag의 비트가 꺼져있으면 비트를 켜고, 켜져 있으면 그대로 유지한다.
    
    ![플래그 켜기](https://dojang.io/pluginfile.php/247/mod_page/content/32/unit24-9.png)
    
    플래그의 특정 비트가 켜져 있는지 검사하려면 & 연산자를 사용하면 된다.
    ```C
    if (flag & 4)    // & 연산자로 0000 0100 비트가 켜져 있는지 확인
      printf("0000 0100은 켜져 있음\n");
    else
      printf("0000 0100은 꺼져 있음\n");
    ```
    
  - 특정 비트를 끄는 법
    
    *플래그 &= ~마스크*
    
    마스크 값을 ~ 연산자로 비트를 뒤집은 뒤 &= 연산자를 사용하여 특정 비트를 끈다.
    ```C
    unsigned char flag = 7;    // 7: 0000 0111
 
    flag &= ~2;    // 1111 1101 마스크 값 2의 비트를 뒤집은 뒤 비트 AND로 일곱 번째 비트를 끔
 
    printf("%u\n", flag);    // 5: 0000 0101
    ```
    
    ![플래그 끄기](https://dojang.io/pluginfile.php/247/mod_page/content/32/unit24-10.png)
    
  - 비트가 켜져있으면 끄고, 꺼져있으면 켜기 (toggle)
    
    *플래그 ^= 마스크*
    
    ```C
    unsigned char flag = 7;    // 7: 0000 0111
 
    flag ^= 2;    // 0000 0010 마스크와 비트 XOR로 일곱 번째 비트를 토글
    flag ^= 8;    // 0000 1000 마스크와 비트 XOR로 다섯 번째 비트를 토글
 
    printf("%u\n", flag);    // 13: 0000 1101
    ```
    
    ![toggle](https://dojang.io/pluginfile.php/247/mod_page/content/32/unit24-11.png)
    
---

- **switch문에서 break; 생략**

  case 여러가지를 한꺼번에 사용할 때 생략한다. ( = if문에서 || 연산)
  ```C
  switch (num1)
    {
    case 1:    // 1 또는
    case 2:    // 2일 때 코드 실행
        printf("1 또는 2입니다.\n");
        break;
    }
  // if (num1 == 1 || num1 == 2)
  //   printf("1 또는 2입니다.\n"); 와 동일
  ```
  
  ***Tip. case문에서 변수를 생성하려면 case구문을 { }로 묶어준다.***
  
  ***Tip. switch문에서 판별가능한 자료형은 정수형과 문자형 뿐이다.***
  
---

- **for문 초기식에서 변수 선언 -> gcc에서 오류 발생**

  gcc의 기본 설정이 C99가 아니기 때문에 for문 초기식에서 변수를 선언하면 오류가 발생한다.
  
  따라서 컴파일 에러가 발생하지 않게 하려면 C99 또는 C11 표준으로 컴파일하는 -std=c99 또는 std=c11 옵션을 사용해야 한다. 이 때 둘 다 사용가능 하지만 항상 최신 표준으로 컴파일하는 -std=-c11 옵션을 사용하는 것이 좋다. 

---

 - **for문 변수 2개 사용**

  for문에서 변수를 2개 이상 사용할 수 있다.
  ```C
  for (int i = 0, j = 0; i < 10; i++, j += 2)    // i는 1씩 증가, j는 2씩 증가
  {
      printf("i: %d, j: %d\n", i, j);
  }
  /* 출력값
  i: 0, j: 0
  i: 1, j: 2
  i: 2, j: 4
  i: 3, j: 6
  i: 4, j: 8
  i: 5, j: 10
  i: 6, j: 12
  i: 7, j: 14
  i: 8, j: 16
  i: 9, j: 18 */
  ```

  ***Tip. for문에서 for(;;)를 사용하면 무한 루프문을 만들 수 있다.***

---

- **`<stdlib.h>`헤더파일과 `<time.h>`헤더파일**
  - `<stdlib.h>`헤더파일
    
    문자열 변환, 난수 생성, 동적 메모리 관리 등에 대한 함수들을 포함하고 있는 헤더파일이다.
    
  - `<time.h>`헤더파일
    
    난수 생성에 사용되는 time함수를 포함하고 있는 헤더파일이다.
    
---

- **do while 반복문에서 코드 한번만 수행하기**

  while의 조건문에 0을 집어넣어주면 된다. (while(0)) -> 매크로에서 유용하게 쓰인다.
  
---

- **포인터 정리**
  - 메모리 주소
  
    메모리 주소는 008AF7FC과 같이 16진수 형태이며 printf에서 서식 지정자 %p를 사용하여 출력한다(pointer의 약어로 p를 사용). 물론 16진수로 출력하는 %x, %X를 사용해도 된다. 이때 메모리 주소는 고정된 것이 아니라 컴퓨터마다, 실행할 때마다 달라진다.
  
    ![컴퓨터 메모리에 변수 할당](https://dojang.io/pluginfile.php/337/mod_page/content/21/unit34-2.png)
  
  - 역참조
  
    &연산자는 변수의 주소를 반환한다. &#42;연산자는 두 가지로 쓰이는데 바로 포인터 변수 선언과 역참조다.
    ```C
    int *numPtr;      // 포인터 변수 선언
    int num1 = 10;    // 정수형 변수를 선언하고 10 저장

    numPtr = &num1;   // num1의 메모리 주소를 포인터 변수에 저장

    printf("%d\n", *numPtr);    // 10: 역참조 연산자로 num1의 메모리 주소에 접근하여 값을 가져옴
    ```
    역참조 연산자 &#42;는 포인터 앞에 붙인다. 다음과 같이 numPtr 앞에 &#42;를 붙이면 numPtr에 저장된 메모리 주소로 가서 값을 가져온다. 즉, 포인터는 변수의 주소만 가리키며 역참조는 주소에 접근하여 값을 가져온다.
    
    정리하자면 포인터를 선언할 때 &#42;는 "이 변수가 포인터다"라고 알려주는 역할이고, 포인터에 사용할 때 &#42;는 "포인터의 메모리 주소를 역참조하겠다"라는 뜻이다.
    
    ![참조, 역참조, 변수](https://dojang.io/pluginfile.php/339/mod_page/content/30/unit34-9.png)

---

- **Debugging 심화 - 메모리, 참조, 역참조 확인하기**
  
  ![지역 창](https://dojang.io/pluginfile.php/1000/mod_page/content/16/unit34-10.png)
  
  지역 창을 보면 num1과 numPtr에 저장된 값을 볼 수 있는데 num1은 초깃값으로 10을 할당했으므로 10이 표시되고, numPtr은 num1의 메모리 주소를 할당했으므로 0x0084fe5c가 표시된다. (메모리는 컴퓨터마다, 실행할 때마다 달라진다.)
  
  ![지역 창 포인터](https://dojang.io/pluginfile.php/1000/mod_page/content/16/unit34-12.png)
  
  지역 창에서 numPtr의 왼쪽에 있는 ▷을 클릭하면 현재 메모리 주소에 저장된 값이 표시된다. 여기서는 numPtr이 num1의 메모리 주소를 저장하고 있으므로 num1의 값 10이 나온다.
  
  메모리의 내용을 직접 확인하려면 메뉴의 디버그(D) > 창(W) > 메모리(M) > 메모리 1(1)을 클릭한다.
  
  ![메모리창 띄우는 법 1](https://dojang.io/pluginfile.php/1000/mod_page/content/16/unit34-13.png)
  ![메모리창 띄우는 법 2](https://dojang.io/pluginfile.php/1000/mod_page/content/16/unit34-14.png)
  ![메모리창 띄우는 법 3](https://dojang.io/pluginfile.php/1000/mod_page/content/16/unit34-15.png)
  
  화면 아래쪽에 메모리 1 탭이 열리면 소스 코드 편집 창에서 numPtr 위에 마우스 커서를 가져다 놓는다. 그러면 포인터에 저장된 메모리 주소가 나오는데 이 메모리 주소를 선택하고 마우스 오른쪽 버튼을 누른 뒤 복사, 붙여넣기 하면 내용을 볼 수 있다.
  
  ![메모리창](https://dojang.io/pluginfile.php/1000/mod_page/content/16/unit34-16.png)
  
  이제 메모리 주소 0x0084fe5c의 내용이 보인다. 0a 00 00 00라고 나오는데 메모리의 내용은 보통 16진수로 표현하므로 0a를 10진수로 변환하면 10이다. 즉, 이 메모리 공간이 변수 num1의 위치다. 특히 num1은 int 자료형이므로 4바이트다. 따라서 0a 00 00 00과 같이 숫자 4개를 차지한다. 또한, 우리가 사용하는 x86(x86-64) 계열 CPU는 리틀 엔디언 방식이라 값이 거꾸로 저장된다. 그래서 0a 00 00 00은 원래 00 00 00 0a이며 0a 값을 갖는다는 뜻이다. 
  
  ![코드 실행 후 역참조값 변화](https://dojang.io/pluginfile.php/1000/mod_page/content/16/unit34-17.png)
  
  F10 키를 눌러 &#42;numPtr = 20;이 있는 줄을 실행하면 0a가 14로 바뀌었다(코드 실행으로 인해 바뀐 메모리 공간은 빨간색으로 표시됨). 16진수 14는 10진수로 20이므로 역참조 후 20을 할당하는 코드 &#42;numPtr = 20;이 실행되어 메모리의 내용이 바뀐 것을 확인할 수 있다.
  
  ![조사식 창](https://dojang.io/pluginfile.php/1000/mod_page/content/16/unit34-20.png)
  
  화면 아래 쪽의 조사식 1 탭을 클릭하고 이름 부분을 클릭하여 &num1과 &#42;numPtr을 입력하면 &num1은 num1의 메모리 주소 0x0084fe5c가 표시되고, &#42;numPtr은 numPtr을 역참조한 값인 20이 표시된다. 특히 조사식 창을 이용하면 소스 코드를 고치지 않아도 변수의 값이나 메모리 주소를 바로 확인할 수 있다는 장점이 있다.
  
  ![10진수 메모리창](https://dojang.io/pluginfile.php/1000/mod_page/content/16/unit34-21.png)
  
  메모리 창은 16진수뿐만 아니라 10진수로도 볼 수 있는데 다음과 같이 메모리 창에서 마우스 오른쪽 버튼을 누르면 팝업 메뉴가 나온다. 16진수 표시(H)가 기본으로 선택되어 있는데 부호 있는 표시(S), 부호 없는 표시(U)를 클릭하면 메모리의 내용을 10진수로 볼 수 있다.
  
---

- **const와 포인터**
  - 상수를 가리키는 포인터(pointer to constant)
    ```C
    const int num1 = 10;    // int형 상수
    const int *numPtr;      // int형 상수를 가리키는 포인터. int const *numPtr도 같음

    numPtr = &num1;
    *numPtr = 20;    // 컴파일 에러. num1이 상수이므로 역참조로 값을 변경할 수 없음
    ```
    먼저 num1이 const int이므로 이 변수의 주소를 넣을 수 있는 포인터는 const int &#42;로 선언해야 한다. 그리고 num1의 주소를 numPtr에 넣은 뒤 역참조로 값을 변경하려고 해도 num1은 상수이므로 컴파일 에러가 발생한다. 즉, pointer to constant는 메모리 주소에 저장된 값을 변경할 수 없다.
    
  - 포인터 자체가 상수인 상황(constant pointer)
  
     &#42; 뒤에 const를 붙인다.
     ```C
     int num1 = 10;    // int형 변수
     int num2 = 20;    // int형 변수
     int * const numPtr = &num1;    // int형 포인터 상수

     numPtr = &num2;    // 컴파일 에러. 포인터(메모리 주소)를 변경할 수 없음
     ```
     numPtr에 num1의 주소가 들어가 있는 상태에서 다시 num2의 주소를 넣으려고 하면 컴파일 에러가 발생한다. numPtr은 포인터 자체가 상수이므로 다른 포인터(메모리 주소)를 할당할 수 없다. 즉, constant pointer는 메모리 주소를 변경할 수 없다.
     
   - 포인터가 상수이면서 상수를 가리키는 상황(constant pointer to constant)
  
     포인터를 선언하는 자료형에도 const를 붙이고 &#42; 뒤에도 const를 붙인다.
     ```C
     const int num1 = 10;    // int형 상수
     const int num2 = 20;    // int형 상수
     const int * const numPtr = &num1;    // int형 상수를 가리키는 포인터 상수
                                          // int const * const numPtr도 같음

     *numPtr = 30;      // 컴파일 에러. num1이 상수이므로 역참조로 값을 변경할 수 없음
     numPtr = &num2;    // 컴파일 에러. 포인터(메모리 주소)를 변경할 수 없음
     ```
     여기서는 numPtr을 역참조한 뒤 값을 변경하려고 해도 num1은 상수이므로 컴파일 에러가 발생한다. 그리고 numPtr 자체도 상수이므로 num2의 주소를 넣으려고 하면 컴파일 에러가 발생한다. 즉, constant pointer to constant는 메모리 주소도 변경할 수 없고 메모리 주소에 저장된 값도 변경할 수 없다.
  
---

- **void 포인터**

  - void 포인터는 자료형이 정해지지 않은 포인터로써 `void* 포인터이름;`으로 선언한다.

    ```C
    void* ptr;        // void 포인터 선언
    
        // 포인터 자료형이 달라도 컴파일 경고가 발생하지 않음
        ptr = numPtr1;    // void 포인터에 int 포인터 저장
        ptr = cPtr1;      // void 포인터에 char 포인터 저장
    
        // 포인터 자료형이 달라도 컴파일 경고가 발생하지 않음
        numPtr1 = ptr;    // int 포인터에 void 포인터 저장
        cPtr1 = ptr;      // char 포인터에 void 포인터 저장
    ```

    void 포인터는 자료형이 정해지지 않은 특성 때문에 어떤 자료형으로 된 포인터든 모두 저장할 수 있다. 반대로 다양한 자료형으로 된 포인터에도 void 포인터를 저장할 수도 있다. 이러한 특성 때문에 void 포인터는 범용포인터라고 한다. 즉 직접 자료형을 변환하지 않아도 암시적으로 자료형이 변환되는 방식이다.

    ![void 포인터](https://dojang.io/pluginfile.php/341/mod_page/content/22/unit34-24.png)

    단, void 포인터는 자료형이 정해지지 않았으므로 값을 가져오거나 저장할 크기도 정해지지 않았다. 따라서 void  포인터는 역참조를 할 수 없다.

    ```C
    ptr = numPtr1;        // void 포인터에 int 포인터 저장
    printf("%d", *ptr);   // void 포인터는 역참조할 수 없음. 컴파일 에러
    
    ptr = cPtr1;          // void 포인터에 char 포인터 저장
    printf("%c", *ptr);   // void 포인터는 역참조할 수 없음. 컴파일 에러
    ```

    void 포인터는 함수에서 다양한 자료형을 받아들일 때, 함수의 변환 포인터를 다양한 자료형으로 된 포인터에 저장할 때, 자료형을 숨기고 싶을 떄 사용한다.

---

- **다중 포인터**

  포인터를 선언할 때 *를 두 번 사용하면 포인터의 포인터(이중 포인터)를 선언한다.

  `자료형** 포인터이름;`

  ```C
  int* numPtr1;     // 단일 포인터 선언
      int** numPtr2;    // 이중 포인터 선언
      int num1 = 10;
  
      numPtr1 = &num1;    // num1의 메모리 주소 저장 
  
      numPtr2 = &numPtr1; // numPtr1의 메모리 주소 저장
  
      printf("%d\n", **numPtr2);    // 20: 포인터를 두 번 역참조하여 num1의 메모리 주소에 접근
  ```

  포인터도 실제로는 변수이기 때문에 메모리 주소를 구할 수 있다. 하지만 포인터의 메모리 주소는 일반 포인터에 저장할 수 없고, 이중 포인터에 저장해야 한다. 여기서 이중 포인터를 끝까지 따라가서 실제 값을 가져오려면 변수 앞에 역참조 연산자를 두 번 사용하면 된다.

  ![이중포인터](https://dojang.io/pluginfile.php/342/mod_page/content/18/unit34-25.png)

  포인터를 선언할 때 *의 개수에 따라서 삼중 포인터, 사중 포인터 그 이상도 만들 수 있다. 마찬가지로 역참조를 할 때도 *를 세 번, 네 번 또는 그 이상 사용할 수 있다.

---

- **malloc, free (동적 메모리 할당)**

  - malloc, free 모두 `<stdlib.h>`헤더파일에 선언되어 있다.

  - 포인터 = malloc(크기);

    - `void* malloc(size_t_Size);`
    - 성공하면 메모리 주소를 반환, 실패하면 NULL을 반환

  - free(포인터);

    - `void free(void*_Block);`

  - 변수는 stack에 생성되고 malloc 함수는 heap 부분의 메모리를 사용한다. 따라서 반드시 동적 할당한 메모리는 해제를 해주어야 한다. 그렇지 않으면 메모리 누수(memory leak)이 발생한다.

  - 값을 저장할 때는 역참조 후 저장해준다.

    ```C
    int* numPtr;    // int형 포인터 선언
    
        numPtr = malloc(sizeof(int));    // int의 크기 4바이트만큼 동적 메모리 할당
    
        *numPtr = 10;   // 포인터를 역참조한 뒤 값 할당
    
        printf("%d\n", *numPtr);    // 10: 포인터를 역참조하여 메모리에 저장된 값 출력
    
        free(numPtr);    // 동적 메모리 해제
    ```

---

- **memset (memory set)**

  - `<string.h>`헤더파일에 선언되어 있다.

  - memset 함수를 사용하면 메모리의 내용을 원하는 크기만큼 특정값으로 설정할 수 있다.

  - memset(포인터, 설정할값, 크기);

    - `void *memset(void *_Dst, int _Val, size_t _Size);`
    - 값 설정이 끝난 포인터를 반환

    ```C
    long long* numPtr = malloc(sizeof(long long));  // long long의 크기 8바이트만큼 동적 메모리 할당
    
        memset(numPtr, 0x27, 8);    // numPtr이 가리키는 메모리를 8바이트만큼 0x27로 설정
    
        printf("0x%llx\n", *numPtr);    // 0x2727272727272727: 27이 8개 들어가 있음
    
        free(numPtr);    // 동적으로 할당한 메모리 해제
    ```

    memset 함수는 주로 다음과 같이 설정할 값을 0으로 지정하여 메모리의 내용을 모두 0으로 만들 때 주로 사용한다.

    ```C
    memset(numPtr, 0, 8);    // numPtr이 가리키는 메모리를 8바이트만큼 0으로 설정
    ```

    memset 함수에 설정할 크기를 지정할 때 보통 숫자 대신 sizeof를 사용한다.

    ```C
    long long *numPtr = malloc(sizeof(long long));
    
    memset(numPtr, 0, sizeof(long long));   // numPtr이 가리키는 메모리를 long long 크기만큼 0으로 설정
    ```

    여기서 메모리를 sizeof(long long)크기만큼 할당했으므로 설정할 크기도 sizeof(long long)과 같이 지정해야 하며 sizeof(long long *)과 같이 포인터의 크기를 지정하면 안 된다.

---

- **sizeof()로 배열의 크기 구하기**

  ```C
  int numArr[10] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 110 };    // 크기가 10인 int형 배열
  
      printf("%d\n", sizeof(numArr));                  // 40: 4바이트 크기의 요소가 10개이므로 40
      printf("%d\n", sizeof(numArr) / sizeof(int));    // 10: 배열의 크기를 구할 때는
                                                       // 전체 공간을 요소의 크기로 나눠줌
  ```

---

- **배열의 이름은 배열의 첫 원소를 가리키는 주소값**

  ![배열의 이름](https://dojang.io/pluginfile.php/364/mod_page/content/17/unit36-2.png)

---

- **scanf 심화**

  - ```C
    scanf("%d", &a); // stdin(입력 버퍼)에서 숫자 또는 한글자 이상의 공백문자를 숫자로 읽는다.
    ```

  - ```C
    scanf("%d ", &a); // stdin(입력 버퍼)에서 숫자 또는 한 글자 이상의 공백문자, 한 글자 이상의 공백문자가 아닌 문자를 입력해야 진행된다.
    				// scanf는 " "과 "\n"을 같은 공백문자로 취급한다.
    ```

    위에서 공백 아닌 문자를 입력해야 되는 이유는 간단하다. 컴퓨터 입장에서 "%d "라는 것은 숫자를 하나 입력 받고 공백문자를 입력을 받아야 하는데 내가 얼마나 많은 공백 문자를 입력할 지 컴퓨터는 모르므로(한 글자 이상의 공백문자를 모두 하나의 공백으로 처리하므로) 아무리 수많은 공백 문자를 입력해도 공백문자가 아닌 문자를 입력하기 전까지는 다음단계로 진행되지 않고 계속 공백문자를 받는 것이다. 

    이 때, 숫자 또는 한 글자 이상의 공백문자를 읽고  추가로 입력해야 하는 공백문자가 아닌 문자는 입력 버퍼에 그대로 놔둔다. 예를 들어 3 4를 입력하면 4는 입력버퍼에 남게된다. 이 다음 단계에서 다시 위의 코드를 실행하게 된다면 입력 버퍼에 남아있는 4가 a에 입력되고 다시 입력해야 되는 공백 아닌 숫자는 또 입력 버퍼에 남게 되는 것이다. 

    **즉, scanf에서 입력 받을 때 서식 지정자를 넘어서는 입력이 받아지면 그 값을 그냥 무시하는 것이 아니고 입력 버퍼에 저장해 두었다가 다음에 사용한다.**

---

- **2차원 배열**

  - 배열이름&#91;**세로 인덱스**&#93;&#91;**가로 인덱스**&#93;로 선언한다.

    ```C
    int numArr[3][4] = {    // 세로 크기 3, 가로 크기 4인 int형 2차원 배열 선언
            { 11, 22, 33, 44 },
            { 55, 66, 77, 88 },
            { 99, 110, 121, 132 }
        }; // 행렬과 유사하다
    ```

  - 배열 크기 구하기

    ```C
    int numArr[3][4] = {    // 세로 크기 3, 가로 크기 4인 int형 2차원 배열 선언
            { 11, 22, 33, 44 },
            { 55, 66, 77, 88 },
            { 99, 110, 121, 132 }
        };
    
        printf("%d\n", sizeof(numArr));    // 48: 4바이트 크기의 요소가 12(4*3)개이므로 48
    
        int col = sizeof(numArr[0]) / sizeof(int);    // 4: 2차원 배열의 가로 크기를 구할 때는 
                                                      // 가로 한 줄의 크기를 요소의 크기로 나눠줌
    
        int row = sizeof(numArr) / sizeof(numArr[0]); // 3: 2차원 배열의 세로 크기를 구할 때는 
                                        // 배열이 차지하는 전체 공간을 가로 한 줄의 크기로 나눠줌
    ```

  - 2차원 배열 포인터

    - *자료형(&#42;포인터이름)[가로크기];* 로 선언한다.

      ```c
      int numArr[3][4] = {    // 세로 3, 가로 4 크기의 int형 2차원 배열 선언
              { 11, 22, 33, 44 },
              { 55, 66, 77, 88 },
              { 99, 110, 121, 132 }
          };
      
          int (*numPtr)[4] = numArr;
      
          printf("%p\n", *numPtr); // 002BFE5C: 2차원 배열 포인터를 역참조하면 세로 첫 번째의 주소가 나옴
                                   // 컴퓨터마다, 실행할 때마다 달라짐
      
          printf("%p\n", *numArr); // 002BFE5C: 2차원 배열을 역참조하면 세로 첫 번째의 주소가 나옴
                                   // 컴퓨터마다, 실행할 때마다 달라짐
      
          printf("%d\n", numPtr[2][1]);    // 110: 2차원 배열 포인터는 인덱스로 접근할 수 있음
      
          printf("%d\n", sizeof(numArr));  // 48: sizeof로 2차원 배열의 크기를 구하면 배열이 메모리에 
                                           // 차지하는 공간이 출력됨
      
          printf("%d\n", sizeof(numPtr));  // 4 : sizeof로 2차원 배열 포인터의 크기를 
                                           // 구하면 포인터의 크기가 출력됨(64비트라면 8)
      ```

    - 3차원 배열

      - *자료형 배열이름[높이]&#91;세로크기&#93;[가로크기];* 로 선언한다.

        ```c
        int numArr[2][3][4] = {
            {
                { 11, 22, 33, 44 },
                { 55, 66, 77, 88 },
                { 99, 110, 121, 132 }
            },
            {
                { 111, 122, 133, 144 },
                { 155, 166, 177, 188 },
                { 199, 1110, 1121, 1132 }
            }
        };
        ```

      - 3차원 배열을 포인터에 할당하려면 세로x가로로 구성된 면을 가리키는 포인터를 선언한다.

        *자료형 (&#42;포인터이름)[세로크기]&#91;가로크기&#93;*

        ```c
        int (*numPtr)[3][4] = numArr;    // 세로 크기 3, 가로 크기 4인 면을 가리키는 포인터 선언
        ```

    -  전치행렬 구하기 code

      ```c
      #define _CRT_SECURE_NO_WARNINGS
      #include <stdio.h>
      
      int main()
      {
          int matrix[5][5];
      
          for (int i = 0; i < 5; i++)
          {
              for (int j = 0; j < 5; j++)
              {
                  scanf("%d", &matrix[i][j]); // 5x5 행렬 입력
              }
          }
      
          for (int i = 0; i < 5; i++)
          {
              for (int j = 0; j < 5; j++)
              {
                  printf("%d ", matrix[j][i]); // 열과 행을 바꿔서 출력
              }
              printf("\n");
          }
          return 0;
      }
      ```

      코드는 1. 알아보기 쉽게 2. 간결하게!

---

- **배열 동적 할당**

  - 자료형&#42; 포인터이름 = malloc(sizeof(자료형) &#42; 크기); 로 선언한다.

    ```c
    int numArr[10];                           // int형 요소 10개를 가진 배열 생성
    int* numPtr = malloc(sizeof(int) * 10);   // int 10개 크기만큼 메모리 할당
    
    numArr[0] = 10;    // 배열을 인덱스로 접근하여 값 할당
    numPtr[0] = 10;    // 포인터를 인덱스로 접근하여 값 할당
    
    free(numPtr);   // 메모리 해제
    ```

    배열과 메모리가 할당된 포인터는 생성 방법만 다를 뿐 값을 다루는 방법은 같다. index로 접근해서 작업을 수행해도 되고 포인터 + 숫자(ex. numPtr[1] == &#42;(numPtr + 1))로 접근해도 된다.

  - 2차원 배열 동적할당

    - **자료형 \**포인터이름 = malloc(sizeof(자료형 \*) \* 세로크기);**와 같이 세로 공간 메모리 할당

    - - 반복문으로 반복하면서 **포인터[i] = malloc(sizeof(자료형) \* 가로크기);**와 같이 가로 공간 메모리 할당
      - 반복문으로 반복하면서 **free(포인터[i]);**와 같이 가로 공간 메모리 해제
      - **free(포인터);**와 같이 세로 공간 메모리 해제

    - ```c
      int** m = malloc(sizeof(int *) * 3);   // 이중 포인터에 (int 포인터 크기 * 세로 크기)만큼
                                                 // 동적 메모리 할당. 배열의 세로
      
      for (int i = 0; i < 3; i++)            // 세로 크기만큼 반복
      {
          m[i] = malloc(sizeof(int) * 4);    // (int 크기 * 가로 크기)만큼 동적 메모리 할당.
                                                 // 배열의 가로
      }
      for (int i = 0; i < 3; i++)    // 세로 크기만큼 반복
      {
          free(m[i]);                // 2차원 배열의 가로 공간 메모리 해제
      }                              // 순서 주의! 가로 먼저 해제 후 세로 해제
      
      free(m);    // 2차원 배열의 세로 공간 메모리 해제
      
      ```

    - 위 과정을 그림으로 나타내면 다음과 같다.

    - ![2차원 배열 동적할당](https://dojang.io/pluginfile.php/383/mod_page/content/22/unit38-3.png)

---

- **C언어 문자열**

  - char* 변수이름 = "문자열"; 로 선언한다.

  - 문자열은 변수 안에 저장되지 않고, 문자열이 있는 곳의 메모리 주소만 포인터에 저장한다.

  - 단, 이 문자열 리터럴이 있는 메모리 주소는 읽기 전용이므로 다른 문자열을 덮어쓸 수는 없다. 따라서 문자열 포인터는 인덱스로 접근하여 문자를 할당하면 안된다.

  - 서식지정자는 %s를 사용하면 된다.

  - **중요!** C 언어의 문자열은 마지막에 항상 널 문자가 붙는다는 점이다. 이 널 문자는 문자열의 끝을 나타낸다.

  - 또는 char 배열이름[크기] = "문자열"; 로 배열을 이용하여 저장할 수 도 있다.

    ```c
    char s1[10] = "Hello";  // 크기가 10인 char형 배열을 선언하고 문자열 할당
    
    printf("%s\n", s1);     // Hello: %s로 문자열 출력
    ```

    문자열 리터럴을 포인터에 할당하는 방식과는 달리 문자열을 배열에 저장하는 방식은 배열 요소 하나 하나에 문자가 저장된다. 한 가지 주의할 점은 배열을 선언한 즉시 문자열로 초기화해야 한다는 점이다. 배열을 미리 선언해놓고 문자열을 나중에 할당할 수는 없다.

    ```c
    char s1[10];     // 크기가 10인 char형 배열 선언
        
    s1 = "Hello";    // 이미 선언된 배열에 문자열을 할당하면 컴파일 에러 발생
    ```

    다음과 같이 문자 배열을 선언하면서 문자열을 바로 할당할 때는 배열의 크기를 생략할 수 있다.

    ```c
    char s1[] = "Hello";    // 문자열을 할당할 때 배열의 크기를 생략하는 방법
    ```

    문자열을 저장할 때 배열의 크기는 문자열 + 1(NULL 문자)이다.

    ![배열의 최소 크기](https://dojang.io/pluginfile.php/394/mod_page/content/30/unit39-4.png)

  - 문자열 포인터나 배열 이름을 scanf()에 넣을 때는 &연산자를 사용하지 않는다. 그 이유는 이미 주소를 반환하고 있기 때문이다.

  - scanf에서 서식 지정자 %s로 문자열을 저장할 때 입력된 문자열에 공백이 있다면 문자열 포인터에는 공백 직전까지만 저장된다. 예를 들어 중간에 공백이 있는 Hello, world!를 입력하면 Hello,까지만 저장한다.

  - 공백까지 포함하여 입력을 받고 싶다면 scanf에서 서식지정자 %[^\n&#93;s 를 사용한다.

  - 입력받은 문자열을 저장할 때 배열 형식의 경우에는 그냥 저장하면 되고 포인터 형식의 경우에는 동적할당을 받은 뒤 저장해야 한다.

    ```c
    char *s1 = malloc(sizeof(char) * 10);    // char 10개 크기만큼 동적 메모리 할당
    
    printf("문자열을 입력하세요: ");
    scanf("%s", s1);      // 표준 입력을 받아서 메모리가 할당된 문자열 포인터에 저장
    ```

    

---

- **EOF**

  EOF는 End Of File의 약자인데 말 그대로 파일의 끝으로 더 이상 값을 읽을 수 없는 상태를 나타냄.  콘솔(터미널, 명령 프롬프트)에서는 다음 키의 입력을 EOF로 정해놓았다.

  - Windows : Ctrl + Z
  - Linux : Ctrl + D

  EOF는 stdio.h 헤더 파일에 정의되어 있으며 정수 -1이다. 보통 EOF는 파일 처리 함수가 실패했을 때 반환된다.

---

- **문자열 길이 구하기**

  - strlen 함수로 구하며 `<string.h>`헤더파일에 존재한다.

  - strlen(문자열포인터); 또는 strlen(문자배열); 로 사용한다.

    ```c
    char *s1 = "Hello";       // 포인터에 문자열 Hello의 주소 저장
    char s2[10] = "Hello";    // 크기가 10인 char형 배열을 선언하고 문자열 할당
    
    printf("%d\n", strlen(s1));    // 5: strlen 함수로 문자열의 길이를 구함
    printf("%d\n", strlen(s2));    // 5: strlen 함수로 문자열의 길이를 구함
    ```

---

- **문자열 비교하기**

  - strcmp(s1, s2);와 같이 strcmp 함수에 비교할 문자열을 넣어주면 결과를 정수로 반환한다. 첫 번째 문자부터 차례대로 비교하며 비교 기준은 각 문자의 ASCII 코드이다.

    - -1: ASCII 코드 기준으로 문자열2(s2)가 클 때
    - 0: ASCII 코드 기준으로 두 문자열이 같을 때
    - 1: ASCII 코드 기준으로 문자열1(s1)이 클 때

  - ```c
     printf("%d\n", strcmp("aaa", "aaa"));    //  0: aaa와 aaa는 같으므로 0
     printf("%d\n", strcmp("aab", "aaa"));    //  1: aab와 aaa 중에서 aab가 크므로 1
     printf("%d\n", strcmp("aab", "aac"));    // -1: aab와 aac 중에서 aac가 크므로 -1
    ```

  - strcmp 함수는 운영체제에 따라서 동작 방식이 조금 다르다. Windows(Visual Studio)에서는 문자열이 다르면 1과 -1을 반환하지만 리눅스와 OS X에서는 ASCII 코드값의 차이를 반환한다. 그러므로 리눅스와 OS X에서 strcmp의 반환값을 판단할 때는 switch 분기문 대신 if조건문을 사용해야 한다.

    ```c
    char s1[20];
    char s2[20];
    
    printf("문자열 두 개를 입력하세요: ");
    scanf("%s %s", s1, s2);
    
    int ret = strcmp(s1, s2);    // 입력된 문자열 비교
    printf("반환값: %d\n", ret);
    
    // 리눅스와 OS X에서는 ASCII 코드값의 차이를 반환하므로
    // if 조건문으로 판단
    if (ret == 0)
    {
        printf("두 문자열이 같음\n");
    }
    else if (ret > 0)    // 양수일 때
    {
        printf("%s보다 %s가 큼\n", s2, s1);
    }
    else if (ret < 0)    // 음수일 때
    {
        printf("%s보다 %s가 큼\n", s1, s2);
    }
    ```

---

- **문자열 복사하기**

  - `<string.h>`헤더파일에 선언되어 있음

  - strcpy(대상문자열, 원본문자열);

    - 대상 문자열의 포인터를 반환

      ```c
      char s1[10] = "Hello";    // 크기가 10인 char형 배열을 선언하고 문자열 할당
      char s2[10];              // 크기가 10인 char형 배열을 선언
      
      strcpy(s2, s1);        // s1의 문자열을 s2로 복사
          
      printf("%s\n", s2);    // Hello
      ```

      복사된 결과가 저장될 배열의 크기는 반드시 NULL까지 들어갈 수 있어야 한다. 크기가 더 작다면 복사가 되더라도 문자열이 정상적으로 출력되지 않는다. 따라서 "Hello" 문자열이 복사되려면 배열의 크기는 최소한 6이 되어야 한다.

      문자열 포인터는 쓰기가 막혀있기 때문에 문자열 포인터에 복사하기 위해서는 동적할당을 해주어야 한다. 배열으로 선언된 문자열도 문자열 포인터에 복사할 수 있다.

      ```c
      char *s1 = "hello";                      // 문자열 포인터
      char *s2 = malloc(sizeof(char) * 10);    // char 10개 크기만큼 동적 메모리 할당
      
      strcpy(s2, s1);        // s1의 문자열을 s2로 복사
      
      printf("%s\n", s2);    // Hello
      
      free(s2);    // 동적 메모리 해제
      ```

---

- **문자열 붙이기**

  - `<string.h>`헤더파일에 선언되어 있다.

  - strcat(문자열을 붙일 문자열, 붙일 문자열);

    - 최종 문자열의 포인터를 반환

    ```C
    char s1[10] = "world";
    char s2[20] = "Hello"; // s2 뒤에 붙일 것이므로 배열 크기를 크게 만듦
    
    strcat(s2, s1);        // s2 뒤에 s1를 붙임
    
    printf("%s\n", s2);    // Helloworld
    ```

    문자열 포인터는 읽기전용이므로 동적할당을 해주어야 붙일 수 있다.

    ```C
    char *s1 = "world";                      // 문자열 포인터
    char *s2 = malloc(sizeof(char) * 20);    // char 20개 크기만큼 동적 메모리 할당
    
    strcpy(s2, "Hello");   // s2에 Hello 문자열 복사
    
    strcat(s2, s1);       // s2 뒤에 s1을 붙임
    
    printf("%s\n", s2);   // Helloworld
    
    free(s2);    // 동적 메모리 해제
    ```

    배열로 선언된 문자열도 문자열 포인터에 붙일 수 있다.

---

- **sprintf 함수**

  - `<stdio.h>`헤더 파일에 저장되어 있다.

  - 여러 값들을 서식 지정자를 이용해서 하나의 문자열로 저장한다.

  - sprintf(배열, 서식, 값1, 값2, ...);

    - 성공하면 만든 문자열의 길이를 반환, 실패하면 음수를 반환
    - ex) 학번, 이름을 입력 받은 뒤 그것들을 하나의 문자열로 만들어서 같이 저장하는 것 같은 상황에 쓰일 듯

    ```c
    char s1[30];    // 크기가 30인 char형 배열을 선언
    
    sprintf(s1, "%c %d %f %e", 'a', 10, 3.2f, 1.123456e-21f);    // 문자, 정수, 실수를 문자열로 만듦
    
    printf("%s\n", s1);    // a 10 3.200000 1.123456e-21: 문자열 s1 출력
    ```

    보통 s1과 같이 문자열을 저장할 빈 배열을 **버퍼(buffer)**라고 부른다.

    문자열 포인터로 하려면 위와 동일하게 malloc 함수로 동적 메모리 할당 뒤 똑같이 하면 됨.

---

- **문자열에서 특정 문자 검색하기**

  - `<string.h>`헤더파일에 선언되어 있다.

  - strchr(대상문자열, 검색할문자);

    - 문자를 찾았으면 문자로 시작하는 문자열의 포인터를 반환, 문자가 없으면 NULL을 반환

    ```c
    char s1[30] = "A Garden Diary";  // 크기가 30인 char형 배열을 선언하고 문자열 할당
    
    char *ptr = strchr(s1, 'a');     // 'a'로 시작하는 문자열 검색, 포인터 반환
    
    while (ptr != NULL)              // 검색된 문자열이 없을 때까지 반복
    {
        printf("%s\n", ptr);         // 검색된 문자열 출력
        ptr = strchr(ptr + 1, 'a');  // 포인터에 1을 더하여 a 다음부터 검색
    }
    ```

  - strrchr(대상문자열, 검색할문자);

    - 문자열의 끝에서부터 역순으로 검색해서 문자를 찾았으면 해당 문자로 시작하는 문자열의 포인터를 반환, 문자가 없으면 NULL을 반환

    ```c
    char s1[30] = "A Garden Diary";    // 크기가 30인 char형 배열을 선언하고 문자열 할당
    
    char *ptr = strrchr(s1, 'a');      // 문자열 끝에서부터 'a'로 시작하는 문자열 검색. 포인터 반환
    
    printf("%s\n", ptr);   // ary
    ```

  - strstr(대상문자열, 검색할문자열);

    - 문자열을 찾았으면 문자열로 시작하는 문자열의 포인터를 반환, 문자열이 없으면 NULL을 반환

    ```c
    char s1[30] = "A Garden Diary";     // 크기가 30인 char형 배열을 선언하고 문자열 할당
    
    char *ptr = strstr(s1, "den");      // den으로 시작하는 문자열 검색, 포인터 반환
    
    printf("%s\n", ptr);    // den Diary
    ```

---

- **문자열 자르기**

  - `<string.h>`헤더파일에 선언되어있음

  - strtok(대상문자열, 기준문자);로 선언한다.

    - 자른 문자열을 반환, 더 이상 자를 문자열이 없으면 NULL반환

    ```c
    char s1[30] = "The Little Prince";  // 크기가 30인 char형 배열을 선언하고 문자열 할당
    
    char *ptr = strtok(s1, " ");      // " " 공백 문자를 기준으로 문자열을 자름, 포인터 반환
    
    while (ptr != NULL)               // 자른 문자열이 나오지 않을 때까지 반복
    {
        printf("%s\n", ptr);          // 자른 문자열 출력
        ptr = strtok(NULL, " ");      // 다음 문자열을 잘라서 포인터를 반환
    }
    ```

    ```c
    // 출력값
    The
    Little
    Prince
    ```

    strtok 함수를 사용할 때는 처음에만 자를 문자열를 넣어주고, 그다음부터는 NULL을 넣어준다는 점을 기억한다.

    ![strtok가 문자열을 자르는 원리1](https://dojang.io/pluginfile.php/440/mod_page/content/35/unit45-1.png)

    ![strtok가 문자열을 자르는 원리2](https://dojang.io/pluginfile.php/440/mod_page/content/35/unit45-2.png)

    ![strtok가 문자열을 자르는 원리3](https://dojang.io/pluginfile.php/440/mod_page/content/35/unit45-3.png)

    ![strtok가 문자열을 자르는 원리4](https://dojang.io/pluginfile.php/440/mod_page/content/35/unit45-4.png)

    strtok 함수는 문자열을 새로 생성해서 반환하는 것이 아니라 자르는 부분을 널 문자(NULL)로 채운 뒤 잘린 문자열의 포인터를 반환한다. 따라서 원본 문자열의 내용을 바꾸므로 사용에 주의해야 한다.

    문자열 포인터를 이용할 때는 문자열 포인터에 문자열 리터럴을 할당하는 대신, 동적 메모리를 할당하고, 문자열을 복사해야 한다.

    ```c
    char *s1 = malloc(sizeof(char) * 30);    // char 30개 크기만큼 동적 메모리 할당
    
    strcpy(s1, "The Little Prince");    // s1에 문자열 복사
    
    char *ptr = strtok(s1, " ");    // 동적 메모리에 들어있는 문자열은 자를 수 있음
    
    while (ptr != NULL)
    {
       printf("%s\n", ptr);
       ptr = strtok(NULL, " ");
    }
    
    free(s1);    // 동적 메모리 해제
    ```

  -  기준 문자 한번에 여러 개 설정하기

    기준 문자를 한 번에 여러 개 지정하기 위해서는 다음과 같이 하면 된다.

    ```c
    char s1[30] = "2015-06-10T15:32:19";    // 크기가 30인 char형 배열을 선언하고 문자열 할당
    
    char *ptr = strtok(s1, "-T:");    // -, T, 콜론을 기준으로 문자열을 자름
                                      // 포인터 반환
    
    while (ptr != NULL)               // 자른 문자열이 나오지 않을 때까지 반복
    {
        printf("%s\n", ptr);          // 자른 문자열 출력
        ptr = strtok(NULL, "-T:");    // 다음 문자열을 잘라서 포인터를 반환
    }
    ```

    ```c
    // 출력값
    2015
    06
    10
    15
    32
    19
    ```

---

- **문자열을 숫자로 변환하기**

  - `<stdlib.h>`헤더파일에 선언되어 있다.

  - atoi(문자열);

    - 성공하면 변환된 정수를 반환, 실패하면 0을 반환.

    - 변환 예

      ```
      283a → 283
      283a30 → 283
      283! → 283
      283!30 → 283
      a30 → 0
      !30 → 0
      abc → 0
      !@# → 0
      ```

      문자열은 정수로 되어있어야 하며 알파벳 영문자, 특수 문자가 포함되면 해당 문자부터는 변환을 하지 않는다. 또한, 처음부터 숫자가 아니면 0으로 변환된다.

  - strtol(문자열, 끝포인터, 진법);

    - 특정 진법으로 표기된 문자열을 정수로 변환

    - 성공하면 변환된 정수를 반환, 실패하면 0을 반환.

      ```c
      char *s1 = "0xaf10";    // "0xaf10"은 문자열
      int num1;
      
      num1 = strtol(s1, NULL, 16);    // 16진법으로 표기된 문자열을 정수로 변환
      
      printf("%x %d\n", num1, num1);  // af10 44816
      ```

    - 여러 진법이 한 번에 쓰인 문자열에서 각각 변환하고 싶다면 끝 포인터를 수정해주면 된다.

      ```c
      char *s1 = "0xaf10 42 0x27C 9952"; // "0xaf10 42 0x27C 9952"는 문자열
      int num1, num2, num3, num4;
      char *end;    // 이전 숫자의 끝 부분을 저장하기 위한 포인터
      
      num1 = strtol(s1, &end, 16);    // 16진법으로 표기된 문자열을 정수로 변환
      num2 = strtol(end, &end, 10);   // 10진법으로 표기된 문자열을 정수로 변환
      num3 = strtol(end, &end, 16);   // 16진법으로 표기된 문자열을 정수로 변환
      num4 = strtol(end, NULL, 10);   // 10진법으로 표기된 문자열을 정수로 변환
      
      printf("%x\n", num1);    // af10
      printf("%d\n", num2);    // 42
      printf("%X\n", num3);    // 27C
      printf("%d\n", num4);    // 9952
      ```

  - atof(문자열);

    - 성공하면 변환된 실수를 반환, 실패하면 0을 반환.

    - 특수문자가 섞였을 떄는 atoi와 규칙이 똑같음.

    - 다음과 같이 알파벳 e를 사용하여 지수 표기법으로 된 문자열도 실수로 바꿀 수 있다.

      ```c
      char *s1 = "3.e5";   // "3.e5"는 문자열
      float num1;
      
      num1 = atof(s1);     // 문자열을 실수로 변환하여 num1에 할당
      
      printf("%e %f\n", num1, num1);    // 3.000000e+05 300000.000000
      ```

  - strtof(문자열, 끝포인터);

    - 성공하면 변환된 실수를 반환, 실패하면 0을 반환

    - 여러 개의 실수로 된 문자열을 실수로 바꾸어 각각 저장할 때 쓰인다.

      ```c
      char *s1 = "35.283672 3.e5 9.281772 7.e-5";    // "35.283672 3.e5f 9.2817721 7.e-5f"는 문자열
      float num1, num2, num3, num4;
      char *end;    // 이전 숫자의 끝 부분을 저장하기 위한 포인터
      
      num1 = strtof(s1, &end);     // 문자열을 실수로 변환
      num2 = strtof(end, &end);    // 문자열을 실수로 변환
      num3 = strtof(end, &end);    // 문자열을 실수로 변환
      num4 = strtof(end, NULL);    // 문자열을 실수로 변환
      
      printf("%f\n", num1);    // 35.283672
      printf("%e\n", num2);    // 3.000000e+05
      printf("%f\n", num3);    // 9.281772
      printf("%e\n", num4);    // 7.000000e-05
      ```

    - 자료형이 double일 때는 strtod(문자열, 끝포인터); 를 사용한다. 사용법은 strtof()와 같다.

---

- **숫자를 문자열로 변환하기**

  - `<stdio.h>`헤더파일에 선언되어 있다.

  - sprintf(문자열, "%d", 정수); -> 10진수로 변환

  - sprintf(문자열, "%x", 정수); -> 16진수로 변환 (알파벳이 소문자로 저장됨)

  - sprintf(문자열, "%X", 정수); -> 16진수로 변환 (알파벳이 대문자로 저장됨)

  - sprintf(문자열, "%f", 실수) -> 실수 변환

  - sprintf(문자열, "%e", 실수) -> 지수 표기법으로 된 문자열 변환

    ```c
    // 10진수
    char s1[10];       // 변환한 문자열을 저장할 배열
    int num1 = 283;    // 283은 정수
    
    sprintf(s1, "%d", num1);    // %d를 지정하여 정수를 문자열로 저장
    
    printf("%s\n", s1);         // 283
    
    // 16진수
    char s1[10];      // 변환한 문자열을 저장할 배열
    int num1 = 283;   // 283은 정수
    
    sprintf(s1, "0x%x", num1);    // %x를 지정하여 정수를 16진법으로 표기된 문자열로 저장
                                  // 16진수라는 것을 나타내기 위해 앞에 0x를 붙임
    
    printf("%s\n", s1);           // 0x11b
    ```

---









