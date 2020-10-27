#include<bits/stdc++.h>

using namespace std;

void sortZOT(int arr[], int size) {
	int i = 0, k = 0, j = size - 1;

	while(k <= j) {
		if(arr[k] == 0) {
			swap(arr[i], arr[k]);
			i++;
			k++;
		} else if(arr[k] == 2) {
			swap(arr[j], arr[k]);
			j--;
		} else {
			k++;
		}
	}	
}


int main() {

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	
	int t,n,arr[1000000];
	cin>>t;
	while(t--) {
		cin>>n;
		for(int i = 0 ; i < n ; i++) {
			cin>>arr[i];
		}

		sortZOT(arr, n);

		for(int i = 0 ; i < n ; i++) {
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}

	return 0;
}	