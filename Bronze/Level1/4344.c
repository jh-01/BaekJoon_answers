#include <stdio.h>
#define MAXNUM 1000
int main()
{
	int c, i, j, n;
	scanf("%d", &c);

	for (i = 0; i < c; i++) {
		int sum = 0;
		double average = 0.0;
		char std[MAXNUM] = { 0 };
		scanf("%d", &n);

		for (j = 0; j < n; j++) {
			scanf("%d", &std[j]);
			sum += std[j];
		}

		average = (double)sum / n;
		int count = 0;
		for (j = 0; j < n; j++) {
			if (std[j] > average)	count++;
		}

		printf("%.3lf%\n", (double)count * 100 / n);
	}
	return 0;
}
