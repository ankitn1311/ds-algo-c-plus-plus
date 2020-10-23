#include<bits/stdc++.h>

using namespace std;

class Pair {
	public:
		int max;
		int min;
};


Pair compare_in_pair(int arr[], int size) {
	Pair mm;
	int i;
	if(size % 2 == 0) {
		if(arr[0] > arr[1]) {
			mm.min = arr[1];
			mm.max = arr[0];
		} else {
			mm.min = arr[0];
			mm.max = arr[1];
		}
		i = 2;
	}

	else {
		mm.min = arr[0];
		mm.max = arr[0];
		i = 1;
	}


	while(i < size - 1) {
		if(arr[i] > arr[i+1]) {
			if(arr[i] > mm.max) {
				mm.max = arr[i];
			} 
			if(arr[i+1] < mm.min) {
				mm.min = arr[i+1];
			}
		} else {
			if(arr[i] < mm.min) {
				mm.min = arr[i];
			}
			if(arr[i+1] > mm.max) {
				mm.max = arr[i+1];
			}
		}
		i +=2;
	}
	return mm;
}



int main() {

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	int arr[] = {1000, 11, 445,
                  1, 330, 3000 };
	int size = sizeof(arr)/sizeof(int);
	// reverseArray(arr,0,size);
	// printArray(arr,size);
	Pair p;
	p = compare_in_pair(arr,size);

	cout<<"MAX: "<<p.max<<" MIN: "<<p.min;
}	

