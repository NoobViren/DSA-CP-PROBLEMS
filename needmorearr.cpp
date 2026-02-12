#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto &x : a){
            cin >> x;
        }
        int ans = 1;
        int i = 0;
        int lastpicked = a[0];
        for( i = 1;i<n;i++){
            if(a[i]>lastpicked+1){
                ans++;
                lastpicked = a[i];
            }
        }
        cout << ans << '\n';
    }
}
