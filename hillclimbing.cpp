#include <bits/stdc++.h>
using namespace std;

const int N = 4;


int heuristic(const vector<int>& board) {
    int attacks = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (board[i] == board[j]) attacks++;
            if (abs(board[i] - board[j]) == abs(i-j)) attacks++;
        }
    }
    return attacks;
}


void printBoard(const vector<int>& board) {
    for (int r = 0; r < N; r++) {
        for (int c = 0; c < N; c++) {
            if (board[c] == r) cout << "Q ";
            else cout << ". ";
        }
        cout << "\n";
    }
}


void hillClimbing(vector<int> board) {
    int currentH = heuristic(board);

    cout << "Initial state (h = " << currentH << "):\n";
    printBoard(board);
    cout << "\n";

    while (true) {
        vector<int> nextBoard = board;
        int bestH = currentH;

        // explore all neighbors
        for (int col = 0; col < N; col++) {
            int originalRow = board[col];
            for (int row = 0; row < N; row++) {
                if (row == originalRow) continue;

                board[col] = row;
                int h = heuristic(board);

                if (h < bestH) {
                    bestH = h;
                    nextBoard = board;
                }
            }
            board[col] = originalRow;
        }

        
        if (bestH >= currentH) {
            cout << "Stopped (local optimum reached)\n";
            break;
        }

        board = nextBoard;
        currentH = bestH;

        cout << "Next state(h="<< currentH<<"):\n";
        printBoard(board);
        cout << "\n";

        if (currentH == 0) {
            cout << "Solution found!\n";
            break;
        }
    }
}

int main() {
    
    vector<int> board = {0, 1, 2, 3};
    hillClimbing(board);
    return 0;
}
