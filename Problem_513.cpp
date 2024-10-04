#include <iostream>
using namespace std;

int main() {
    int T;  // Number of test cases
    cin >> T;  
    
    while (T--) {
        int X;  
        cin >> X;  
        
        // If 10 - X (time left) is greater than or equal to 3 hours, he can finish
        if ((10 - X) >= 3)
            cout << "YES" << endl;  // He can finish the assignments
        else
            cout << "NO" << endl;   // He cannot finish the assignments
    }

    return 0;
}
