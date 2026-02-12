#include <bits/stdc++.h>
using namespace std;

struct Process {
    int pid, at, bt, pr;
    int st, et, tat, wt;
    bool done = false;
};

int main() {
    int n;
    cout << "Enter number of processes: ";
    cin >> n;

    vector<Process> p(n);

    for (int i = 0; i < n; i++) {
        p[i].pid = i + 1;
        cout << "Enter AT BT Priority of P" << i + 1 << ": ";
        cin >> p[i].at >> p[i].bt >> p[i].pr;
    }

    int time = 0, completed = 0;

    while (completed < n) {
        int idx = -1;
        int best_pr = INT_MAX;

        
        for (int i = 0; i < n; i++) {
            if (!p[i].done && p[i].at <= time && p[i].pr < best_pr) {
                best_pr = p[i].pr;
                idx = i;
            }
        }

        if (idx != -1) {
            
            p[idx].st = time;

            
            p[idx].et = p[idx].st + p[idx].bt;

            
            p[idx].tat = p[idx].et - p[idx].at;
            p[idx].wt  = p[idx].tat - p[idx].bt;

            time = p[idx].et;
            p[idx].done = true;
            completed++;
        } else {
            time++; 
        }
    }

    cout << "\nPID AT BT PR ST ET TAT WT\n";
    for (auto &x : p) {
        cout << x.pid << "  "
             << x.at << "  "
             << x.bt << "  "
             << x.pr << "  "
             << x.st << "  "
             << x.et << "  "
             << x.tat << "  "
             << x.wt << "\n";
    }

    return 0;
}
