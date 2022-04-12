#include <stdio.h>

int main(void)
{
	int hour, minute, n;
	scanf("%d %d", &hour, &minute);
	if(minute >= 45)
		printf("%d %d", hour, minute - 45);
	else if(minute < 45){
		n = 45 - minute;
		minute = 60 - n;
		if(hour > 0 && hour <= 23)
			printf("%d %d", --hour, minute);
		else if(hour == 0){
			hour = 23;
			printf("%d %d", hour, minute);
		}
	}
	return 0;
}
