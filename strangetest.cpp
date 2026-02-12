#include<bits/stdc++.h>
using namespace std;
int solve(int a,int b){
    if(a==b) return 0;
    if(a|b > b) return b-a;
    int op1 =INT_MAX,op2 = INT_MAX,op3 = INT_MAX;
    if(b>a){  
        op1 = 1 + solve(a+1,b);
        op3 = 1 + solve(a|b,b);
    }
    if(a>b)  op2 = 1 + solve(a,b+1);
    
    return min({op1,op2,op3});
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        
       int ans = solve(a,b);
       cout<<ans<<'\n';
    }
    
}