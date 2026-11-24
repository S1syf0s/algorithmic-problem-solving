#include <iostream>

using namespace std;

bool reserved[8][8];
bool col[8];
bool diag1[15];
bool diag2[15];
int sum = 0;

void backtrack(int r) {

    if (r == 8) {
        sum++;
        return;
    }
    
    for (int c = 0; c < 8; c++) {
    
        int d1 = r + c;
        int d2 = r - c + 7;

        if (reserved[r][c] || col[c] || diag1[d1] || diag2[d2]) {
            continue;
        }

        col[c] = diag1[d1] = diag2[d2] = true;
        backtrack(r + 1);
        col[c] = diag1[d1] = diag2[d2] = false;
    }
}

int main() {
    
    char character = 'c';

    for (int r = 0; r < 8; r++) {
        for (int c = 0; c < 8; c++) {

            cin >> character;
            
            if (character == '*') {
                reserved[r][c] = true;
            }
        }
    }

    backtrack(0);
    
    cout << sum;
    return 0;
}

