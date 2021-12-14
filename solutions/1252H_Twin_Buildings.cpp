// Problem: Twin Buildings
// URL: https://codeforces.com/problemset/problem/1252/H
// Rating: 1800
// Tags: greedy, implementation
// Language: C++17 (GCC 7-32)
#include<bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define LC k<<1
#define RC k<<1|1
#define IO cin.sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(x) (x).begin(), (x).end()
#define SZ(x) ((int)(x).size())
#define rep(i,a,n) for (int i = a; i < n; i++)
#define repn(i,a,n) for (int i = a; i <= n; i++)
#define per(i,a,n) for (int i = n - 1; i >= a; i--)
#define pern(i,a,n) for (int i = n; i >= a; i--)

typedef long double LD;
typedef long long LL;
typedef unsigned long long ull;
typedef pair<int, int> PII;
typedef pair<double, double> PDD;

const int N = 110000;
const int M = 510000;
const int mod = 998244353;
const int inf = (int)1e9;
const double eps = 1e-15;

int n;
vector<pair<LL, LL>> a;
LL b[N];

int main() {
    scanf("%d", &n);
    LL x, y;
    repn(i, 1, n){
        scanf("%lld%lld", &x, &y);
        if (x > y) swap(x, y);
        a.pb(mp(x, y));
    }
    sort(all(a));
    for (int i = n - 1; i >= 1; i --){
        b[i] = max(a[i].se, b[i + 1]);
    }
    LL ans = 0;
    rep(i, 0, n) {
        ans = max(ans, a[i].fi * a[i].se);
        if (i == n - 1) continue;
        LL now = min(b[i + 1], a[i].se);
        ans = max(ans, a[i].fi * now * 2);
    }
    if (ans % 2) {
        printf("%lld.5\n", ans/2);
    }
    else printf("%lld.0\n", ans / 2);
    return 0;
}