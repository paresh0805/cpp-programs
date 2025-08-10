#include<bits/stdc++.h>
using namespace std;

void f(int a[],int n,int k){
    int c=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=a[j];
            if(sum==k){
            c++;
        }
        }
        
    }
    cout<<c;
    
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