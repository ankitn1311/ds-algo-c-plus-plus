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

void subset(string sub, string str) {
	if (str.empty()) {
		cout << sub << endl;
		return;
	}
	char ch = str[0];
	subset(sub + ch, str.substr(1));
	subset(sub, str.substr(1));
}

vector <string> subsetReturn(string sub, string str) {
	if (str.empty()) {
		vector <string> p;
		p.push_back(sub);
		return p;
	}
	char ch = str[0];
	vector <string> left = subsetReturn(sub + ch, str.substr(1));
	vector <string> right = subsetReturn(sub, str.substr(1));

	left.insert(left.end(), right.begin(), right.end());
	return left;
}

int main() {
	init_code();
	int t = 1; cin >> t;
	while (t--) {
		vector <string> ans = subsetReturn("", "abc");
		_print(ans);

		// string str = "ankitnegi";

		// cout << str.substr(1);

	}
	return 0;
}