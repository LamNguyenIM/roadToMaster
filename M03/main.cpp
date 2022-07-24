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

    // processing
    int diff = 0;      // difference counter
    for (int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            diff += (v[i][j] != v[j][i]);
        }
    }
    // output
    // cout << ((diff == 0)? "YES" : "NO");
    cout << (!diff? "YES" : "NO"); // not (!) -> not different
}