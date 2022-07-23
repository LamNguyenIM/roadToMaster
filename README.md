# roadToMaster

## Lab 04. Matrix implementation 

## 1. Introduction
+ Creating and Populating Matrix as 2D-Arrays
    ```c++
    // static definition
    int v[20][20];

    // dynamic definition
    #include <vector>
    vector<vector<int>> v;
    ```
    Here, ```v``` is the matrix name, the number in the first square brackets specifies the number of rows, and in the second brackets the number of columns in this array.

+ Reading, Processing and Outputting data
    + Static method
    ```c++
    // input
    int m, n;   // m - number of rows, n - number of columns
    cin >> m >> n;
    int v[100][100];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            cin >> v[i][j];
    }

    // output
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            cout << setw(4) << v[i][j];     // setw(k): set printing-width to number k
        cout << endl;
    }
    ```
    + Dynamic method (Standard: *C++11 and higher*)
    ```c++
    // input
    int m, n; cin >> m >> n;
    vector<vector<int>> v(m, vector<int>(n));
    for (vector<int> &p : v) {
        for (int &x : p)
            cin >> x;
    }

    // output
    for (vector<int>& p: v) {
        for (int &x: p)
            cout << setw(3) << x;
        cout << endl;
    }
    ```
    [C++] Note: remember including header ```<iomanip>``` to use setw() function.

## Build and run
    
+ Compile program
    ```sh
    [MacOS]
    g++ <source.cpp> -std=c++11 -o lab

    [Windows]
    g++ <source.cpp> -std=c++11 -o lab.exe
    ```
+ Run execution file
    ```sh
    [MacOS]
    ./lab < input > out
    
    [Windows]
    lab < input > out
    ```
+ Compare results
    ```ls
    [MacOS]
    diff out output

    [Windows]
    fc out output
    ```

+ Expected results
    + diff: No message (i.e. exactly matched all characters)
    + fc:
        ```
        Comparing files out and OUTPUT
        FC: no differences encountered
        ```
## Problem sets
|ID|Problem|
|:---:|:---|
|M01|[Symmetry printing](./M01/README.md)|
|M02|[Columns swapping](./M02/README.md)|
|M03|[Symmetric matrix](./M03/README.md)|
|M04|[Parallel diagonal](./M04/README.md)|
|M05|[Matrix Transposition](./M05/README.md)|
|M06|[Cinema tickets](./M06/README.md)|
|M07|[Snake](./M07/README.md)|
|M08|[Zigzag](./M08/README.md)|
