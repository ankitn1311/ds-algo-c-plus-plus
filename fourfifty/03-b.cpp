#include<bits/stdc++.h>

using namespace std;

void swap(int* x, int* y) 
{ 
    int temp = *x; 
    *x = *y; 
    *y = temp; 
}


class MinHeap {
	int *harr;
	int capacity;
	int heap_size;

public:
	MinHeap(int a[], int size) {
		heap_size = size;
		harr = a;
		int i = (heap_size - 1) / 2;
		while(i >= 0) {
			MinHeapify(i);
			i--;
		}
	}

	void MinHeapify(int i) {
		int l = left(i); 
		int r = right(i); 
		int smallest = i; 
		if (l < heap_size && harr[l] < harr[i]) 
			smallest = l; 
		if (r < heap_size && harr[r] < harr[smallest]) 
			smallest = r; 
		if (smallest != i) { 
			swap(&harr[i], &harr[smallest]); 
			MinHeapify(smallest); 
		} 
	}
	int extractMin() { 
		if (heap_size == 0) 
			return INT_MAX; 
	
		// Store the minimum vakue. 
		int root = harr[0]; 
	
		// If there are more than 1 items, move the last item to root 
		// and call heapify. 
		if (heap_size > 1) { 
			harr[0] = harr[heap_size - 1]; 
			MinHeapify(0); 
		} 
		heap_size--; 
	
   		return root; 
	} 

	int parent(int i) { return (i - 1) / 2; } 
    int left(int i) { return (2 * i + 1); } 
    int right(int i) { return (2 * i + 2); } 
	int getMin() { return harr[0]; } 
};

int kthSmallest(int arr[], int n, int k) 
{ 
    // Build a heap of n elements: O(n) time 
    MinHeap mh(arr, n); 
  
    // Do extract min (k-1) times 
    for (int i = 0; i < k - 1; i++) 
        mh.extractMin(); 
  
    // Return root 
    return mh.getMin(); 
} 

int main() {

	#ifndef ONLINE_JUDGE
			freopen("input.txt", "r", stdin);
			freopen("output.txt", "w", stdout);
	#endif
	int arr[] = { 12, 3, 5, 7, 19 }; 
    int n = sizeof(arr) / sizeof(arr[0]), k = 2; 
    cout << "K'th smallest element is " << kthSmallest(arr, n, k);

	return 0;




}	
