#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
	int N;
	int tmp = 0;
	int res = 0;
	vector<int> v;
	
	cin >> N;
	for(int i = 0; i < N; i++){
		int x;
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end()); // 오름차순 정렬
	for(int i = 0; i < N; i++){
		res += v[i] + tmp;
		tmp += v[i];
	}
	cout << res;
	return 0;
}
