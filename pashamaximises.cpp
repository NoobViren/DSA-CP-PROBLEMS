#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,k;
    cin>>a>>k;
    string s = to_string(a);
    int n = s.size();
    for(int i = k-1;i<n;i++){
        if(k==0) break;
        int j = i;
        while(j>0 && s[j]>s[j-1] && k>0){
            swap(s[j],s[j-1]);
            j--;
            k--;
        }
    }
    for(int i = 0;i<n;i++){
        cout<<s[i];
    }
    
}