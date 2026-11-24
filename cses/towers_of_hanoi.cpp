#include <iostream>

using namespace std;

void hanoi(int n, int from, int to, int aux) {

    if (n == 1) {
        cout << from << " " << to << "\n"; 
        return;
    }
    
    hanoi(n - 1, from, aux, to);
    
    cout << from << " " << to << "\n";

    hanoi(n - 1, aux, to, from);

}

int main() {
    
    int n;
    cin >> n;
    
    cout << (1 << n) - 1 << "\n"; 

    if (n == 1) {
        cout << 1 << " " << 3;
        return 0;
    }

    hanoi(n, 1, 3, 2);

    return 0;
}
