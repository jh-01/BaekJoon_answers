#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int N;
vector<pair<int, int>> v;
int ans[1000001];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> N;
	for (int i = 0; i < N; i++) {
		int x; cin >> x;
		v.push_back(make_pair( x, i )); // 순서를 기억하기 위해 pair 형태로 저장
	}
	sort(v.begin(), v.end()); // 입력받은 Xi의 값으로 정렬
	ans[0] = 0;
	for (int i = 1; i < N; i++) {
		if (v[i].first != v[i - 1].first) { // i번째와 i-1번째 값이 같지않은 경우
			ans[v[i].second] = ans[v[i - 1].second] + 1; // i-1번째 좌표의 압축 값에 1을 더한 값을 i번째 좌표 압축값에 저장
		}
		else ans[v[i].second] = ans[v[i - 1].second];
	}
	for (int i = 0; i < N; i++) cout << ans[i] << " ";
	return 0;
}
