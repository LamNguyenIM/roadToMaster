#include <iostream>
using namespace std;

int main() {
    // input
    int n;
    cin >> n;
    int v[10][10];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cin >> v[i][j];
    }
    int k;
    cin >> k;
    
    // processing |i-j| = |k|
    if (k >= 0) {
        for (int i = k; i < n; i++) {
            cout << v[i][i-k] << " ";
        }
    } else {
        for (int i = 0; i < n+k; i++) {
            cout << v[i][i-k] << " ";
        }
    }
    cout << endl;
}


// i = n-1 (k -> n-1)
// [i-k] = n-1-(-1) = [n] (err)
// -k -> +x
// i + x < n
// i < n-x = n+k

// [x]  -> x from ... to ..
// [x1][x2]...[xn] -> min(x1, x2, .., xn) >= from (0)
//                    max(x1, x2, .., xn) <= to (n-1)

// [i][i-k]
///// v[n][n]  [] from = 0; to = n-1

// k >= 0: min = i-k, max = i
// i-k = 0 -> i = k
// i <= n-1 ( same as i < n )

// k < 0: min = i, max = i-k
// i = 0
// i-k < n -> i < n+k

/*
v[m][n] k   -> v[i-k][j+k]?

k >= 0: min(i-k, j+k) = from, max(i-k, j+k) = to
for (i = k; i < m; i++)
    for (j = 0; j+k < n; j++)
        // v[i-k][j+k]

v[m][n] k   -> v[i-k][j+i+k]?
*/