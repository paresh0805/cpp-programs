#include<bits/stdc++.h>
using namespace std;

void f(int a[] ,int n1,int b[],int n2){
   vector<int>ans;
   int vis[n2]={0};
   for(int i=0;i<n1;i++){
    for(int j=0;j<n2;j++){
        if(a[i]==b[j] && vis[j]==0){
            ans.push_back(a[i]);
            vis[j]=1;
            break;
        }
        if(b[j]>a[i]) break;
    }
   }
   for(auto it: ans){
    cout<<it<<" ";
   }

}

int main(){  
   int n1, n2;
   cin>>n1>>n2;
   int a[n1],b[n2];
   for(int i=0;i<n1;i++) cin>>a[i];
   for(int i=0;i<n2;i++) cin>>b[i];

   f(a,n1,b,n2);
   

}