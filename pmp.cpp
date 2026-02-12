#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,x,y;
        cin>>n>>x>>y;
        long long a1 = n/x;
        long long a2 = n/y;
        //we need to find the number of common indices which is n by lcm(x,y)
        long long lcm = 1LL*(x*y)/gcd(x,y);
        long long common = n/lcm;
        long long b1 = a1-common;
        long long b2 = a2-common;
        long long ans1 = b1*n - (b1*(b1-1))/2;
        long long ans2 = (b2*(b2+1))/2;
        cout<<ans1-ans2<<endl;
        

       

    }
}