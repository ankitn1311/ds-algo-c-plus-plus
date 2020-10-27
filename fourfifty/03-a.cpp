#include<bits/stdc++.h>

using namespace std;

int main() {

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	
	int t, n, k;
	cin>>t;
	int arr[100000];

	while(t--) {
		cin>>n;
		for(int i = 0 ; i < n; i++) {
			cin>>arr[i];
		}
		cin>>k;

		sort(arr,arr+n);

		cout<<arr[k-1]<<endl;
	}

}	
