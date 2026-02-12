#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a;
        cin >> n >> a;
        vector<int> v(n);
        for (auto &x : v) cin >> x;
        int k1=0,k2=0;
        for(int i = 0;i<n;i++){
            if(v[i]>a){
                k1++;
            }
            else if(v[i]<a) k2++;
        }
        if (k1 > k2) {
            cout << a + 1 << '\n';
        }
        else {
            cout << a - 1 << '\n';
        }
    }
}
