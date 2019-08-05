#include <iostream>
using namespace std;
int main()
{
	unsigned long long N; int P;
	cin >> N;
	for (P = 0; N; N &= N << 1)
		++P;
	cout << P;
}
