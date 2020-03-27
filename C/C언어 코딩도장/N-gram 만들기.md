# N-gram 만들기

[C 언어 코딩 도장 링크](https://dojang.io/mod/quiz/review.php?attempt=876071&cmid=404)

표준 입력으로 정수와 길이 10 이하의 문자열이 입력됩니다. 입력된 문자열을 정수만큼 문자 단위로 N-gram을 출력하는 프로그램을 만드세요(scanf 함수 호출 전에 문자열을 출력하면 안 됩니다). 만약 입력된 문자열의 길이가 입력된 정수 미만이라면 wrong을 출력하세요.

정답에는 C 언어 컴파일러에서 정상적으로 컴파일되는 전체 코드를 입력해야 합니다.

예

```C
// 입력
3 Beethoven
```

```c
// 출력
Bee
eet
eth
tho
hov
ove
ven
```

---

### 정답 코드

```C
#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int num; // N-gram의 N
	char* str = malloc(sizeof(char) * 11); // 저장될 문자열
	scanf("%d %s", &num, str); // N과 문자열을 입력받음

	if (strlen(str) < num) // 만약 N보다 문자열길이가 작으면
	{
		printf("wrong\n"); // wrong을 출력하고 프로그램 종료
	}
	else
	{
		for (int i = 0; i <= strlen(str) - num; i++) // N-gram 출력 시 문자열 인덱스를 벗어나지 않게 조정
		{
			for (int j = i; j < num + i; j++) // 0부터 N개씩 문자열 출력
			{
				printf("%c", str[j]);
			}
			printf("\n");
		}
	}

	free(str);
	return 0;
}
```

