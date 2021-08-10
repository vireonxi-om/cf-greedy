// Problem: Number Reduction
// URL: https://codeforces.com/problemset/problem/1765/N
// Rating: 1500
// Tags: greedy
// Language: C++17 (GCC 7-32)
#include<bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define pf push_front
#define LC k<<1
#define RC k<<1|1
#define IO cin.sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(x) (x).begin(), (x).end()
#define SZ(x) ((int)(x).size())
#define rep(i,a,n) for (int i = a; i < n; i++)
#define repn(i,a,n) for (int i = a; i <= n; i++)
#define per(i,a,n) for (int i = (n) - 1; i >= a; i--)
#define pern(i,a,n) for (int i = n; i >= a; i--)

typedef long long LL;
typedef unsigned long long ull;
typedef pair<int, int> PII;
typedef pair<int, LL> PIL;
typedef pair<double, double> PDD;
typedef pair<ull, ull> PUU;
typedef pair<LL, LL> PLL;

const int N = 510000;
const int M = 1100000;
const int mod = 1e9+7;
const int inf = (int)1e9;
const LL INF = 1e18;
const double eps = 1e-9;

int T, n, k;
string s;
int nxt[N][10];
int main() {
	IO;
	cin >> T;
	while (T--) {
		cin >> s;
		cin >> k;
		n = s.size();
		rep(i, 0, 10) nxt[n][i] = n;
		per(i, 0, n) {
			rep(j, 0, 10) nxt[i][j] = nxt[i + 1][j];
			nxt[i][s[i] - '0'] = i;
		}
		int cur = 0;
		rep(i, 0, n - k) {
			int c = 0;
			if (i == 0) c = 1;
			while (nxt[cur][c] > k + i) c++;
			cout << c;
			cur = nxt[cur][c] + 1;
		}
		cout << "\n";
	}
	return 0;
}