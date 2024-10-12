#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; // Read the number of test cases

    while (t--) { // Loop through each test case
        int n, k, m;
        cin >> n >> k >> m; // Input for each test case: n (candies), k (pockets per bag), m (candies per pocket)
        
        int i = 1; // Start with one bag
        while ((i * k * m) < n) { // While one or more bags cannot hold all candies
            i++; // Increment the number of bags
        }

        cout << i << endl; // Output the result for the current test case
    }

    return 0;
}
