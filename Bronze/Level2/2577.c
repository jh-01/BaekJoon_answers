#include <stdio.h>

int main(void)
{
	int a, b, c, mul, num, i;
	scanf("%d\n%d\n%d", &a, &b, &c);
	mul = a * b * c;
	int arr[10] = { 0, };

	while (mul > 0) {
		num = mul % 10;
		arr[num]++;
		mul /= 10;
	}

	for (i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}

	return 0;
}
