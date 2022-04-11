#include <stdio.h>

int main(void)
{
	int x1, x2, x3; // 각각의 날짜를 입력받을 변수 선언 
	int y1, y2, y3;
	int flag = 0;
	
	scanf("%d %d %d", &x1, &x2, &x3);
	scanf("%d %d %d", &y1, &y2, &y3);
	
	if(x1 != y1){
		if(x2 == y2){
			if(x3 <= y3) flag = y1 - x1;
			else flag = y1 - x1 - 1;
		}
		else if(x2 < y2) flag = y1 - x1;
		else flag = y1 - x1 - 1;
	} 
	
	printf("%d\n%d\n%d", flag, y1 - x1 + 1, y1 - x1);
	
	return 0;
} 
