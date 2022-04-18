#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
        int n;
        int cnt0 = 1, cnt1 = 0;
        int temp;
        cin >> n;
        if (n == 0) {
            cout << cnt0 << " " << cnt1 << "\n";
        }
        else {
            for (int j = 1; j <= n; j++) {
                temp = cnt0 + cnt1;
                cnt0 = cnt1;
                cnt1 = temp;
            }
            cout << cnt0 << " " << cnt1 << "\n";
        }
	}
    return 0;
}
