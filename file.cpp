#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define MOD 1000000007
#define PI 3.141592653589793238462
#define MOD1 998244353
#define INF 1e18
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll,pair<ll,ll>>
#define goog(tno) cout << "Case #" << tno <<": "
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define read(x) int x; cin >> x
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
void _print(ll t) { cerr << t; }
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(lld t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(ull t) { cerr << t; }

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) { cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}"; }
template <class T> void _print(vector <T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }
template <class T> void _print(set <T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }
template <class T> void _print(multiset <T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }
template <class T, class V> void _print(map <T, V> v) { cerr << "[ "; for (auto i : v) { _print(i); cerr << " "; } cerr << "]"; }

void init_code() {
	fast_io;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif 
}

void selection(vector<int>& arr, int row, int col, int maxIndex) {
	if (row < 1) {
		return;
	}
	if (row > col) {
		if (arr[col] > arr[maxIndex]) {
			selection(arr, row, col + 1, col);
		}
		else selection(arr, row, col + 1, maxIndex);
	}
	else {
		swap(arr[maxIndex], arr[row - 1]);
		selection(arr, row - 1, 0, 0);
	}
}
void pattern(int row, int col) {
	if (row < 1) {

		return;
	}
	if (row > col) {
		cout << "* ";
		pattern(row, col + 1);

	}
	else {
		cout << endl;
		pattern(row - 1, 0);
	}
}

int* merge(int left[], int right[]) {
	cout << "merging..." << endl;
	// _print(left);
	// _print(right);
	// cout << "Left size: " << left.size() << endl;
	// cout << "Right size: " << right.size() << endl;
	vector<int> newArr;
	int i = 0;
	int j = 0;
	while (i < left && j < right)) {
	if (left[i] < right[j]) {
		newArr.push_back(left[i]);
		i++;
	}
	else {
		newArr.push_back(right[i]);
		j++;
	}
	}
	while (i < left.size()) {
		newArr.push_back(left[i]);
		i++;
	}
	while (j < right.size()) {
		newArr.push_back(right[i]);
		j++;
	}
	cerr << "New Array: ";
	_print(newArr);
	cerr << endl;
	return newArr;
}

int* mergeSort(int arr[], int start, int end) {
	cout << "mergeSort-> ";
	// for (auto e : arr) {
	// 	cout << e << " ";
	// }
	// cout << endl;
	// cout << start << " " << end << " ";
	if (start == end) {
		int singleElementArr[] = { arr[start] };

		return singleElementArr;
	}

	int mid = start + (end - start) / 2;

	cout << mid << endl;
	int left[] = mergeSort(arr, start, mid);
	int right[] = mergeSort(arr, mid + 1, end);

	return merge(left, right);
}

int main() {
	init_code();
	int t = 1;
	// int arr[] = { 4,3,1,5,6,2 };
	int arr[] = { 4,3,8,1,9,5,6,2,7 };
	// cin >> t;
	while (t--) {
		// read(row); read(col);
		// cout << a + b << '\n';
		// selection(arr, arr.size(), 0, 0);
		mergeSort(arr, 0, arr.size() - 1);
		_print(sortedArray);
		// for (auto e : sortedArray) {
		// 	cout << e << " ";
		// }
	}

	return 0;
}
