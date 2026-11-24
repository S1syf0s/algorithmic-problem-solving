#include <iostream>

using namespace std;

int main() {
    
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {

        long long k = 1LL * i * i;
        cout << ((k * (k - 1)) / 2) - (4 * (i - 1) * (i - 2)) << "\n";
    }

    return 0;
}
