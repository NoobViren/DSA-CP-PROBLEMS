#include<bits/stdc++.h>
using namespace std;
tuple<long long,int,int> kadane_sum(const vector<long long>& a) {
    if (a.empty()) return {0, -1, -1};

    long long best = a[0];
    long long cur = a[0];
    int best_l = 0, best_r = 0;
    int cur_l = 0;

    for (int i = 1; i < (int)a.size(); ++i) {
        if (a[i] > cur + a[i]) {
            cur = a[i];
            cur_l = i;
        } else {
            cur += a[i];
        }

        if (cur > best) {
            best = cur;
            best_l = cur_l;
            best_r = i;
        }
    }
    return {best, best_l, best_r};
}

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>a(n);
        for(auto &x : a) cin>>x;
        int ans1 = accumulate(a.begin(),a.end(),0);
        vector<i
        tuple<long long,int,int> ans2 = kadane_sum(a);
        
        if(ans1==get<0>(ans2)){
            if(get<1>(ans2)==0 && get<2>(ans2)==n-1){
                cout<<"YES"<<'\n';
            }
            else{
                cout<<"NO"<<'\n';
            }
        }
        else{
            cout<<"NO"<<'\n';
        }

        

    }
}