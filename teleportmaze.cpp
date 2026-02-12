#include<bits/stdc++.h>
using namespace std;
int main(){
    int h,w;
    cin>>h>>w;
    map<int,vector<pair<int,int>>>mpp;
    for(int i = 0;i<h;i++){
        for(int j = 0;j<w;j++){
            char c;
            cin>>c;
            mpp[c].push_back({i,j});
        }
    }
    queue<array<int,3>>q;
    vector<vector<
}