#include <iostream>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        //  If A->B
        int maxA_case1 = 500 - 2 * X;
        int maxB_case1 = 1000 - 4 * (X + Y);
        int total_A_B = maxA_case1 + maxB_case1;

        // if B->A
        int maxB_case2 = 1000 - 4 * Y;
        int maxA_case2 = 500 - 2 * (X + Y);
        int total_B_A = maxB_case2 + maxA_case2; 

        // maximum score from the two cases
        cout << max(total_A_B, total_B_A) << endl; 
    }

    return 0;
}
