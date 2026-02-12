#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while (t--) {
      long long n;
      cin>>n;
      vector<long long>a(n+1);
      
      vector<long long>p(n+1);
      
      for(long long i = 1;i<=n;i++){
        cin>>a[i];
        p[i] = p[i-1] + a[i];
      }
      
      long long bestl = 0;
      long long ans = 0;
      for(long long i = 1;i<=n;i++){
         bestl = max(bestl,p[i-1] - (i*i) + i);
         ans = max(ans, bestl + p[n]-p[i] + i*i + i);
      }
      cout<<ans<<'\n';
 }
}