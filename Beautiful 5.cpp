#include <iostream>
using namespace std;
int main()
{
	int g[4][5] = {{1,2,-1,-1,-1},
				  {-1,2,-1,-1,-1},
				  {-1,2,3,-1,-1},
				  {-1,-1,3,4,-1}}, i, k, m, N;
	string S;
	cin >> S; N = S.size();
	for (m = i = 0; i <= N && m > -1; i++, m = g[m][k])
		if (i == N)k = 3;
		else if (S[i] == '1' || S[i] == '3')k = 1;
		else if (S[i] == '0' || S[i] == '2' || S[i] == '4')k = 2;
		else if (S[i] == '-' || S[i] == '+')k = 0;
		else k = 4;
	if (m == 4)cout << "OK";
	else cout << "Error in position " << i;
}
