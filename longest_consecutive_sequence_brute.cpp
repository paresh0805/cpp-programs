//Google interview question
#include <bits/stdc++.h>
using namespace std;
bool ls(int a[],int num,int n);

void f(int a[], int n) {
    int longest=1;
    for(int i=0;i<n;i++){
        int x=a[i];//take the element from array
        int c=1;//count 
        //linear search to check if there is a consecutive number to x in the array
        while(ls(a,x+1,n)==true){
            x=x+1;
            c+=1;
        }
        longest=max(longest,c);

    }
    cout<<longest;

    
    
}
bool ls(int a[],int num,int n){
        for(int i=0;i<n;i++){
            if(a[i]==num){
                return true;
            }
        }
        return false;
    }

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    f(a, n);
}