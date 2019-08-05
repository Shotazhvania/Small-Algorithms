#include <iostream>
using namespace std;
int St[200], D[256];
int main()
{
	D['('] = -1; D['['] = -2; D['{'] = -3;
	D[')'] = 1; D[']'] = 2; D['}'] = 3;
	int i, n = 0, N;
	string S;
	cin >> S;
	for (N = S.size(), i = 0; i < N; i++)
		if (D[S[i]] == 0)break;
		else if (D[S[i]] < 0)St[n++] = D[S[i]];
		else {
			if (!n || D[S[i]] + St[n - 1])break;
			n--;
		}
	if (i < N || n)cout << "Error in position " << i + 1;
	else cout << "OK";
}
