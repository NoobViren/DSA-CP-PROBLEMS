#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int sum = 0;
        vector<vector<int>>v(n,vector<int>(m));
        vector<pair<int,vector<int>>>vp;
        for(int i = 0;i<n;i++){
            int sum = 0;
            int rsum = 0;
            for(int j = 0;j<m;j++){
                cin>>v[i][j];
                sum += v[i][j];
                rsum += sum;
            }
             vp.push_back({rsum,v[i]});
        }
        sort(vp.begin(),vp.end());
        reverse(vp.begin(),vp.end());
        vector<int>ans;
        for(auto i : vp){
            ans.insert(ans.end(),i.second.begin(),i.second.end());
        }
        vector<int>pf(ans.size());
        pf[0] = ans[0];
        for(int i = 1;i<ans.size();i++){
            pf[i] = pf[i-1] + ans[i];
        }
        int finalsum = 0;
        for(int i = 0;i<ans.size();i++){
            finalsum += pf[i];
        }
        cout<<finalsum<<endl;
    }
}