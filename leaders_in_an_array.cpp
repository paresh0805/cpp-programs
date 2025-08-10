#include <bits/stdc++.h>
using namespace std;

void f(int a[], int n) {
    vector<int> ans;//stores the leaders
    bool leader;//flag
    for(int i=0;i<n;i++){
        leader = true;
        for(int j=i+1;j<n;j++){
            //if the i+1 element is greater than i element set leader=false and break the loop
            if(a[j]>a[i])
            {
            leader=false;
            break;
            }
            
        }
        if(leader==true) ans.push_back(a[i]);

    }
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