// Problem: Berland Crossword
// URL: https://codeforces.com/problemset/problem/1494/B
// Rating: 1400
// Tags: bitmasks, brute force, greedy, implementation
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
int n, u, r, d, l;

void solve(){
    scanf("%d%d%d%d%d", &n, &u, &r, &d, &l);
    bool can=false;
    for(int i=0; i<16; i++){
        bool yes=true;

        int a[5]; for(int j=1; j<=4; j++) a[j]=0;
        int now=i, t=1;
        while(now){
            a[t]=now%2;
            now/=2; t++;
        }

        int cu=0, cd=0, cl=0, cr=0;
        if(a[1]){ cu++; cl++;}
        if(a[2]){ cu++; cr++;}
        if(a[3]){ cd++; cr++;}
        if(a[4]){ cd++; cl++;}

        if(u-cu<0 || u-cu>n-2) yes=false;
        if(d-cd<0 || d-cd>n-2) yes=false;
        if(l-cl<0 || l-cl>n-2) yes=false;
        if(r-cr<0 || r-cr>n-2) yes=false;
        if(yes) can=true;
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



