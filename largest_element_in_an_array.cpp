#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int l=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>l){
            l=a[i];
        }
    }
    cout<<l;
}