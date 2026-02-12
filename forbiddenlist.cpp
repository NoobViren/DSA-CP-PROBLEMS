#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin>>n>>q;
    vector<int>a(n);
    for(auto &x : a) cin>>x;
    sort(a.begin(),a.end());
    while(q--){
        int x,y;
        cin>>x>>y;
        int idx = upper_bound(a.begin(),a.end(),x) - a.begin();
        int rem = 0;
        if(idx<n){
            // rem= n - idx;
        }
        int low = x,high = *max_element(a.begin(),a.end())+y;
        while(low<=high){
            int mid = low + (high-low)/2;
            // int temp = (mid - x ) - rem;
            if(temp == y){
                cout<<mid<<" ";
                break;
            }
            else if(temp>y){
                high = mid-1;
            }
            else low = mid+1;
        }


    }
}