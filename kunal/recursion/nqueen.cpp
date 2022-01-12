#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define fr(a,b) for(int i = a; i < b; i++)
#define rep(i,a,b) for(int i = a; i < b; i++)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define inf (1LL<<60)
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
	freopen("Error.txt", "w", stderr);
#endif 
}

void printBoard(vector<vector<bool>>board) {
	for (vector<bool> row : board) {
		for (bool element : row) {
			if (element) {
				cout << "Q ";
			}
			else {
				cout << "X ";
			}
		}
		cout << endl;
	}
}

bool isSafe(vector<vector<bool>> board, int row, int col) {
	for (int i = 0; i < row; i++) {
		if (board[i][col]) {
			return false;
		}
	}

	int leftD = std::min(row, col);
	for (int i = 1; i <= leftD; i++) {
		if (board[row - i][col - i]) {
			return false;
		}
	}

	int rightD = std::min(row, (int)(board.size() - col - 1));
	for (int i = 1;i <= rightD; i++) {
		if (board[row - i][col + i]) {
			return false;
		}
	}
	return true;
}

int nqueens(vector<vector<bool>>board, int row) {
	if (row == board.size()) {
		printBoard(board);
		cout << endl;
		return 1;
	}
	int count = 0;
	for (int col = 0; col < board.size(); col++) {
		if (isSafe(board, row, col)) {
			board[row][col] = true;
			count += nqueens(board, row + 1);
			board[row][col] = false;
		}
	}
	return count;
}

int main() {
	init_code();
	int t = 1;
	while (t--) {
		int size;
		cin >> size;
		vector<vector<bool>> board(size, vector<bool>(size, false));
		cout << nqueens(board, 0) << endl;
	}
	return 0;
}