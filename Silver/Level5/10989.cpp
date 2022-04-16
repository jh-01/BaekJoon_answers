#include <iostream>
using namespace std;

int num[10001];

int main(void){
	int n, m;
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		scanf("%d", &m);
		num[m]++;
	}
	
	for(int i = 0; i < 10001; i++){
		while(num[i] != 0){
			printf("%d\n", i);
			num[i]--;
		}
	}
	return 0;
}
