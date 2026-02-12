#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int main(){
   int n;
   cin>>n;
   vector<int>a(n);
   for(auto &x : a) cin>>x;
   
   int m = *max_element(a.begin(),a.end());

   vector<int>need(m+2);
   map<int,int>mpp;
   for(int i = 0;i<n;i++){
     mpp[a[i]]++;
   }
   for(auto [x,cnt] : mpp){
      if(need[x]>0 && cnt == 0){
        cout<<-1<<'\n';
        return 0;
      }
      int news = cnt - need[x];
      if(news>0 && x>1){
        cout<<-1<<'\n';
        return 0;
      }
      
      need[x+1]+=cnt;
   }
   cout<<mpp[1]<<'\n';


}