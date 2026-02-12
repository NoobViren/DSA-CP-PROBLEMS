#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long k, a, b, x, y;
        cin >> k >> a >> b >> x >> y;

        long long m = 0, g = 0;
        if(k >= a){
            m = (k - a) / x + 1;
            long long e = k - m * x;
            if(e >= b){
                g = (e - b) / y + 1;
            }
        }

        long long n = 0, j = 0;
        if(k >= b){
            n = (k - b) / y + 1;
            long long f = k - n * y;
            if(f >= a){
                j = (f - a) / x + 1;
            }
        }

        cout << max(m + g, n + j) << '\n';
    }
    return 0;
}
