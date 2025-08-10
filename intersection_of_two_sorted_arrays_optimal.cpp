#include<bits/stdc++.h>
using namespace std;

void f(int a[] ,int n1,int b[],int n2){
   int i=0;int j=0;
   vector<int> ans;
   while(i<n1&&j<n2){
    if(a[i]<b[j]){
        i++;
    }
    else if(b[j]<a[i]){
        j++;
    }
    else{
        ans.push_back(a[i]);
        i++;
        j++;
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