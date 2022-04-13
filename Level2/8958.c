#include <stdio.h>
#include <string.h>

int main(void)
{
	int j, i, n, cnt, result;
	char quiz[100];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		cnt = result = 0;
		scanf("%s", &quiz);
		for (j = 0; j < strlen(quiz); j++) {
			if (quiz[j] == 'O') {
				result += cnt + 1;
				cnt++;
			}
			if(quiz[j] == 'X') {
				cnt = 0;
			}
		}
		printf("%d\n", result);
		
	}
	return 0;
}
