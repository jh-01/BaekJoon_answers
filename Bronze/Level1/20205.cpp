#include <iostream>
#define MAX 11
using namespace std;

int N, K;
int arr[MAX][MAX];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> N >> K;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < N; i++) {
		for (int ki = 0; ki < K; ki++) {
			for (int j = 0; j < N; j++) {
				for (int kj = 0; kj < K; kj++) {
					cout << arr[i][j] << " ";
				}
			}
			cout << "\n";
		}
	}

	return 0;
}
