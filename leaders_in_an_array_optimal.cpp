#include <bits/stdc++.h>
using namespace std;

void f(int a[], int n) {
    vector<int> ans;//stores the leaders
    int maxi=INT_MIN;
    for(int i=n-1;i>=0;i--){
        //iterating from end to the start
        if(a[i]>maxi){
            ans.push_back(a[i]);
        }
        maxi=max(maxi,a[i]);
        
    }
    sort(ans.begin(),ans.end());
    for(auto it:ans){
        cout<<it<<" ";
    }
    
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    f(a, n);
}