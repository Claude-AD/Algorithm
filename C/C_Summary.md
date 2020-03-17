# C 내용 정리

본 문서는 C를 학습하면서 새롭게 알게 된 내용들을 정리한 문서이다.

---

- **변수 선언**
  - 변수 이름은 영문과 밑줄문자(_)로 시작할 수 있지만 숫자로는 시작할 수 없습니다.
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
      - char(1byte) < short(2byte) < int(4byte) < long(4byte) < long long(8byte)
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

- **자료형의 최솟값과 최댓값**
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
  - 이런 자료형은 크기를 정확하게 표현해야 하는 파일 압축 및 암호화, 네트워크 프로그래밍을 할 때 특히 유용하며, 일반적인 프로그래밍을 할 때도 처음부터 `<stdint.h>`를 사용하는 것이 좋다.
  - stdint의 최소, 최댓값은 `<stdint.h>` 헤더 파일 안에 정의되어 있으므로 `<limits.h>` 헤더 파일을 사용하지 않아도 된다.
    - 부호 있는 정수(signed) 최솟값: INT8_MIN, INT16_MIN, INT32_MIN, INT64_MIN
    - 부호 있는 정수 최댓값: INT8_MAX, INT16_MAX, INT32_MAX, INT64_MAX
    - 부호 없는 정수(unsigned) 최솟값: 0
    - 부호 없는 정수 최댓값: UINT8_MAX, UINT16_MAX, UINT32_MAX, UINT64_MAX
