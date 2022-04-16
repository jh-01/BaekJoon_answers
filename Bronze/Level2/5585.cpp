#include <iostream>
using namespace std;

int main(){
	int pay;
	int res = 0;
	int coin[6] = {500, 100, 50, 10, 5, 1};
	
	cin >> pay;
	int change = 1000 - pay;
	for(int i = 0; i < 6; i++){
		res += change / coin[i];
		change = change % coin[i];
	}
	cout << res;
	
	return 0;
}
