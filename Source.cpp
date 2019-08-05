#include <iostream>
#include <set>
#include <string>
#include <sstream>
using namespace std;
int main()
{
	set<long long>A;
	long long N; string S;
	getline(cin, S);
	stringstream SS(S);
	while (SS >> N)
		A.insert(N);	while (cin >> N)
		{
		while (A.count(N))
		{
			A.erase(N);
			++N;
		}
		A.insert(N);
		}
	set<long long>::iterator P;
	P = A.begin();
	cout << *P;
	for (P++; P != A.end(); P++)
		cout << ' ' << *P;
}
