#include<bits/stdc++.h>
using namespace std;

void merge(int a[],int low,int mid,int high){
   vector<int> temp;
   int left=low;
   int right=mid+1;
   while(left<=mid&&right<=high){
      if(a[left]<=a[right]){
         temp.push_back(a[left]);
         left++;
      }
      else{
         temp.push_back(a[right]);
         right++;

      }
   }
   while(left<=mid){
      temp.push_back(a[left]);
         left++;

   }
   while(right<=high){
      temp.push_back(a[right]);
         right++;
   }
   for(int i=low;i<=high;i++){
      a[i]=temp[i-low];
   }
}
void mS(int a[],int low,int high){
   if(low==high) return;
   int mid=(low+high)/2;
   mS(a,low,mid);
   mS(a,mid+1,high);
   merge(a,low,mid,high);
}

void merge_sort(int a[],int n){
    mS(a,0,n-1);
}

int main(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++) cin>>a[i];
   merge_sort(a,n);
   for(int i=0;i<n;i++) cout<<a[i]<<" ";

}