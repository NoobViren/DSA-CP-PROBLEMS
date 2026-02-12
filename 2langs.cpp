#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    string s,t;
    cin>>s>>t;
    int q;
    cin>>q;
    vector<int>mp1(26),mp2(26);
    for(int i = 0;i<n;i++){
        mp1[s[i]-'a']++;
        
    }
    for(int i = 0;i<m;i++) mp2[t[i]-'a']++;
    while(q--){
        string a;
        cin>>a;
        int k = a.size();
        set<char>st;
        int m1 = 0,m2 = 0;
        for(int i = 0;i<k;i++){
            if(mp1[a[i]-'a']>0 && st.count(a[i])==0){
                m1++;
                
            }
            if(mp2[a[i]-'a']>0 && st.count(a[i]) == 0){
                m2++;
                
            }
            st.insert(a[i]);
            
        }
        int x = st.size();
        if(m1==x && m2!=x){
            cout<<"Takahashi"<<'\n';
        }
        else if(m2 == x && m1!=x){
            cout<<"Aoki"<<'\n';
        }
        else cout<<"Unknown"<<'\n';

    }
}