#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long x, n, m;
        cin >> x >> n >> m;
        
        long long a = x, n1 = n, m1 = m;
        long long maxi = 0, mini = x;

        // Calculate maximum
        while(x && n && m){
            if(x % 2 == 0){
                x /= 2;
                n--;
            } else {
                x = (x + 1) / 2;
                m--;
            }
            maxi = max(maxi, x);
        }
        while(x && m--){
            x = (x + 1) / 2;
            maxi = max(maxi, x);
        }
        while(x && n--){
            x /= 2;
            maxi = max(maxi, x);
        }

        // Reset for minimum calculation
        x = a; n = n1; m = m1;
        mini = x;

        while(x && n && m){
            if(x % 2 == 0){
                x = (x + 1) / 2;
                m--;
            } else {
                x /= 2;
                n--;
            }
            mini = min(mini, x);
        }
        while(x && m--){
            x = (x + 1) / 2;
            mini = min(mini, x);
        }
        while(x && n--){
            x /= 2;
            mini = min(mini, x);
        }

        cout << mini << " " << maxi << '\n';
    }
}


