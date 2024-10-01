#include <iostream>
using namespace std;

int main() {
    int values[4];  // Array to store the A, B, C and X
    cout<<"Enter A B C and X \n";

   
    for (int i = 0; i < 4; i++) {
        cin >> values[i];  
    }

    
    int A = values[0], B = values[1], C = values[2], X = values[3];

    // Check if A, B, C are distinct and all values lies between the range 1-10
    if (A != B && B != C && A != C && A >= 1 && A <= 10 && B >= 1 && B <= 10 && C >= 1 && C <= 10 && X >= 1 && X <= 10) 
    {
        if (X == A || X == B || X == C)
            {
            cout << "Yes" << endl;
            } else
                {
                cout << "No" << endl;
                }
    } else 
        {
        cout << "Invalid input" << endl;
        }

    return 0;
}
