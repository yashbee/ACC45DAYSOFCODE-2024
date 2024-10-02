#include <iostream>
using namespace std;

int main() {
    int T;  // Number of test cases
    cout << "Enter number of test cases: ";
    cin >> T;

    // Check if T is within valid range
    if (T < 1 || T > 500) {
        cout << "Invalid number of test cases!" << endl;
        return 0;  // Exit if T is out of bounds
    }

    // Process each test case
    while (T--) {
        int XA, XB, XC;  // Votes for parties A, B, C
        cout << "Enter votes for parties A, B, C: ";
        cin >> XA >> XB >> XC;

        // Check if the votes are within the valid range [0, 101]
        if (XA < 0 || XA > 101 || XB < 0 || XB > 101 || XC < 0 || XC > 101) {
            cout << "Invalid vote count!" << endl;
            continue;  // Skip the current test case if the vote count is invalid
        }

        // Check if the sum of votes equals 101
        if (XA + XB + XC != 101) {
            cout << "Votes must sum to 101!" << endl;
            continue;  // Skip if the sum is not equal to 101
        }

        // for checking majority and no tie 
        if (XA > 50 && (XB <= 50 && XC <= 50)) {
            cout << "A" << endl;  
        } else if (XB > 50 && (XA <= 50 && XC <= 50)) {
            cout << "B" << endl;  
        } else if (XC > 50 && (XA <= 50 && XB <= 50)) {
            cout << "C" << endl;  
        } else if ((XA == XB && XA >= 50) || (XA == XC && XA >= 50) || (XB == XC && XB >= 50)) {
            
            cout << "NOTA" << endl;  // There is a tie
        } else {
            cout << "NOTA" << endl;  
        }
    }

    return 0;
}
