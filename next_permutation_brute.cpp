#include <bits/stdc++.h>
using namespace std;

void f(int a[], int n) {
    next_permutation(a,a+n);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    f(a, n);
}