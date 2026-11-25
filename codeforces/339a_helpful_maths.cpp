#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    
    string s;
    cin >> s;

    size_t i = 0;
    vector<int> v; 
    
    string s1 = "";

    while (i < s.length()) {
        
        if (s[i] == '+') {
            i++;
            v.push_back(stoi(s1));
            s1 = "";
            continue;
        }

        else {
            s1 += s[i];
        }
        i++;
    }
    

    v.push_back(stoi(s1));
    
    sort(v.begin(), v.end());

    for (size_t i = 0; i < v.size(); i++) {
        
        if (i > 0) {
            cout << '+';
        }

        cout << v[i];
    }

    return 0;
}
