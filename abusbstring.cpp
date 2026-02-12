#include<bits/stdc++.h>
using namespace std;
#define int long long
struct Fenwick {
    int n;
    vector<int> bit;
    Fenwick(int n) : n(n), bit(n+1, 0) {}

    void update(int i, int v) {
        for (; i <= n; i += i & -i)
            bit[i] += v;
    }

    int query(int i) {
        int s = 0;
        for (; i > 0; i -= i & -i)
            s += bit[i];
        return s;
    }
};

signed main(){
  int n;
  cin>>n;
  string s;
  cin>>s;
  int a = 0,b = 0;
  vector<int>temp;
  temp.push_back(0);
  for(int i = 0;i<n;i++){
    if(s[i] == 'A') a++;
    else if(s[i] =='B') b++;
    temp.push_back(a-b);
  }
   vector<int> comp = temp;
    sort(comp.begin(), comp.end());
    comp.erase(unique(comp.begin(), comp.end()), comp.end());
  Fenwick fw(comp.size());
  int ans = 0;
  for (int i = 0; i <= n; i++) {
        
        int idx = lower_bound(comp.begin(), comp.end(), temp[i]) - comp.begin() + 1;
        int x = fw.query(idx-1);
        ans += x; 
        fw.update(idx, 1);
    }
  cout<<ans<<'\n';

}