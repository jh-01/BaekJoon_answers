#include <iostream> 
#include <vector> 
#include <algorithm> 
using namespace std; 

int main(void)
{
	ios_base::sync_with_stdio(0); 
	cin.tie(0);

	int n, x;
	long long sum = 0;
	cin >> n;
	vector<int> v;

	for (int i = 0; i < n; i++) {
		cin >> x;
		v.push_back(x);
	}

	sort(v.begin(), v.end());

	for (int i = 1; i <= n; i++) {
		sum += abs(i - v[i - 1]);
	}

	cout << sum;
	return 0;
}
