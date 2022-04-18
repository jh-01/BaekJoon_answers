// 다이나믹 프로그래밍 문제
// 데이터의 타입 유의해서 풀기

#include <iostream>
using namespace std;

int T, N;
long long dp[101] = { 0, 1, 1, 1, 2, 2, 3, 4, 5, 7, 9, }; // 주어진 파도반 수열 P(10)까지의 값 저장

long long arr(int n)
{
	if (n < 4) return 1;
	else if (n < 6) return 2;
	else if (dp[n] != 0) return dp[n]; // 이미 구한 경우 그대로 배열의 값을 반환
	else { // 구하지 않은 경우 새로 구해서 배열에 저장한 후, 반환
		dp[n] = arr(n - 2) + arr(n - 3);
		return dp[n];
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> N;
		cout << arr(N) << "\n";
	}
	return 0;
}
