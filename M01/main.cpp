#include <iostream>
#include <vector>
using namespace std;

int main() {
    // input
    int n; 
    cin >> n;
    // int v[100][100];
    vector<vector<int>> v(n, vector<int>(n));
    
    // processing
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n; j++) 
    //         v[i][j] = abs(i-j);
    // }
    // for (int i = 0; i < n; i++) {
    //     for (int j = i; j < n; j++) {
    //         v[j][i] = v[i][j] = j - i;
    //     }
    // }
    for (int i = 0; i < n; i++) {
        v[i][i] = 0;
        for (int j = i+1; j < n; j++) {
            v[j][i] = v[i][j] = j - i;
        }
    }

    // output
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n; j++)
    //         cout << v[i][j] << " "; 
    //     cout << endl;
    // }
    for (auto p: v) {
        for (auto x: p) {
            cout << x << " ";
        }
        cout << endl;
    }
}

// Time complexity: O(algo) = sqrt(a^2 + b^2 + c^2)
// a - number of equation: n + n^2 + n^2 = 2n^2 + n -> 2n^2
// b - number of logical expression: n + n^2 = n^2 + n -> n^2
// c - sum of time complexity by function: n^2 * O(abs) = n^2
// abs(x): return x > 0? x: -x;   -> O(1)
// O(algo) = sqrt(4n^4 + n^4 + n^4) = sqrt(6) * n^2 -> O(n^2)