// Problem: Shifting Stacks
// URL: https://codeforces.com/problemset/problem/1486/A
// Rating: 900
// Tags: greedy, implementation
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
int n;
ll sum;

void solve(){
    scanf("%d", &n);
    ll num;
    sum=0;
    bool can=true;
    for(int i=1; i<=n; i++){
        scanf("%lld", &num);
        sum+=num;
        if(2*sum<(ll)i*(i-1)) can=false;
    }
    if(can) printf("YES\n");
    else printf("NO\n");
}


int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}



