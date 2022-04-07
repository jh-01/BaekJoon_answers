#include <stdio.h>

int main(void) {
    int n, sum=0;
    int min, sec;

    for(int i=0;i<4;i++)
    {
        scanf("%d",&n);
        sum += n;
    }

    min = sum/60;
    sec = sum%60;
    printf("%d\n", min);
    printf("%d", sec);
    return 0;
}
