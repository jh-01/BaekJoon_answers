#include <iostream>
using namespace std;

int N;
int arr[367];

int solve()
{
	int col = 0, row = 0;
	int sum = 0;

	for (int i = 1; i <= 366; i++) {
		arr[i] += arr[i - 1];
		if (arr[i] == 0) {
			sum += row * col;
			row = 0, col = 0;
		}
		else {
			col = max(col, arr[i]);
			row++;
		}
	}
	return sum;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> N;
	for (int i = 0; i < N; i++) {
		int s, e;
		cin >> s >> e;
		arr[s] += 1;
		arr[e + 1] -= 1;
	}
	cout << solve() << "\n";
	return 0;
}
