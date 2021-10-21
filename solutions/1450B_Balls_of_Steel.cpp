// Problem: Balls of Steel
// URL: https://codeforces.com/problemset/problem/1450/B
// Rating: 1000
// Tags: brute force, geometry, greedy
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, k, p[110][2];

void solve(){
    scanf("%d%d", &n, &k);
    for(int i=1; i<=n; i++){
        scanf("%d%d", &p[i][1], &p[i][2]);
    }
    bool yes=false;
    for(int i=1; i<=n; i++){
        bool can=true;
        for(int j=1; j<=n; j++){
            int d=abs(p[i][1]-p[j][1])+abs(p[i][2]-p[j][2]);
            if(d>k){
                can=false;
                break;
            }
        }
        if(can){
            yes=true; break;
        }
    }
    if(yes) printf("1\n");
    else printf("-1\n");
}

int main(){
    int t;
    scanf("%d", &t);
    for(int i=1; i<=t; i++) solve();
    return 0;
}
