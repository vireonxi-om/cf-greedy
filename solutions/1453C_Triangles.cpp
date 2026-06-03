// Problem: Triangles
// URL: https://codeforces.com/problemset/problem/1453/C
// Rating: 1700
// Tags: greedy, implementation
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
int n, a[2100][2100];

void solve(){
    scanf("%d", &n);
    int l[10], r[10], u[10], d[10];
    memset(l, 127, sizeof(l)); memset(u, 127, sizeof(u));
    memset(r, 128, sizeof(r)); memset(d, 128, sizeof(d));
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            scanf("%1d", &a[i][j]);
            l[a[i][j]]=min(l[a[i][j]], j);
            r[a[i][j]]=max(r[a[i][j]], j);
            u[a[i][j]]=min(u[a[i][j]], i);
            d[a[i][j]]=max(d[a[i][j]], i);
        }
    }
    for(int k=0; k<10; k++){
        int A=0;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(a[i][j]==k){
                    int x=max(n-j, j-1), y=max(n-i, i-1);
                    A=max(A, x*max(d[k]-i, i-u[k]));
                    A=max(A, y*max(r[k]-j, j-l[k]));
                }
            }
        }
        printf("%d ", A);
    }
    printf("\n");
}

int main(){
    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++) solve();
    return 0;
}
