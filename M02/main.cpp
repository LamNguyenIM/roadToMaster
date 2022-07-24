#include <iostream>
using namespace std;

int main() {
    // input
    int m, n; 
    cin >> m >> n;
    int v[100][100];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            cin >> v[i][j];
    }
    int i, j;
    cin >> i >> j;

    // processing
    for (int k = 0; k < m; k++) {
        int temp = v[k][i];
        v[k][i] = v[k][j];
        v[k][j] = temp;
    }

    // output
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            cout << v[i][j] << " "; 
        cout << endl;
    }
}