#include <bits/stdc++.h>
using namespace std;

struct Process {
    int pid, at, bt, pr, q;
    int ct, tat, wt;
    bool done = false;
};

int main() {
    int n;
    cin >> n;

    vector<Process> q1, q2;

    for (int i = 0; i < n; i++) {
        Process p;
        cin >> p.pid >> p.at >> p.bt >> p.pr >> p.q;
        if (p.q == 1) q1.push_back(p);
        else q2.push_back(p);
    }

    int time = 0;

    
    while (true) {
        int idx = -1, best_pr = INT_MAX;
        for (int i = 0; i < q1.size(); i++) {
            if (!q1[i].done && q1[i].at <= time && q1[i].pr < best_pr) {
                best_pr = q1[i].pr;
                idx = i;
            }
        }
        if (idx == -1) break;

        time += q1[idx].bt;
        q1[idx].ct = time;
        q1[idx].tat = time - q1[idx].at;
        q1[idx].wt = q1[idx].tat - q1[idx].bt;
        q1[idx].done = true;
    }

    
    sort(q2.begin(), q2.end(), [](Process a, Process b) {
        return a.at < b.at;
    });

    for (auto &p : q2) {
        if (time < p.at) time = p.at;
        time += p.bt;
        p.ct = time;
        p.tat = p.ct - p.at;
        p.wt = p.tat - p.bt;
    }

    // Output
    cout << "PID AT BT CT TAT WT\n";
    for (auto &p : q1)
        cout << p.pid << " " << p.at << " " << p.bt << " "
             << p.ct << " " << p.tat << " " << p.wt << "\n";

    for (auto &p : q2)
        cout << p.pid << " " << p.at << " " << p.bt << " "
             << p.ct << " " << p.tat << " " << p.wt << "\n";
}
