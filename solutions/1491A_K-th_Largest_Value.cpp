// Problem: K-th Largest Value
// URL: https://codeforces.com/problemset/problem/1491/A
// Rating: 800
// Tags: brute force, greedy, implementation
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long  LL;
int n, q, a[110000], cnt1;

int main(){
    scanf("%d%d", &n, &q);
    cnt1=0;
    for(int i=1; i<=n; i++){
        scanf("%d", &a[i]);
        if(a[i]) cnt1++;
    }
    int t, k;
    while(q--){
        scanf("%d%d", &t, &k);
        if(t==1){
            if(a[k]==1) cnt1--;
            else cnt1++;
            a[k]=1-a[k];
        }
        else{
            if(k<=cnt1) printf("1\n");
            else printf("0\n");
        }
    }
}
