//Google interview question
#include <bits/stdc++.h>
using namespace std;


void f(int a[], int n) {
    if(n == 0) cout<< 0;
    sort(a,a+n);//sorting of the array
    int lastSmaller = INT_MIN;
    int c=0;
    int longest=1;
    for(int i=0;i<n;i++){
        if(a[i]-1==lastSmaller){
            c+=1;
            lastSmaller = a[i];
        }
        else if(lastSmaller != a[i]){
            c=1;
            lastSmaller = a[i];
        }
        
        longest = max(longest,c);
    }
    cout<<longest;



    
    
}


int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    f(a, n);
}