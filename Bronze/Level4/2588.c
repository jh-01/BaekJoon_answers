#include <stdio.h>

int main(void)
{
	int num[6];
	scanf("%d\n%d", &num[0], &num[1]);
	num[2] = num[0] * (num[1]%10);
	num[3] = ((num[0]*(num[1]%100))-(num[0]*(num[1]%10)))/10;
	num[4] = num[0] * (num[1]/100);
	num[5] = num[2] + num[3] + num[4];
	printf("%d\n%d\n%d\n%d", num[2], num[3], num[4], num[0]*num[1]);
	return 0;
}
