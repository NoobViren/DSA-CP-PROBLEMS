#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ones = 0,zeros = 0;
    map<int,int>mpp;
    int len = 0;
    mpp[0] = -1;
    for(int i = 0;i<n;i++){
        if(s[i] == '1') ones++;
        else zeros++;
        int diff = ones - zeros;
        if(mpp.find(diff)==mpp.end()){
            mpp[diff] = i;
        }
        else{
            int k = mpp[diff];
            len = max(len , i - k);
        }
    }
    cout<<len<<'\n';
}