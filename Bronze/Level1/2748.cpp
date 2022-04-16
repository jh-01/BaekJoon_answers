#include <iostream>
using namespace std;

long long d[91] = { 0 };

long long fibo(int n) 
{
	if (n == 1) return 1;
	if (n == 2) return 1;
	if (d[n] != 0) return d[n];
	return d[n] = fibo(n - 1) + fibo(n - 2);
}

int main()
{
	int n;
	cin >> n;
	cout << fibo(n)<< "\n";
	return 0;
}
