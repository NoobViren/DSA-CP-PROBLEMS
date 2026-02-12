#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(auto &x : arr){
            cin>>x;
        }
        long long count = 0;
        long long m = arr[n-1];
       for(int k = n - 1; k >= 2; k--) {
        int i = 0, j = k - 1;
        while(i < j) {
            if(arr[i] + arr[j] > arr[k] && arr[i]+arr[j]+arr[k]>m) {
                count += (j - i);
                j--;
            } else {
                i++;
            }
        }
    }
    cout<<count<<'\n';

    }
}