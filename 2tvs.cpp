#include<bits/stdc++.h>
using namespace std;
bool solve(vector<tuple<int,int,int>>&v){
    int n = v.size();
    int idx1 = 0,idx2 = 1;
    for(int i = 2;i<n;i++){
        int currl = get<0>(v[i]);
        int r1 = get<1>(v[idx1]),r2 = get<1>(v[idx2]);
        if(r1>=currl && r2>=currl){
            return false;
        }
        else if(r1<currl){
            idx1 = i;
        }
        else idx2 = i;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    vector<tuple<int,int,int>>v;
    for(int i = 0;i<n;i++){
        int l,r;
        cin>>l>>r;
        v.emplace_back(l,r,i);
    }
    sort(v.begin(), v.end(), [](auto &a, auto &b){
    if (get<0>(a) != get<0>(b))
        return get<0>(a) < get<0>(b);
    return get<1>(a) < get<1>(b);
    });
    bool ans = solve(v);
    if(ans == true) cout<<"Yes"<<'\n';
    else cout<<"No"<<'\n';


}