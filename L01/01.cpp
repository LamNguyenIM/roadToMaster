#include <iostream>
#include <fstream>  // files
#include <sstream>  // string
#include <vector>
using namespace std;

vector<int> extractNumbersFromString(string s) {
    // extract all numbers from string
    vector<int> v;
    stringstream ss;
    ss << s;   // s -> ss
    while (!ss.eof()) {
        int value;
        ss >> value;
        v.push_back(value);
    }
    return v;
}

void disp(vector<int> v) {
    for (int x: v)
        cout << setw(3) << x;
    cout << endl;
}

int main(int argc, char **argv) {
    ifstream fin (argv[1]);
    
    // read line (string)
    string s;
    getline(fin, s);
    vector<int> va = extractNumbersFromString(s);
    
    getline(fin, s);
    vector<int> vb = extractNumbersFromString(s);
    fin.close();

    disp(va);
    disp(vb);

    // dot product
    if (va.size() != vb.size()) { // error 1
        cout << "Error 1: Vectors do not have same size." << endl;
        return -1;
    }

    int sum = 0;
    for (int i = 0; i < va.size(); i++) {
        sum += va[i] * vb[i];
    }

    cout << sum << endl; 

    return 0;
}
