#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int N, a[100001];
	int max = 0;
	cin >> N;
	for(int i = 0; i < N; i++){ // 각 로프가 버틸 수 있는 최대 중량 입력받기
		cin >> a[i];
	}
	sort(a, a + N); // 오름차순 정렬
	for(int i = 0; i < N; i++){
		if(max < a[i] * (N - i)) // 반복문을 돌면서 최대 중량을 갱신하여 값을 구함
      max = a[i] * (N - i);
	}
	cout << max;
	return 0;
}
