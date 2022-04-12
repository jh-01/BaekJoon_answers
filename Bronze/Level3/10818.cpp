#include <iostream>

using namespace std;

int main(void){
	int N;
	int max = -1000001; 
	int min = 1000001;
	
	cin >> N;
	for(int i = 0; i < N; i++){
		int x;
		cin >> x;
		if(x < min)
			min = x;
		if(x > max)
			max = x;
	}
	cout << min << ' ' << max;
	return 0;
}
