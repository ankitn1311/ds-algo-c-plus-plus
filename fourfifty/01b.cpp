#include<bits/stdc++.h>

using namespace std;

void printArray(int arr[], int size) {
	for(int i = 0 ; i < size ; i++) {
		cout<<arr[i]<<" ";
	}
}

void reverseArray(int arr[],int start, int last) {
	last = last - 1;

	if(start >= last) {
		return;
	}
	
	swap(arr[start], arr[last]);

	reverseArray(arr, start+1 ,last);

}

int main() {

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	int arr[] = {4,5,1,2};
	int size = sizeof(arr)/sizeof(int);
	reverseArray(arr,0,size);
	printArray(arr,size);
}	