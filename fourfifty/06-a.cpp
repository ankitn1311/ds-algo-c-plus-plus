#include<bits/stdc++.h>

using namespace std;

void rotate_arr(int arr[], int n) {
	int last = arr[n-1];
	for(int i = n - 2 ; i >= 0 ; i--) {
		arr[i+1] = arr[i];
	}
	arr[0] = last;
}

int main() {

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	
	int t, n, arr[1000];
	cin>>t;
	while(t--) {

		cin>>n;

		for(int i = 0 ; i < n ; i++) {
			cin>>arr[i];
		}

		rotate_arr(arr, n);

		for(int i = 0 ; i < n ; i++) {
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
}	