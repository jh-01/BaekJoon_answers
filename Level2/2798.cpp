#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, M;
	vector<int> cards;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		int c;
		cin >> c;
		cards.push_back(c);
	}

	int sum = 0, maxsum = 0;
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			for (int r = j + 1; r < N; r++) {
				sum = cards[i] + cards[j] + cards[r];
				if (sum <= M && sum > maxsum) {
					maxsum = sum;
				}
			}
		}
	}
	cout << maxsum << "\n";
	return 0;
}
