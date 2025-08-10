#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int a[],int n){
    for(int i=0;i<=n-1;i++){
        int j=i;
        while(j>0&&a[j-1]>a[j]){
            swap(a[j-1],a[j]);
            j--;
        }
    }
}

int main(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++) cin>>a[i];
   insertion_sort(a,n);
   for(int i=0;i<n;i++) cout<<a[i]<<" ";

}