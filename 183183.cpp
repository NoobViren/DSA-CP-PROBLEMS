#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    for(auto & x : a) cin>>x;
    map<int,int>mpp;
    int count = 0;
    for(int i = 0; i < n; i++){
    int dig = log10(a[i]) + 1;

    long long p = 1;
    for(int j = 0; j < dig; j++) p *= 10;

    int temp = -(a[i] *p) % m + m;

    if(mpp.find(temp) != mpp.end())
        count++;

    mpp[a[i] % m]++;
}
cout<<count<<'\n';

}