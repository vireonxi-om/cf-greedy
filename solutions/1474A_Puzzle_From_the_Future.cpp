// Problem: Puzzle From the Future
// URL: https://codeforces.com/problemset/problem/1474/A
// Rating: 800
// Tags: greedy
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
int n;
char a[110000], b[110000];

void solve(){
    scanf("%d", &n);
    scanf("%s", &b);
    a[0]='1';
    for(int i=1; i<n; i++){
        if(b[i]+'1'==a[i-1]+b[i-1]) a[i]='0';
        else a[i]='1';
    }
    for(int i=0; i<n; i++) printf("%c", a[i]);
    printf("\n");
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}
// maintenance note (1): add edge-case comment to this file — 2026-08-21
