#include <iostream>
using namespace std;

int main(){
	int n; // 시험장 개수
	int* a; // 응시자 수
	int b, c;  // 총감독관/부감독관
	long long int num = 0; // 필요한 감독관 수 
	
	scanf("%d", &n);
	a = new int[n];
	
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	} 
	scanf("%d %d", &b, &c);
	
	for(int i = 0; i < n; i++){
		if(a[i] <= b){
			num++;
			continue;
		}
		
		num++;
		if((a[i] - b) % c == 0)
			num += (a[i] - b) / c;
		else
			num += (a[i] - b) / c + 1;	
	} 
	printf("%lld", num);
	
	return 0;
}
