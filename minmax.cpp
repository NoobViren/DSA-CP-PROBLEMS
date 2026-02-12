#include <bits/stdc++.h>
using namespace std;

int minimax(int depth, int nodeIndex, bool isMax,
            int scores[], int h) {

    
    if (depth == h)
        return scores[nodeIndex];

    if (isMax) {
        return max(
            minimax(depth + 1, nodeIndex * 2, false, scores, h),
            minimax(depth + 1, nodeIndex * 2 + 1, false, scores, h)
        );
    } else {
        return min(
            minimax(depth + 1, nodeIndex * 2, true, scores, h),
            minimax(depth + 1, nodeIndex * 2 + 1, true, scores, h)
        );
    }
}

int main() {
    int scores[] = {3, 5, 2, 9, 12, 5, 23, 23};
    int n = 8;
    int h = log2(n);

    cout << "Optimal value: "
         << minimax(0, 0, true, scores, h);

    return 0;
}