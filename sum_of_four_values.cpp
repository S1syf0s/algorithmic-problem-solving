#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int n, x;
    cin >> n >> x;
    
    vector<pair<int, int>> v;
    pair<int, int> p; 

    for (int i = 0; i < n; i++) {
        cin >> p.first;
        p.second = i;
        v.push_back(p);
    }
    
    sort(v.begin(), v.end());

    int i = 0;
    int j = 1;
    int k = 2;
    int z = n - 1;
    
    // Maybe for-loops next time...

    while (i < n - 3) {
        
        while (j < n - 2) {
            
            while (k < z) {
                
                int sum = v[i].first + v[j].first + v[k].first + v[z].first;

                if (sum == x) {

                    cout << v[i].second + 1 << " " << v[j].second + 1 << " " 
                         << v[k].second + 1 << " " << v[z].second + 1;
                    
                    return 0;
                }

                else if (sum > x) {
                    z--;
                    continue;
                }

                else if (sum < x) {
                    k++;
                }
            }
            
            j++;
            k = j + 1;
            z = n - 1;
        }
        i++;
        j = i + 1;
        k = j + 1;
        z = n - 1;
    }
    cout << "IMPOSSIBLE";
    return 0;
}
