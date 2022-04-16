#include <iostream>

using namespace std;

int main(){
	int result = 0;
	int number[10] = {0,};
	string a;
	
	cin >> a;
	for(int i = 0; i < a.size(); i++){
		result += a[i] - '0';
		number[a[i] - '0']++;
	}	
	if(number[0] > 0 && result % 3 == 0){
		for(int i = 9; i >= 0; i--){
			for(int j = 0; j < number[i]; j++){
				cout << i;
			}
		}
	} else{
		cout << -1;
	}
	return 0;
}
