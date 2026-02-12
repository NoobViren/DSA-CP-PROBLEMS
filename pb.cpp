#include<bits/stdc++.h>
using namespace std;

vector<long long>temp;
void init(){
  for(long long i = 1;i<=40000;i++){
    long long a = i;
    long long sum = 0;
    while(a>0){
    long long r = a%10;
    a = a/10;
    sum = sum*10 + r;
    }
    if(sum == i){
       temp.push_back(i);
    }
 }
}


int main(){
    init();
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        
        
        long long m = temp.size();
       vector<vector<long long>>dp(m+1,vector<long long>(n+1,0));
       for(long long i = 0;i<=m;i++) {dp[i][0] = 1;}
    for(long long i =1;i<=m;i++){
        for(long long w =1;w<=n;w++){
            long long skip = dp[i-1][w];
            long long take = 0;
            if(w>=temp[i-1]){
                take = dp[i][w-temp[i-1]];
            }
            dp[i][w] = skip + take;
        }

    }
    cout<<dp[m][n]<<'\n';
    }
}
