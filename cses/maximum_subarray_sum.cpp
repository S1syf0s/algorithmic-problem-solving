#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    
    long long maximum = LLONG_MIN;  
    long long current = 0;

    int n;
    cin >> n;

    long long x;

    for (int i = 0; i < n; i++) {
        
        cin >> x;

        current = max(x, current + x);
        maximum = max(maximum, current);

    }

    cout << maximum;
    
    return 0;
}
