#include<bits/stdc++.h>
using namespace std;

int partition(int a[],int low,int high){
   int pivot=a[low];
   int i=low;
   int j=high;
   while(i<j){
    while(a[i]<=pivot&&i<=high-1){
        i++;
    }
    while(a[j]>pivot && j>= low+1){
        j--;
    }
    if(i<j){
        swap(a[i],a[j]);
    }
   }
   swap(a[low],a[j]);
   return j;

}
void qS(int a[],int low,int high){
   if(low<high){
    int pIndex= partition(a,low,high);
    qS(a,low,pIndex-1);
    qS(a,pIndex+1,high);
   }
}

void quick_sort(int a[],int n){
    qS(a,0,n-1);
}

int main(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++) cin>>a[i];
   quick_sort(a,n);
   for(int i=0;i<n;i++) cout<<a[i]<<" ";

}