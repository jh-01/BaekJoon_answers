#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N, score, P, rank = 1, sameN = 0;
	int arr[51];

	cin >> N >> score >> P;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

  // 현재 랭킹 리스트에 있는 점수가 랭킹 리스트에 올라갈 수 있는 점수의 개수와 같고,
  // 태수의 새로운 점수가 리스트의 가장 마지막 점수보다 작거나 같은 경우
  // (랭킹 리스트가 꽉 차있을 때, 새 점수가 이전 점수보다 더 좋을 때만 점수가 바뀌기 때문)
	if (N == P && score <= arr[N - 1]) {
		cout << "-1\n";
		return 0;
	}

	for (int i = 0; i < N; i++) {
		if (arr[i] > score) rank++;
		if (arr[i] >= score) sameN++;
	}
	cout << rank << "\n";
	return 0;
}
