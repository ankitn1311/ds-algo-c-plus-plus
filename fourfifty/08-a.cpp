#include<bits/stdc++.h>

using namespace std;

int maxSubArraySum(int arr[], int size) {

	int max_so_far = 0;
	int max_ending_here = 0;

	for(int i = 0 ; i < size; i++) {
		max_ending_here = max_ending_here + arr[i];
		if(max_ending_here > max_so_far) {
			max_so_far = max_ending_here;
		}
		if(max_ending_here < 0) {
			max_ending_here = 0;
		}
	}
	return max_so_far;
}


int main() {

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	int t,n, arr[1000000];
	cin>>t;
	while(t--) {
		cin>>n;

		for(int i = 0 ; i < n ; i++) {
			cin>>arr[i];
		}

		cout<<maxSubArraySum(arr, n)<<endl;
	}
	return 0;
}	