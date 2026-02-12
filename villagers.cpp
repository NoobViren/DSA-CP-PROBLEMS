#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<long long> a(n);
        for(auto &x : a) cin >> x;
        sort(a.begin(), a.end());

        long long ans = 0, i;
        for(i = n-1; i > 0; i -= 2){
            ans += a[i]; // always the larger of the pair
        }
        if(i == 0){ // one element left
            ans += a[0];
        }
        cout << ans << '\n';
    }
}
