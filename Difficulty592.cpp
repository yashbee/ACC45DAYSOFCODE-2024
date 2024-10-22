#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin >> t;
   while (t--) {
       int A, B;
       cin >> A >> B;
       int x = A * 10;
       int y = B * 5;
       
       if (x > y)
           cout << "First" << endl;
       else if (x == y)
           cout << "Any" << endl;
       else
           cout << "Second" << endl;
   }
   return 0;
}
