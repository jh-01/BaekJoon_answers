#include <iostream>
using namespace std;

int main(void){
	int N, K;
	int res = 0;
	int coin[10];
	
	cin >> N >> K;
	for(int i = 0; i < N; i++){
		cin >> coin[i];
	}
	for(int i = N - 1; i >= 0; i--){
		res += K / coin[i];
		K %= coin[i];
	}
	cout << res;
	return 0;
}
