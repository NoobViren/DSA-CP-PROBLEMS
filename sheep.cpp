#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int>temp;
        for(int i = 0;i<n;i++){
            if(s[i] == '*'){
                temp.push_back(i);
            }
        }
        int k = temp.size();
        if(k==0 || k == 1){
            cout<<0<<'\n';
            continue;
        }
        
        int mid = temp[k/2];
        int x = (s[mid] =='*');
        int ans = 0;
        for(int i = mid-1;i>=0;i--){
            if(s[i] == '*'){
                ans += mid - i - x;
                x++;
            }
        }
        
        x = 1;
        for(int i = mid+1;i<n;i++){
            if(s[i] == '*'){
                ans += i - mid - x;
                x++;
            }
        
        }
        
        cout<<ans<<'\n';
    }
}