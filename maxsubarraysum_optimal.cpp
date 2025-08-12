#include<bits/stdc++.h>
using namespace std;

void f(int a[] ,int n){
    //Kadane's Algorithm
    int maxSum = INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i]; //stores sum of elements of array
        if(sum>maxSum){
            maxSum=sum;//if it is greater than maxSum store it in maxSum
        }
        if(sum<0){
            sum=0;
        }
    }
    cout<<maxSum;
}

int main(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++) cin>>a[i];
   f(a,n);

}