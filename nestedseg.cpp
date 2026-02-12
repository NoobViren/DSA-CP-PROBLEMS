#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<int> solve(vector<tuple<int,int,int>>& v){
    int n = v.size();

    auto [l, r, idx] = v[0];

    for(int i = 1; i < n; i++){
        auto [x, y, id] = v[i];

        if(y <= r){
            return {id, idx};
        }
        else{
            l = x;
            r = y;
            idx = id;
        }
    }
    return {-1, -1};
}

signed main(){
    int n;
    cin>>n;
    vector<tuple<int,int,int>>v;
   for(int i = 0;i<n;i++) {
    int l,r;
    cin>>l>>r;
    v.emplace_back(l,r,i);
   }
   
   sort(v.begin(), v.end(), [](auto &a, auto &b){
    if (get<0>(a) != get<0>(b))
        return get<0>(a) < get<0>(b);
    return get<1>(a) > get<1>(b);
   });

   vector<int>ans = solve(v);
   int x = ans[0],y = ans[1];
   if(ans[0]>=0 && ans[1]>=0){
    cout<<ans[0]+1<<" "<<ans[1]+1<<'\n';
   }
   else cout<<ans[0]<<" "<<ans[1]<<'\n';

}