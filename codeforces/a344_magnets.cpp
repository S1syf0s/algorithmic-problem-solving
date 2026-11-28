#include <iostream>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    string first;
    cin >> first; 
    
    string second;
    
    int count = 1;

    for (int i = 1; i < n; i++) {
        
        cin >> second;

        if (first != second) {
            
            count++;
            first = second;
        }
    }

    cout << count;
    return 0;
}
