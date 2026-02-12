#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,c ;
        cin>>n>>c;
        vector<int>v(n);
        vector<int>ans(n);
        for(int k = 0;k<n;k++){
            cin>>v[k];
            ans[k] = v[k] + k+1;
        }
        int count = 0;
        sort(ans.begin(),ans.end());
        for(int i = 0;i<n;i++){
            if(c-ans[i]>=0){
                count++;
                c-=ans[i];
            }
            else{
                break;
            }
        }
        cout<<count<<endl;
        
    }
}