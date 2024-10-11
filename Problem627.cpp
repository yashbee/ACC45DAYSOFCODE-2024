#include <iostream>
using namespace std;

int main() {
    int t, a, b, c, d;
    cin >> t; // Number of test cases
    
    while (t--) {
        cin >> a >> b >> c >> d;
        
        // We can choose either (a or b) and (c or d), so we compare all combinations
        int max_tastiness = max(a + c, max(a + d, max(b + c, b + d)));
        
        cout << max_tastiness << endl;
    }
    
    return 0;
}
