#include<bits/stdc++.h>
using namespace std;

void f(int a[],int n,int t){


    map<long long, int> preSumMap; //for storing prefix sum
    long long sum=0;
    int maxlen=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(sum==t){
            maxlen=max(len,i+1);
        }
        long long rem=sum-t;
        if(preSumMap.find(rem)!=preSumMap.end()){
            int len=i-preSumMap[rem];
            maxlen=max(maxlen,len);
        }
        if(preSumMap.find(sum)==preSumMap.end()){
            preSumMap[sum]=i;
        }
        
    }
    cout<<maxlen;

    
}

int main(){
   int n,t;
   cin>>n>>t;
   int a[n];
   for(int i=0;i<n;i++) cin>>a[i];

   f(a,n,t);

}