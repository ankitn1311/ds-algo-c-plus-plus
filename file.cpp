#include<bits/stdc++.h>

using namespace std;

int main() {

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	
	int n, arr[10000];
	cin>>n;
	for(int i = 0 ; i < n ; i++) {
		cin>>arr[i];
	}

	int a;
	int b;
	a = 0, b = n - 1;

	while(a < b) {
		if(arr[a] < 0) {
			a++;
		} else {
			swap(arr[b], arr[a]);
			b--;
		}
	}

	for(int i = 0 ; i < n ; i++) {
		cout<<arr[i]<<" ";
	}

	return 0;
}	