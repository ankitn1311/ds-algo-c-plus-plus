#include<bits/stdc++.h>

using namespace std;

class Pair {
	public:
		int max;
		int min;
};


Pair min_max(int arr[], int size) {
	Pair mm;
	mm.min = INT_MAX;
	mm.max = INT_MIN;
	for(int i = 0 ; i < size; i++) {
		if(arr[i] < mm.min ) {
			mm.min = arr[i];
		}
		if(arr[i] > mm.max) {
			mm.max = arr[i];
		}
	}

	return mm;
}



int main() {

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	int arr[] = {4,5,1,2,3,6};
	int size = sizeof(arr)/sizeof(int);
	// reverseArray(arr,0,size);
	// printArray(arr,size);
	Pair p;
	p = min_max(arr, size);

	cout<<"MAX: "<<p.max<<" MIN: "<<p.min;
}	