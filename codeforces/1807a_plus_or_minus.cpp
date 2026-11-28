#include <iostream>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    int x, y, z;

    for (int i = 0; i < n; i++) {

        cin >> x >> y >> z;

        if (x + y == z) {
            cout << "+\n";
        }

        else {
            cout << "-\n";
        }
    }

    return 0;
}
