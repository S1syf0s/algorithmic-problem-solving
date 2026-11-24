#include <iostream>

using namespace std;

int main() {

    long long low = 0;
    long long high = 1000000000;
    long long mid = 0;

    for (int i = 0; i < 30; i++) {
        
        string s;
        mid = (low + high + 1) / 2;
        
        cout << "? " << mid << endl;
        cin >> s;

        if (s == "YES") {
            low = mid;
        }

        else {
            high = mid - 1;
        }

    }
    
    cout << "! " << low + 1;
    return 0;
}
