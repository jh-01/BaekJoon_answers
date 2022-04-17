#include <iostream>

using namespace std;

int main(){
	int N, M;
	int count = 1;
	cin >> N >> M;
	if(N == 2) { // 세로 길이가 2인 경우
    // 가로 길이가 9 이상인 경우 이동횟수는 3이 최대이므로 방문할 수 있는 칸의 최대 개수는 4
		if(M >= 9) count = 4; 
    // 가로 길이가 9보다 작은 경우 
		else count = (M + 1) / 2;
	}
	else if (N > 2){ // 세로 길이가 2보다 큰 경우 M의 크기에 따라 4가지 방법이 가능
    // 가로 길이가 7보다 크거나 같은 경우 1칸위2칸오른쪽, 1칸아래2칸오른쪽을 한번씩만 넣는 방법이
    // 가장 방문한 칸이 최대가 되므로 가로 길이에 2를 뺀 값이 정답
		if(M >= 7) count = M - 2;
    // 가로 길이가 7보다 작으면 이동 횟수가 4보다 적으므로 1번, 4번 방식으로만 움직이는 것이
    // 가장 방문한 칸이 최대가 됨
		else count = min(M, 4);
	}
	cout << count;
	return 0;
}
