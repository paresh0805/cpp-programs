//Google interview question
#include <bits/stdc++.h>
using namespace std;


void f(int a[], int n) {
    if(n==0) cout<<0;
    int longest=1;
    unordered_set<int>st;
    for(int i=0;i<n;i++){
        st.insert(a[i]);

    }
    for(auto it:st){
        if(st.find(it-1)==st.end()){
            int cnt=1;
            int x=it;
            while(st.find(x+1)!=st.end()){
                x = x+1;
                cnt+=1;
            }
            longest = max(longest,cnt);
        }
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