#include <bits/stdc++.h>

using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	//Pattern : Inverted Half Pyramid
	/*
		* * * * *
		* * * *
		* * *
		* *
		*
	*/

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}