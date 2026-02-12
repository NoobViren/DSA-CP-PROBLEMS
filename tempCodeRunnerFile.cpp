#include <bits/stdc++.h>
using namespace std;

struct Process {
    int pid, at, bt, ct, tat, wt;
    bool done = false;
};

int main() {
    int n;
    cin >> n;

    vector<Process> p(n);
    for (int i = 0; i < n; i++) {
        p[i].pid = i + 1;
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
            time += p[idx].bt;
            p[idx].ct = time;
            p[idx].tat = p[idx].ct - p[idx].at;
            p[idx].wt = p[idx].tat - p[idx].bt;
            p[idx].done = true;
            completed++;
        } else {
            time++; // CPU idle
        }
    }

    cout << "PID AT BT CT TAT WT\n";
    for (auto &x : p) {
        cout << x.pid << " " << x.at << " " << x.bt << " "
             << x.ct << " " << x.tat << " " << x.wt << "\n";
    }
}
