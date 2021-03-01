// Problem: Nezzar and Colorful Balls
// URL: https://codeforces.com/problemset/problem/1478/A
// Rating: 800
// Tags: brute force, greedy
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
int n, a[110];

void solve(){
    scanf("%d", &n);
    for(int i=1; i<=n; i++) a[i]=0;
    for(int i=1; i<=n; i++){
        int num;
        scanf("%d", &num);
        a[num]++;
    }
    int maxi=0;
    for(int i=1; i<=n; i++){
        maxi=max(maxi, a[i]);
    }
    printf("%d\n", maxi);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}