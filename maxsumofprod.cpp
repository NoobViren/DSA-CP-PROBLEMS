#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n;
    cin>>n;
    vector<int>a(n),b(n);
    for(auto &x : a) cin>>x;
    for(auto &y : b) cin>>y;
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum += a[i]*b[i];
    }
    //first for odd length
    int best = 0;
    for(int c = 0;c<n;c++){
       int temp = 0;
       for(int k = 1;c-k>=0 && c+k<n;k++ ){
        int l = c-k;
        int r = c+k;
        temp+= (b[r]-b[l])*(a[r]-a[l]);
        best = max(best,temp);
       }
       
         best = max(best,temp);
       
       int ts = 0;
       for(int k = 0;c-k-1>=0 && c+k <n ; k++){
          int l = c-k-1;
          int r = c+k;
          ts += (b[r]-b[l])*(a[r]-a[l]);
       }
       
        best = max(best,ts);
       

    }
    int ans = sum + best;
    cout<<ans<<'\n';
}