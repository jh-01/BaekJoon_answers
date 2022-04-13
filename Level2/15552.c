#include <stdio.h>

int main(void)
{
	int a, b, i, n;
	scanf("%d", &n);
	for(i = n; i > 0; i--){
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}
	
	return 0;
}
