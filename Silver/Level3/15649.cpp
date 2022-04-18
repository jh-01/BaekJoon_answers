// 백트래킹
#include <iostream>
#define MAX 9

int N, M;
int arr[MAX]; // 수열
bool check[MAX] = { 0, }; // 방문 여부 체크
using namespace std;

void BT(int num) {
    if (num == M) {
        for (int i = 0; i < M; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }

    for (int i = 1; i <= N; i++) {
        if (!check[i]) {
            check[i] = true;
            arr[num] = i;
            BT(num + 1);
            check[i] = false;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> M;
    BT(0);

    return 0;
}
