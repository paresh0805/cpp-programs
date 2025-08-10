#include<bits/stdc++.h>
using namespace std;

void f(int a[],int n,int k){
    
    int c=0;//counter to store the number of subarrays having the sum k
    //iterating through the subarrays and calculating the sum of subarray
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int t=i;t<=j;t++){
                sum+=a[t];
            }
            //checking if the sub array sum is equal to k
            if(sum==k){
                c++;
            }

        }
    }
    cout<<c;
}

int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    f(a,n,k);

}