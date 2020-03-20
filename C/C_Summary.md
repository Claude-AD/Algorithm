# C 내용 정리

본 문서는 C를 학습하면서 새롭게 알게 된 내용들을 정리한 문서이다.

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
    
    
  
    
   
