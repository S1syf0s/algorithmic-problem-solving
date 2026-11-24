#include <iostream>
#include <vector>

using namespace std;

int main() {

    long long n, k;
    cin >> n >> k;
    
    vector<long long> v;
    
    long long x, a, b, c;
    cin >> x >> a >> b >> c;

    v.push_back(x);

    for (long long i = 0; i < n - 1; i++) {
        
        x = (a*x + b) % c;
        v.push_back(x);
    }
    
    long long sum = 0;
    long long i = 0;

    while (i < k) {
        sum += v[i];
        i++;
    }
    
    long long subsum = sum;
    long long j = 0; 

    while (i < n) {
        
        subsum -= v[j++];
        subsum += v[i++];
        sum = sum ^ subsum;
    }


//    for (int i = 0; i < n; i++) {
//        cout << v[i] << " ";
//    }

    cout << sum;
    return 0;
}
