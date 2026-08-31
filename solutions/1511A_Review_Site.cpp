// Problem: Review Site
// URL: https://codeforces.com/problemset/problem/1511/A
// Rating: 800
// Tags: greedy
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
int n;

void solve(){
    scanf("%d" ,&n);
    int num, cnt=0;
    for(int i=1; i<=n; i++){
        scanf("%d", &num);
        if(num!=2) cnt++;
    }
    printf("%d\n", cnt);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}
// maintenance note (5): add edge-case comment to this file — 2026-08-31
