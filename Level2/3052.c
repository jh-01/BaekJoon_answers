#include <stdio.h>

int main(void) 
{
	int rest[10];
	int num, i, j, result = 0;

	//숫자 입력받기
	for (i = 0; i < 10; i++) {
		scanf("%d", &num);
		rest[i] = num % 42;
	}

	//나머지 계산
	for (i = 0; i < 10; i++) {
		int count = 0;
		for (j = 0; j < i; j++) {
			if (rest[i] == rest[j])
				count++;
		}
		if (count == 0)
			result++;
	}
	printf("%d\n", result);
	return 0;
}
