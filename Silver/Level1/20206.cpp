#include <iostream>
using namespace std;

int a, b, c;
int x[2], y[2];

int check()
{
	int pmin = min(-1 * a * x[0] - c, -1 * a * x[1] - c);
	int pmax = max(-1 * a * x[0] - c, -1 * a * x[1] - c);

	int dmin = min(b * y[0], b * y[1]);
	int dmax = max(b * y[0], b * y[1]);

	if (pmin >= dmax || pmax <= dmin)
		return 1;
	else return 0;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> a >> b >> c;
	cin >> x[0] >> x[1] >> y[0] >> y[1];

	if (check()) cout << "Lucky\n";
	else cout << "Poor\n";

	return 0;
}
