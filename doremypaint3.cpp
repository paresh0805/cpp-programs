#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        map<int,int> freq;
        for(int i=0;i<n;i++){
            cin >> a[i];
            freq[a[i]]++;
        }

        if(freq.size() > 2){
            cout << "No\n";
            continue;
        }

        if(freq.size() == 1){
            cout << "Yes\n"; // all same
            continue;
        }

        // size == 2
        vector<int> counts;
        for(auto it: freq) counts.push_back(it.second);

        int odd = (n+1)/2;
        int even = n/2;

        if((counts[0]==odd && counts[1]==even) || (counts[1]==odd && counts[0]==even))
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}
