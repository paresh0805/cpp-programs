#include<bits/stdc++.h>
using namespace std;

void f(int a[],int n){

    //Finding the size for defining the hashmap
    int maxi= a[0];
    for(int i=0;i<n;i++){
        maxi=max(maxi,a[i]);
    }
    int hash[maxi+1]={0};

    //Incrementing hashmap for the corresponding number in array
    for(int i=0;i<n;i++){
        hash[a[i]]++;
    }

    //Displaying the numbers which appears once in the array
    for(int i=0;i<n;i++){
        if(hash[a[i]]==1){
            cout<<a[i]<<" ";
        }
    }

    
}

int main(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++) cin>>a[i];

   f(a,n);

}