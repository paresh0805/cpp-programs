#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string x;
        cin>>x;
        string s;
        cin>>s;
        string cur=x;
        int ans=-1;
        for(int ops=0;ops<=5;ops++){
            if(cur.find(s)!=string::npos){
                ans=ops;
                break;
            }
            cur+=cur;
        }
        cout<<ans<<endl;
    }
}