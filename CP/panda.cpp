#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int n;
        cin>>n;
        string a ;
        cin>>a;
        int ans = 0;
        int l = 0,r=a.size()-1;
        while(l<=r){
            if(a[l]==a[r]){
                ans = r-l+1;
                break;
            }
            l++;
            r--;
        }
        cout<<ans<<endl;

    }
}