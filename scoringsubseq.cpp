#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto &x : a) cin >> x;

        int d = 0;
        for(int k = 1; k <= n; k++){
            while(d < k && a[k - d - 1] >= d + 1)
                d++;
            cout << d << " ";
        }
        cout << '\n';
    }
}
