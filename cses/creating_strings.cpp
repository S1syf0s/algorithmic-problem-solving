#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<string> sv;

void find(string chars, string current) {

    if (chars.length() == 0) {
        sv.push_back(current);
        return;
    }

    for (size_t i = 0; i < chars.length(); i++) {

        if (chars[i] == chars[i + 1]) {
            continue;
        }

        
        string left = chars.substr(0, i) + chars.substr(i + 1);

        find(left, current + chars[i]);
    }
}

int main() {

    string s;
    cin >> s;
    
    sort(s.begin(), s.end());
     
    find(s, "");
    
    cout << sv.size() << endl;

    for (size_t i = 0; i < sv.size(); i++) {
        cout << sv[i] << endl;
    }

    return 0;
}
