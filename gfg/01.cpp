#include <bits/stdc++.h>

using namespace std;

int countMultipleOfFive(int number)
{
	int count = 0;
	while (number)
	{
		if (number % 5 == 0)
			count++;
		else
			break;
		number = number / 5;
	}
	return count;
}

int findTrailingZero(int n)
{
	int ans = 0;
	for (int i = 1; i <= n; i++)
		ans += countMultipleOfFive(i);
	return ans;
}

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	cout << findTrailingZero(n);
}