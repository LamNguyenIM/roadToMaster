#include <iostream>
#include <vector>
using namespace std;

int main(){
    // input
    int m,n;
    cin >> m >> n;
    vector<vector<int>> v(m, vector<int>(n));
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++)
            cin >> v[i][j];
    }

    // processing
    vector<vector<int>> t(n, vector<int>(m));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++)
            t[i][j] = v[j][i];
    }

    // output
    for (vector<int>& p: t){
        for(int &x: p)
            cout << x << " ";
        cout << endl;
    }
}

    