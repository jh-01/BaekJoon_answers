#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 100001
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b){
	if(a.first < b.first)
		return 1;
	else return 0;
}

int main(){
	int T, N;
	vector<pair<int, int> > v;
	cin >> T;
	while(T--){
		int min = 100001, count = 0;
		v.clear();
		cin >> N;
		for(int i = 0; i < N; i++){
			int a, b;
			cin >> a >> b;
			v.push_back(make_pair(a, b));
		}
		sort(v.begin(), v.end(), compare);
		for(int i = 0; i < N; i++){
			if(min > v[i].second){
				min = v[i].second;
				count++;
			}
		}
		cout << count << '\n';
	}
	return 0;
}
