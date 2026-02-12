#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i = 0;i<n;i++) cin>>a[i];
    stack<pair<int,int>>st;
    int s = n;
    for(int i = 0;i<n;i++){
        if(st.empty()) {
            st.push({a[i],1});
            continue;
        }
        if(a[i] == st.top().first && st.top().second<3){
            st.top().second++;
        }
        else if(a[i] == st.top().first && st.top().second==3){
            s-=4;
            st.pop();
        }
        else if(a[i]!=st.top().first){
            st.push({a[i],1});
        }
    }
    cout<<s<<'\n';
}