#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;
    
    int num;

    for (int i = 0; i < n; i++) {
        
        cin >> num;

        if (num == 1) {
            
            cout << "HARD";
            return 0;
    
        }
    }
    
    cout << "EASY";
    return 0;
}
