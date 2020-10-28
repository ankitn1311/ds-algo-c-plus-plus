#include<bits/stdc++.h>

using namespace std;

int mergeArrays(int A[], int B[], int n, int m) {
	unordered_set <int> s;
	for(int i = 0 ; i < n ; i++) {
		s.insert(A[i]);
	}
	for(int i = 0 ; i < m ; i++) {
		s.insert(B[i]);
	}

	return s.size();
}

int main() {

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	
	int t, n, m, A[100000], B[100000];

	cin>>t;

	while(t--) {
		cin>>n;
		cin>>m;

		for(int i = 0 ; i < n ; i++) cin>>A[i];
		for(int i = 0 ; i < m ; i++) cin>>B[i];

		cout<<mergeArrays(A, B, n, m);
		cout<<endl;

	}
}	