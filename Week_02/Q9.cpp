#include <iostream>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    // Allocate an array of pointers to arrays
    int** arrays = new int*[n];//allocates an array of pointers. Each pointer will point to a dynamically allocated array of integers.
    int* sizes = new int[n];// keeps track of the sizes of each array to ensure we allocate and deallocate correctly.


    // Read each array
    for (int i = 0; i < n; ++i) {
        int k;
        cin >> k;
        sizes[i] = k;
        arrays[i] = new int[k];
        for (int j = 0; j < k; ++j) {
            cin >> arrays[i][j];
        }
    }

    // Process each query
    for (int k = 0; k < q; ++k) {
        int i, j;
        cin >> i >> j;
        cout << arrays[i][j] << endl;
    }

    // // Free allocated memory
    // for (int i = 0; i < n; ++i) {
    //     delete[] arrays[i];
    // }
    // delete[] arrays;
    // delete[] sizes;

    return 0;
}
