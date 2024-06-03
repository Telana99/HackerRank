#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;

vector<int> parseInts(string str) {
    vector<int> result;
    stringstream ss(str);
    int number;
    char ch;

    while (ss >> number) {
        result.push_back(number);
        ss >> ch; // To discard the commas
    }

    return result;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
        string input;
    cin >> input;
    vector<int> integers = parseInts(input);
    for (int i : integers) {
        cout << i << endl;
    }
    
    
    return 0;
}
