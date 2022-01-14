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

class LinkedList {
	class Node {
	public:
		int val;
		Node* next;
		Node(int val) {
			this->val = val;
		}
	};
	Node* head;
	Node* tail;
	int size = 0;


public:
	void insertStart(int val) {
		Node* node = new Node(val);
		node->next = head;
		head = node;

		if (tail == NULL) {
			tail = head;
		}
		size++;
	}

	void insertLast(int val) {
		if (tail == NULL) {
			insertStart(val);
			return;
		}

		Node* node = new Node(val);
		tail->next = node;
		tail = node;
		size++;
	}

	void insertAt(int index, int val) {
		if (index < 0 || index > size) {
			cout << "Index out of bounds.";
			return;
		}
		if (index == 0) {
			insertStart(val);
			return;
		}
		if (index == size) {
			insertLast(val);
			return;
		}

		Node* temp = head;
		while (--index) {
			temp = temp->next;
		}
		Node* node = new Node(val);
		node->next = temp->next;
		temp->next = node;
		size++;
	}

	// insert using recursion
	void insertRecursion(int val, int index) {
		head = insertRecursion(val, index, head);
	}

	Node* insertRecursion(int val, int index, Node* node) {
		if (index == 0) {
			Node* temp = new Node(val);
			temp->next = node;
			size++;
			return temp;
		}
		node->next = insertRecursion(val, --index, node->next);
		return node;
	}

	int deleteFirst() {
		if (isEmpty()) {
			cout << "No elements to delete";
			return -1;
		}
		if (head->next == NULL) {
			tail = NULL;
		}
		int val = head->val;
		head = head->next;
		size--;
		return val;
	}

	bool isEmpty() {
		return head == NULL;
	}

	int deleteLast() {
		if (isEmpty()) {
			cout << "No elements to delete";
			return -1;
		}
		Node* temp = head;
		while (temp->next != tail) {
			temp = temp->next;
		}
		if (head->next == NULL) {
			head = NULL;
		}
		int val = tail->val;
		temp->next = NULL;
		size--;
		return val;
	}

	int deleteAt(int index) {
		if (index < 0 || index >= size) {
			cout << "Index out of bounds.";
			return -1;
		}
		if (index == 0) {
			return deleteFirst();
		}
		if (index == size - 1) {
			return deleteLast();
		}

		Node* temp = head;
		while (--index) {
			temp = temp->next;
		}
		int val = temp->next->val;
		temp->next = temp->next->next;
		size--;
		return val;
	}

	void display() {
		Node* temp = this->head;
		while (temp != NULL) {
			cout << temp->val << "->";
			temp = temp->next;
		}
		if (!isEmpty()) {
			cout << "NULL";
		}
	}
};

int main() {
	init_code();
	int t = 1;
	while (t--) {
		LinkedList* list = new LinkedList();
		list->insertStart(4);
		list->insertStart(5);
		list->insertStart(6);
		list->insertLast(2);
		list->insertLast(1);
		list->insertRecursion(82, 2);
		list->insertAt(5, 3);
		list->display();
		cout << endl << list->deleteAt(6) << endl;
		list->display();
	}
	return 0;
}