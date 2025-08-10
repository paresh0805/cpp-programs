#include<bits/stdc++.h>
using namespace std;

void f(int a[] ,int d,int n){
    for(int i=0;i<n;i++){
        if(a[i]==d){
            cout<<i<<endl;
            return ;
        }
        
    }
    cout<<-1;

}

int main(){
   int n;
   cin>>n;
   int a[n];
   int d;
   cin>>d;
   for(int i=0;i<n;i++) cin>>a[i];

   f(a,d,n);
   

}