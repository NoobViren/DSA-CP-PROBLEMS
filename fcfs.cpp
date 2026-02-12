#include <bits/stdc++.h>
using namespace std;

struct Process {
    int pid, at, bt;
    int st, et, tat, wt;
};

int main() {
    int n;
    cout << "Enter number of processes: ";
    cin >> n;

    vector<Process> p(n);

    for (int i = 0; i < n; i++) {
        p[i].pid = i + 1;
        cout << "Enter AT and BT of P" << i + 1 << ": ";
        cin >> p[i].at >> p[i].bt;
    }

    // FCFS → sort by arrival time
    sort(p.begin(), p.end(), [](Process a, Process b) {
        return a.at < b.at;
    });

    int time = 0;

    for (int i = 0; i < n; i++) {
        
        p[i].st = max(time, p[i].at);

        
        p[i].et = p[i].st + p[i].bt;

      
        p[i].tat = p[i].et - p[i].at;
        p[i].wt  = p[i].tat - p[i].bt;

        
        time = p[i].et;
    }

    cout << "\nPID AT BT ST ET TAT WT\n";
    for (auto &x : p) {
        cout << x.pid << "  "
             << x.at << "  "
             << x.bt << "  "
             << x.st << "  "
             << x.et << "  "
             << x.tat << "  "
             << x.wt << "\n";
    }

    return 0;
}
