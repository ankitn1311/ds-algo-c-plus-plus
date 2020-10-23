#include<bits/stdc++.h>

using namespace std;

class Pair {
	public:
		int max;
		int min;
};


Pair min_max(int arr[], int low, int high) {
	Pair mm, mml, mmr;
	if(low == high) {
		mm.max = arr[low];
		mm.min = arr[high];
		return mm;
	}

	if(high - low == 1) {
		if(arr[high] > arr[low]) {
			mm.max = arr[high];
			mm.min = arr[low];
		} else {
			mm.max = arr[low];
			mm.min = arr[high];
		}
		return mm;
	}

	int mid = (low + high) / 2;
	mml = min_max(arr, low , mid);
	mmr = min_max(arr, mid+1 , high);
	
	if(mml.min < mmr.min) mm.min = mml.min;
	else mm.min = mmr.min;

	if(mml.max < mmr.max) mm.max = mmr.max;
	else mm.max = mml.max;

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
	p = min_max(arr,0, size - 1);

	cout<<"MAX: "<<p.max<<" MIN: "<<p.min;
}	