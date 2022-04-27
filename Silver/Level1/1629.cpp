#include <iostream>

using namespace std;
long a, b, c;

int solve(long num, long k) 
{
	if (k == 1) return num % c;
	long newNum = solve(num, k / 2);
	if (k % 2 == 1) return (newNum * newNum % c) * num % c;
	return newNum * newNum % c;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> a >> b >> c;
	cout << solve(a, b);
	return 0;
}
