#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        
        int c1 = 0, c2 = 0, c3 = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '0') c1++;
            else if (s[i] == '1') c2++;
            else c3++;
        }

       
        if (k >= n) {
            cout << string(n, '-') << '\n';
            continue;
        }

        int left = n - (c1 + c2);

        
        while (c1 > 0) {
            cout << "-";
            c1--;
        }

       
        if (left < 2 * c3) {
            int temp = left;
            while (temp > 0) {
                cout << '?';
                temp--;
            }
        } 
        else if (left >= 2 * c3) {
            int diff = left - 2 * c3;
            int a = c3;
            while (a > 0) {
                cout << '?';
                a--;
            }
            while (diff > 0) {
                cout << '+';
                diff--;
            }
            a = c3;
            while (a > 0) {
                cout << '?';
                a--;
            }
        }

        
        while (c2 > 0) {
            cout << "-";
            c2--;
        }

        cout << '\n';
    }
}
