#include<bits/stdc++.h>
using namespace std;

void f(int a[],int n,int k){
    map<int,int>mpp;
    mpp[0]=1;
    int preSum=0,cnt=0;
    for(int i=0;i<n;i++){
        preSum+=a[i];
        int remove = preSum -k ;
        cnt+=mpp[remove];
        mpp[preSum]+=1;
    }
    cout<<cnt;
    
}

int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    f(a,n,k);

}