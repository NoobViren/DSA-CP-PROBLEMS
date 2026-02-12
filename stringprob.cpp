#include<bits/stdc++.h>
using namespace std;
int solve(string&s,string&t, vector<vector<pair<char,int>>>&adj){
    priority_queue<pair<int,string>,vector<pair<int,string>>,greater<pair<int,string>>>pq;
    pq.push({0,s});
    map<string,int>mpp;
    mpp[s] = 0;
    while(!pq.empty()){
        auto [cost,str] = pq.top();
        pq.pop();
        if(cost>mpp[str]) continue;
        if(str == t){
            return cost;
        }
        for(int i = 0;i<str.size();i++){
            if(str[i] == t[i]) continue;
            char temp = str[i];
            for(auto &it : adj[str[i]-'a']){
                char c = it.first;
                int dist = it.second;
                str[i] = c;
                if(!mpp.count(str) || cost + dist<mpp[str]){
                    int newcost = cost + dist;
                    mpp[str] = newcost;
                    pq.push({newcost,str});
                }

            }
                str[i] = temp;
            }
        }
        
        return -1;

    }

int main(){
    string s,t;
    cin>>s>>t;
    int n;
    cin>>n; 
    if(s.size() != t.size()){
        cout<<-1<<'\n';
    }
    else{
    vector<vector<pair<char,int>>>adj(26);//always resize the adjacency list..else will get out of bounds error
    for(int i = 0;i<n;i++){
      char x,y;
      int z;
      cin>>x>>y>>z;
      
      adj[x-'a'].push_back({y,z});
      adj[y-'a'].push_back({x,z});
    }
    int ans = solve(s,t,adj);
    if(ans == -1){
        cout<<-1<<'\n';
    }
    else {
        cout<<ans<<'\n';
        cout<<t<<'\n';
    }
 }
}
