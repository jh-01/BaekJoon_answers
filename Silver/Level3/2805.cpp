// 2805 나무 자르기 실버3
// 이분 탐색
// 데이터 범위를 유의해서 풀 것!!

#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 1000001
using namespace std;

int N;
long long M;
vector<long long> tree;

int cut_tree(long long num)
{
	long long sum = 0;
	for (int i = 0; i < N; i++) {
		if(num < tree[i])
			sum += tree[i] - num;
	}
	if (sum >= M) {
		return 1;
	}
	return 0;
}

long long binary(long long s, long long e)
{
	long long result = 0;
	while (s <= e) {
		long long mid = (s + e) / 2;
		if (cut_tree(mid)) {
			result = max(result, mid);
			s = mid + 1;
		}
		else {
			e = mid - 1;
		}
	}
	return result;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> N >> M;
	long long t, right = 0;
	for (int i = 0; i < N; i++) {
		cin >> t;
		tree.push_back(t);
		right = max(right, t);
	}
	sort(tree.begin(), tree.end());

	cout << binary(0, right);
	return 0;
}
