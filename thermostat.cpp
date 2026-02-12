#include<bits/stdc++.h>
using namespace std;
#define int long long
int solve(){
    int l,r,x;
        cin>>l>>r>>x;
        int a,b;
        cin>>a>>b;
        queue<pair<int,int>>q;
        q.push({a,0});
        
        set<int>unvis;
        for(int i = l;i<=r;i++){
            unvis.insert(i);
        }
        unvis.erase(a);
        
        while(!q.empty()){
            auto [k,y] = q.front();
            q.pop();
            if(k== b){
                return y;
            }
            auto idx1 = unvis.lower_bound(l);//lb gives the smallest value >= v but if v does not exist then it gives a vlaue greater than v which is not allowed as per the question...so we take the lb of l and mover forard till we reach k-x;
            while(idx1!=unvis.end() && *idx1<=k-x){//always check before dereferencing
                    q.push({*idx1,y+1});
                    idx1 = unvis.erase(idx1);
            }
            auto idx2 = unvis.lower_bound(k+x);
            while(idx2!=unvis.end() && *idx2<=r){
                
                   q.push({*idx2,y+1});
                   idx2 = unvis.erase(idx2);
               
            }
            
        }
        return -1;
        
}
signed main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<'\n';
    }
}