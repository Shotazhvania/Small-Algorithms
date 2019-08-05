#include <iostream>

using namespace std;

int main()
{
	string N; int M, i, P = 0;
	cin >> N >> M;
	for (i = 0; i < N.size(); i++)
	{
		P = P * 10 + N[i] - '0';
		P %= M;
	}
	cout << P;
}
