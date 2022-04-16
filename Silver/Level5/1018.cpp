#include <iostream>
#include <vector>
#define MAX 51

using namespace std;
int N, M;
int arr[MAX][MAX];

int BB[8][8] = {
    1, 0, 1, 0, 1, 0, 1, 0,
    0, 1, 0, 1, 0, 1, 0, 1,
    1, 0, 1, 0, 1, 0, 1, 0,
    0, 1, 0, 1, 0, 1, 0, 1,
    1, 0, 1, 0, 1, 0, 1, 0,
    0, 1, 0, 1, 0, 1, 0, 1,
    1, 0, 1, 0, 1, 0, 1, 0,
    0, 1, 0, 1, 0, 1, 0, 1
};

int WB[8][8] = {
    0, 1, 0, 1, 0, 1, 0, 1,
    1, 0, 1, 0, 1, 0, 1, 0,
    0, 1, 0, 1, 0, 1, 0, 1,
    1, 0, 1, 0, 1, 0, 1, 0,
    0, 1, 0, 1, 0, 1, 0, 1,
    1, 0, 1, 0, 1, 0, 1, 0,
    0, 1, 0, 1, 0, 1, 0, 1,
    1, 0, 1, 0, 1, 0, 1, 0
};

int Bcnt(int a, int b)
{
    int cnt = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (arr[i + a][j + b] != BB[i][j]) {
                    cnt++;
            }
        }
    }
    return cnt;
}

int Wcnt(int a, int b)
{
    int cnt = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (arr[i + a][j + b] != WB[i][j]) {
                cnt++;
            }
        }
    }
    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int minnum = 64;
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            char c;
            cin >> c;
            if (c == 'B') arr[i][j] = 1;
            else arr[i][j] = 0;
        }    }

    for (int i = 0; i <= N - 8; i++) {
        for (int j = 0; j <= M - 8; j++)
        {
            int result = min(Bcnt(i, j), Wcnt(i, j));
            minnum = min(result, minnum);
        }
    }
    cout << minnum << "\n";
    return 0;
}
