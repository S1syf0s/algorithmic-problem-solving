#include <iostream>

using namespace std;

int main() {
    
    string s;
    cin >> s;
    
    char cur = s[0];
    int count = 1; 

    for (int i = 1; i < s.length(); i++) {
        
        if (s[i] != cur) {
            cur = s[i];
            count = 0;
        }
        
        count++;

        if (count >= 7) {
            cout << "YES";
            return 0; 
        }

    }
    
    cout << "NO"; 
    return 0;
}
