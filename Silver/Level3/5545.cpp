// 그리디 알고리즘 
#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int A, B, C, N;
	int D[10000];
	int temp;
	
	cin >> N; // 토핑 종류의 수
	cin >> A >> B; // 도우의 가격과 토핑의 가격
	cin >> C; // 도우의 열량
	for(int i = 0; i < N; i++){ // 각 토핑의 열량
		cin >> D[i];	
	}
  
	sort(D, D + N, greater<int>()); // 내림차순 정렬
	for(int i = 0; i < N; ++i){
		if(C / A < D[i] / B){ // 현재 피자의 가성비보다 토핑의 가성비가 좋은 경우 토핑을 추가
			C += D[i];
			A += B;
		}
	}
	cout << C / A;
	
	return 0;
}
