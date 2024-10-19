#include <iostream> // Include necessary library
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;
    
    while (T--) {
        int A, B; // Maximum candies Limak and Bob can eat
        cin >> A >> B;
        
        int limak = 0, bob = 0; // Candies eaten by Limak and Bob
        int turn = 1; // Start with Limak's turn
        
        while (true) {
            if (turn % 2 != 0) { // Limak's turn (odd turn number)
                if (limak + turn > A) {
                    cout << "Bob" << endl; // Limak can't eat his candies, Bob wins
                    break;
                }
                limak += turn; // Limak eats 'turn' candies
            } else { // Bob's turn (even turn number)
                if (bob + turn > B) {
                    cout << "Limak" << endl; // Bob can't eat his candies, Limak wins
                    break;
                }
                bob += turn; // Bob eats 'turn' candies
            }
            turn++; // Next turn
        }
    }
    return 0;
}
