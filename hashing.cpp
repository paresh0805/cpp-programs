#include<bits/stdc++.h>
using namespace std;




int main(){

    int n;
    cin>>n;
    int a[n];

    int ha[13]={0};



    for(int i=0;i<n;i++){
        cin>>a[i];
        ha[a[i]]+=1;
    }

    int num;
    cin>>num;
    cout<<ha[num];
    

}