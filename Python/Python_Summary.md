# Python 내용 정리

*본 문서는 Python을 학습하면서 새롭게 알게 된 내용들을 정리한 문서이다.*

- **새로운 연산자**
  - &#42;&#42; 연산자 : 제곱수
    ```Python
    3 ** 4 
    # 81
    ```

  - // 연산자 : 나눗셈의 몫
    ```Python
    10 // 3
    # 3
    ```
    
---

- **문자형 기본**
  - 문자열에 '를 넣고 싶으면 문자열을 "로 감싼다.
  - 마찬가지로 "를 넣고 싶으면 문자열을 '로 감싼다.
  - \를 활용하면 '와 "를 문자 그대로 사용할 수 있다.
  
    `'Claude\'s favorite food is meat'`
  - '''나 """로 감싸면 여러줄의 입력이 가능하다.
    ```Python
    multiline = '''
                Life is too short
                You need Python
                '''
    ```
  - 문자열의 연산이 가능하다.
    - 문자열 덧셈
      ```Python
      head = "Python"
      tail = " is fun!"
      head + tail
      # Python is fun!
      ```
    - 문자열 곱셈
      ```Python
      a = "Python"
      a * 2
      # PythonPython
      ```
      이것을 잘 활용하면 제목에 선표현이 가능하다.
      ```Python
      print("=" * 50)
      print("My programm")
      print("=" * 50)
      '''
      ==================================================
      My programm
      ==================================================
      '''
      ```
  - 문자열 길이 함수 len()
  
    print()와 같은 기본 내장함수로 문자열의 길이를 리턴한다.
    ```Python
    a = "Life is too short"
    len(a)
    # 17
    ```
  
---

- **문자열 인덱싱**
  
  index가 음수면 뒤에서부터 센다.
  ```Python
  a = "Life if too short, You need Python"
  a[-1]
  # 뒤에서 첫번째 글자 "n"
  # 뒤에서 부터 셀 때는 1부터 센다.
  ```
  
---

- **문자열 슬라이싱**
  ```Python
  a = "Life is too short, You need Python"
  a[0:4]
  # 'Life'
  ```
  - 슬라이싱 기법으로 a[시작 번호:끝 번호]를 지정할 때 끝 번호에 해당하는 것은 포함하지 않는다.
    ```Python
    a[0:4] 
    # 0 <= a < 4
    ```  
  - 슬라이싱 할 때 항상 시작 번호가 0일 필요는 없고 끝 번호 부분을 생략하면 시작 번호부터 그 문자열의 끝까지 
    뽑아낸다.
    ```Python
    a[19:]
    # 'You need Python'
    ```
  - 마찬가지로 시작 번호를 생략하면 문자열의 처음부터 끝 번호까지 뽑아내고 둘 다 생략하면 문자열의 처음부터
    끝까지 뽑아낸다.
    ```Python
    a[:17]
    # 'Life is too short'
    a[:]
    # 'Life is too short, You need Python'
    ```
  - 슬라이싱에서도 인덱싱과 마찬가지로 마이너스(-) 기호를 사용할 수 있다.
    ```Python
    a[19:-7]
    # 'You need'
    # a[19]에서부터 a[-8]까지
    ```
  - 슬라이싱을 활용하여 문자열 요솟값 바꾸기
    
    문자열의 요솟값은 바꿀 수 있는 값이 아니기 때문에 다음과 같이 코드를 작성하면 오류가 발생한다.
    ```Python
    a = "Pithon"
    a[1] = 'y'
    # Error!
    ```
    따라서 슬라이싱을 활용하여 바꿔주어야 한다.
    ```Python
    a = "Pithon"
    a[:1] + 'y' + a[2:]
    # 'Python'
    ```
    
---

- **문자열 포매팅**

  문자열 안에 숫자, 문자열, 변수 등을 대입하는 것을 말한다.
  ```Python
  "I eat %d apples." % 3
  # 'I eat 3 apples.'
  
  "I eat %s apples." % "five"
  # 'I eat five apples.'
  
  number = 3
  "I eat %d apples." % number
  # ' I eat 3 apples.'
  
  number = 10
  day = "three"
  "I ate %d apples, so I was sick for %s days." % (number, day)
  # 'I ate 10 apples, so I was sick for three days.'
  ```
  
  - 문자열 포맷 코드
    
    |코드|설명|
    |--|-----------------------|
    |%s|문자열(string)|
    |%c|문자 1개(character)|
    |%d|정수(Integer)|
    |%f|부동소수(floating-point|
    |%o|8진수|
    |%x|16진수|
    |%%|Literal %|
    
    %s 포맷 코드는 자동으로 % 뒤에 있는 값을 문자열로 바꾸기 때문에 자료형을 생각하지 않고 넣어도 된다.
    
  - 정렬, 소수점 표현하기
    ```Python
    "%10s" % "hi"
    # '        hi'
    "%-10sjane." % "hi"
    # 'hi        jane.'
    
    "%0.4f" % 3.42134234
    # '3.4213'
    "%10.4f" % 3.42134234
    # '    3.4213'
    
  - format 함수를 사용한 포매팅
    ```Python
    "I eat {0} apples".format(3)
    # 'I eat 3 apples'
    
    "I eat {0} apples".format("five")
    # 'I eat five apples'
    
     number = 3
     "I eat {0} apples".format(number)
     # 'I eat 3 apples'
     
     number = 10
     day = "three"
     "I ate {0} apples. so I was sick for {1} days.".format(number, day)
     # 'I ate 10 apples. so I was sick for three days.'
  
     # 이름으로 넣기
     "I ate {number} apples. so I was sick for {day} days.".format(number=10, day=3)
     # 'I ate 10 apples. so I was sick for 3 days.'
     
     # 이름과 인덱스 
     "I ate {0} apples. so I was sick for {day} days.".format(10, day=3)
     # 'I ate 10 apples. so I was sick for 3 days.'
     
