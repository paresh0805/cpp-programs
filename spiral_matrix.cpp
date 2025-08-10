#include<bits/stdc++.h>
using namespace std;

void f(vector<vector<int>> &a,int n,int m){
    int left=0,right=m-1;
    int top=0,bottom=n-1;
    vector<int>ans;
    while(top<=bottom && left<=right){
    //right
    for(int i=left;i<=right;i++){
        ans.push_back(a[top][i]);
    }
    top++;
    for(int i=top;i<=bottom;i++){
        ans.push_back(a[i][right]);
    }
    right--;
    if(top<=bottom){
    for(int i=right;i>=left;i--){
        ans.push_back(a[bottom][i]);
    }
    bottom--;
}
    if(left<=right){
    for(int i=bottom;i>=top;i--){
        ans.push_back(a[i][left]);
    }
    left++;
}
}

for(auto c:ans){
    cout<<c<<" ";
}



    
}

int main(){
    int n,m;
    cin>>n>>m;
   vector<vector<int>> a(n,vector<int>(m));
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>a[i][j];
    }
   }

   f(a,n,m);


}