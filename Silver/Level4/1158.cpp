/*
요세푸스 문제
-큐
*/

#include <iostream>
#include <cstdio>
#include <queue>
#pragma warning (disable:4996)
using namespace std;

int main()
{
	int N, K, idx;
	queue<int> q;
	cin >> N >> K;
	int terms[500];
	for (int i = 1; i <= N; i++) {
		q.push(i);
	}

	printf("<");
	while (q.size()) {
		for (idx = 1; idx < K; idx++) { // K - 1번째까지 제거
			q.push(q.front());
			q.pop();
		}
		if (q.size() == 1) {
			cout << q.front();
			printf(">");
			q.pop();
			break;
		}
		cout << q.front();
		printf(", ");
		q.pop();
	}
	return 0;
}
