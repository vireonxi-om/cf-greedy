// Problem: New Colony
// URL: https://codeforces.com/problemset/problem/1481/B
// Rating: 1100
// Tags: brute force, greedy, implementation
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
int n, k, h[110];

void solve(){
    scanf("%d%d", &n, &k);
    for(int i=1; i<=n; i++) scanf("%d", &h[i]);
    int ans;
    while(k>0){
        bool end=true;
        for(int i=1; i<n; i++){
            if(h[i]<h[i+1]) {
                end=false;
                k--; h[i]++;
                if (k == 0) ans = i;
                break;
            }
        }
        if(end) break;
    }
    if(k>0) printf("-1\n");
    else printf("%d\n", ans);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}
// maintenance note (6): add complexity note to this file — 2026-09-03
