#include <iostream>
using namespace std;
long long phi(long long n) {
	long long result = n;
	for (long long i = 2; i * i <= n; ++i)
		if (n % i == 0) {
			do n /= i;
			while (n % i == 0);
			result -= result / i;
		}
	if (n > 1)
		result -= result / n;
	return result;
}
int main()
{
	long long N;
	cin >> N;
	if (N == 1)cout << 2;
	else cout << phi(N);
}
