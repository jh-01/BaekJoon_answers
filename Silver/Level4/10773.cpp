#include <iostream>
#include <stack>
using namespace std;

int K;
int arr[100000];
stack<int> s;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	long long isum = 0;
	cin >> K;
	for (int i = 0; i < K; i++) {
		int num;
		cin >> num;
		if (num == 0) s.pop();
		else s.push(num);
	}
	int size = s.size();
	for (int i = 0; i < size; i++) {
		isum += s.top();
		s.pop();
	}
	cout << isum << "\n";
	return 0;
}
