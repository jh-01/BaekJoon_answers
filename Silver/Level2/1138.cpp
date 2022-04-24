#include <iostream>

using namespace std;

int N;
int d[11];

int main(){
	cin >> N;
	for(int i = 1; i <= N; i++){
		int x;
		cin >> x;
		int count = 0;
		for(int j = 1; j <= N; j++){
			if(count == x && d[j] == 0){
				d[j] = i;
				break;
			}
			if(d[j] == 0) count++;
		}
	}
	
	for(int i = 1; i <= N; i++){
		cout << d[i] << ' ';
	}
	return 0;
}
