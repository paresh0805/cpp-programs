#include <bits/stdc++.h>
using namespace std;

bool isLiked(int n) {
    // Returns true if n is not divisible by 3 and does not end with 3
    return n % 3 != 0 && n % 10 != 3;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        int count = 0;
        int num = 1;

        while (true) {
            if (isLiked(num)) {
                count++;
                if (count == k) {
                    cout << num << endl;
                    break;
                }
            }
            num++;
        }
    }
}
