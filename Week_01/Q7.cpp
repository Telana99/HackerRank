#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// int *p = &val
// address of the value variable is assigned to p
//*p gives the val. p gives ddress of val.

void update(int *a, int *b){
    int sum = (*a) + (*b);
    int diff = abs((*a) - (*b));
    *a = sum;
    *b = diff;
}



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int a, b;
    cin >> a >> b;
    update(&a, &b);
    cout << a << endl; 
    cout << b << endl; 
    return 0;
}
