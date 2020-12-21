#include<bits/stdc++.h>

using namespace std;

int main() {

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	
	int t, n, m, A[100000], B[100000], U[100000];

	cin>>t;

	while(t--) {
		cin>>n;
		cin>>m;

		for(int i = 0 ; i < n ; i++) cin>>A[i];
		for(int i = 0 ; i < m ; i++) cin>>B[i];

		// cout<<mergeArrays(A, B, n, m);
		int k = 0, l = 0;
		if(m < n) {
			for(k = 0 ; k < m ; k++) {
				U[k] = B[k];
			}
			
			for(int i = 0 ; i < n ; i++) {
				if(!binary_search(B, B+m, A[i])) {
					U[k] = A[i];
					k++;
				}
			}
			for(int i = 0 ; i < k ; i++) {
				cout<<U[i]<<" ";
			}
		} else {
			for( l = 0 ; l < n ; l++) {
				U[l] = A[l];
			}

			for(int j = 0 ; j < m ; j++) {
				if(!binary_search(A, A+n, B[j])) {
					U[l] = B[j];
					l++;
				}
			}
			for(int i = 0 ; i < l ; i++) {
				cout<<U[i]<<" ";
			}
		}
		cout<<endl;
	}
}	