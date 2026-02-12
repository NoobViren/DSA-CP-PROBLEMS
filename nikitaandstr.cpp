#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n = s.size();
    vector<int>pa(n),pb(n);
    pa[0] = (s[0] == 'a')?1:0;
    pb[0] = (s[0] == 'b')?1:0;
    for(int i = 1;i<n;i++){
        if(s[i] == 'a'){
            pa[i] = pa[i-1]+1;
            pb[i] = pb[i-1];
        }
        else{
            pa[i] = pa[i-1];
            pb[i] = pb[i-1] + 1;
 
        }
    }
   
    int ans = max(pa[n-1], pb[n-1]);
    for(int i = 0;i<n;i++){
        for(int j= i;j<n-1;j++){
           ans = max(ans,pa[i] + pb[j]-pb[i] + pa[n-1] - pa[j]);
           ans = max(ans,pb[j] + pa[n-1] - pa[j]);
           ans = max(ans,pa[j] + pb[n-1] - pb[j]);
        }
    }
    cout<<ans<<'\n';
    
}