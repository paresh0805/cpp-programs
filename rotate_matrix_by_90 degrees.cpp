#include<bits/stdc++.h>
using namespace std;

void f(vector<vector<int>> &a,int n){
    vector<vector<int>> ans(n,vector<int>(n));//answer matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ans[j][n-1-i]=a[i][j];//main logic to remember 
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    
}

int main(){
   int n;
   cin>>n;
   vector<vector<int>> a(n,vector<int>(n));
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>a[i][j];
    }
   }

   f(a,n);


}