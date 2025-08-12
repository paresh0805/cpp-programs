#include<bits/stdc++.h>
using namespace std;

void f(int a[] ,int n){
    //Moore's Voting algorithm
    
    int c=0;//c is count of votes 
    int el;//el stores current candidate for majority
    for(int i=0;i<n;i++){
        if(c==0){
            c=1;
            el=a[i];
            //if count is 0 we pick the current element as new candidate and start its count as 1
        }
        else if(a[i]==el){
            c++; //if current element is equal to candidate increase the votes by one
        }
        else{
            c--;//if current element is not equal to candidate decrease the vote by one
        }
    }
    int c1=0;//counts how many times el appears in the array
    for(int i=0;i<n;i++){
        if(a[i]==el) c1++;
    }
    if(c1 > (n/2)){
        //if el appears more than array length it is the majority element
        cout<<el;
    }
}

int main(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++) cin>>a[i];
   f(a,n);

}