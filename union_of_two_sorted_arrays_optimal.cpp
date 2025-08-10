#include<bits/stdc++.h>
using namespace std;

void f(int a[] ,int n1,int b[],int n2){
    vector<int> ua;
    int i=0,j=0;
    while(i<n1&&j<n2){
        if(a[i]<b[j]){
            if(ua.size()==0|| ua.back()!=a[i]){
                ua.push_back(a[i]);
            }
            i++;
        }
        else{
            if(ua.size()==0|| ua.back()!=b[j]){
                ua.push_back(b[j]);
            }
            j++;
        }
    }
    while(j<n2){
        if(ua.size()==0|| ua.back()!=b[j]){
                ua.push_back(b[j]);
            }
            j++;
    }
    while(i<n1){
        if(ua.size()==0|| ua.back()!=a[i]){
                ua.push_back(a[i]);
            }
            i++;
    }
    for(auto it:ua){
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