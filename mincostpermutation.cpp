#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto &x : a) cin >> x;

        
        vector<int> temp(n+2, 0);
        for(int i = 0; i < n; i++){
            if(a[i] >= 1 && a[i] <= n) temp[a[i]]++;
        }

        
        vector<int> ans;
        for(int i = 1; i <= n; i++){
            if(temp[i] == 0) ans.push_back(i);
        }

        
        int k = 0;
        for(int i = n-1; i >= 0; i--){
            if(a[i] == 0 && k < (int)ans.size()){
                a[i] = ans[k];
                k++;
            }
        }

        
        int l = -1, r = -1;
        for(int i = 0; i < n; i++){
            if(a[i] != i+1){
                l = i;
                break;
            }
        }

        
        for(int i = n-1; i >= 0; i--){
            if(a[i] != i+1){
                r = i;
                break;
            }
        }

        if(l == -1 || r == -1) cout << 0 << '\n'; 
        else cout <<r-l+1<<'\n';
    }
}
