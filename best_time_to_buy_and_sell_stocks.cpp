#include<bits/stdc++.h>
using namespace std;

void f(int a[] ,int n){
    int mini=a[0];//sets minimum price to a[0]
    int profit=0;//to store the profit 
    //iterate through the array 
    for(int i=1;i<n;i++){
        int cost = a[i] - mini;//stores the difference between the element and minimum element of array
        profit= max(profit,cost);//stores the maximum profit
        mini = min(mini,a[i]);//stores the minimum element
    }
    cout<<profit;
}

int main(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++) cin>>a[i];
   f(a,n);

}