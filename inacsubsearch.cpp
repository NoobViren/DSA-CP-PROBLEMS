#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n,m,k;
        cin >> n >> m >> k;

        vector<int> a(n), b(m);
        for(int &x : a) cin >> x;
        for(int &x : b) cin >> x;

        map<int,int> mpp;
        for(int x : b) mpp[x]++;

        int dup = 0, ans = 0;

        // build first window
        for(int i = 0; i < m; i++){
            auto it = mpp.find(a[i]);
            if(it != mpp.end()){
                if(it->second > 0) dup++;
                it->second--;
            }
        }

        int l = 0, r = m - 1;

        while(true){
            if(dup >= k) ans++;
            if(r == n-1) break;

            // remove a[l]
            auto itl = mpp.find(a[l]);
            if(itl != mpp.end()){
                if(itl->second == 0) dup--;
                itl->second++;
            }
            l++;

            // add a[r+1]
            r++;
            auto itr = mpp.find(a[r]);
            if(itr != mpp.end()){
                if(itr->second > 0) dup++;
                itr->second--;
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
