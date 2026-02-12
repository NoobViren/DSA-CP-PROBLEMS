#include<bits/stdc++.h>
using namespace std;
int dp[100001][2][2];
int solve(string &s,int i,int a,int b){
    if( i >= s.size()) return a & b;
    if( a== 1 && b == 1) return 1;
    if(dp[i][a][b] !=-1) return dp[i][a][b];
    if(i+1<s.size() && s[i] == 'A' && s[i+1] == 'B'){
        return dp[i][a][b] =solve(s,i+1,a,b) | solve(s,i+2,1,b);
    }
    else if(i+1<s.size() && s[i] == 'B' && s[i+1] == 'A'){
        return dp[i][a][b] = solve(s,i+1,a,b) | solve(s,i+2,a,1);
    }
    else return dp[i][a][b]= solve(s,i+1,a,b);
}
int main(){
    string s;
    cin>>s;
    memset(dp,-1,sizeof(dp));
    int ans = solve(s,0,0,0);
    if(ans == 1){
        cout<<"YES"<<'\n';
    }
    else cout<<"NO"<<'\n';
    

}