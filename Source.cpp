#include <iostream>
using namespace std;
long long AG(long long N)
{
	long long P = 0;
	for (; N; N >>= 1)
		P ^= N;
	return P;
}
int main()
{
	long long N, M, P;
	cin >> N >> M;
	if (N == M)P = 0;
	else {
		P = AG(N) - AG(M);
		if (P < 0)P = -P;
		--P;
	}
	cout << P;
}
