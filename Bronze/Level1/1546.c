#include <stdio.h>

int main(void)
{
	int n, i;
	double score[1000], sum = 0, max = 0;
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%lf", &score[i]);

		if (max < score[i])
			max = score[i];
	}

	for (i = 0; i < n; i++) {
		score[i] = (score[i] / max) * 100.0;
		sum += score[i];
	}

	printf("%.2lf\n", (sum/(double)n));
}
