#include <stdio.h>

int main(void)
{
	int i, max = 0, index;
	int array[9];
	for(i = 0; i < 9; i++){
		scanf("%d", &array[i]);
		if(array[i] > max){
			max = array[i];
			index = i;
		}
	}
	
	printf("%d\n%d", max, index + 1);
	return 0;
}
