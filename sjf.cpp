#include <bits/stdc++.h>
using namespace std;

struct Process {
    int pid, at, bt;
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
        cout << "Enter AT and BT of P" << i + 1 << ": ";
        cin >> p[i].at >> p[i].bt;
    }

    int time = 0, completed = 0;

    while (completed < n) {
        int idx = -1;
        int min_bt = INT_MAX;

        // choose shortest job among arrived processes
        for (int i = 0; i < n; i++) {
            if (!p[i].done && p[i].at <= time && p[i].bt < min_bt) {
                min_bt = p[i].bt;
                idx = i;
            }
        }

        if (idx != -1) {
            // Start Time
            p[idx].st = time;

            // End / Completion Time
            p[idx].et = p[idx].st + p[idx].bt;

            // Calculations
            p[idx].tat = p[idx].et - p[idx].at;
            p[idx].wt  = p[idx].tat - p[idx].bt;

            time = p[idx].et;
            p[idx].done = true;
            completed++;
        } else {
            time++; // CPU idle
        }
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
