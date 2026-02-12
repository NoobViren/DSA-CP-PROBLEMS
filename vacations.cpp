#include<bits/stdc++.h>
using namespace std;
// 1 if prev is contest , 2 if prev if gym,0 for rest
int dp[3][101];
int solve(vector<int>&a,int i ,int prev){
    if(i == a.size()) return 0;
    if(dp[prev][i]!=-1) return dp[prev][i];
    if(a[i] == 1  && prev!=1){
         return dp[prev][i] = max(solve(a,i+1,0),1 + solve(a,i+1,1));
    }
    else if(a[i] == 2 && prev!=2){
        return dp[prev][i] =  max(solve(a,i+1,0), 1 + solve(a,i+1,2));
    }
    else if(a[i] == 3){
        if(prev == 1){
           return dp[prev][i] = max(solve(a,i+1,0), 1 + solve(a,i+1,2));
        }
        else if(prev == 2){
            return dp[prev][i] = max(solve(a,i+1,0),1 + solve(a,i+1,1));
        }
        else{
            return max(1+solve(a,i+1,1),1+solve(a,i+1,2));
        }
    }
    else return dp[prev][i] = solve(a,i+1,0);

}
int main(){
   int n ;
   cin>>n;
   vector<int>a(n);
   for(auto &x : a) cin>>x;
   memset(dp,-1,sizeof(dp));
   cout<<n-solve(a,0,0);
   
}