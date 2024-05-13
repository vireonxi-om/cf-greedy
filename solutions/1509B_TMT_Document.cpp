// Problem: TMT Document
// URL: https://codeforces.com/problemset/problem/1509/B
// Rating: 1100
// Tags: greedy
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, a[110000];
char s[110000];

void solve(){
    scanf("%d%s", &n, s+1);
    for(int i=0; i<=n; i++) a[i]=0;
    int cnt=0, now=1;
    bool can=true;
    for(int i=1; i<=n; i++){
        if(s[i]=='T') a[i]=1;
        a[i]+=a[i-1];
        if(s[i]=='M') cnt++;
    }
    if(cnt*3!=n) can=false;
    for(int i=1; i<=n; i++){
        if(s[i]=='M') {
            if(a[i]<now) can=false;
            if(a[n]-a[i]<cnt-now+1) can=false;
            now++;
        }
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


