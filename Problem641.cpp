#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, X;
        cin >> N >> X;

        if (X < (N - X))  
        {
            cout << X << endl;  
        }
        else
        {
            cout << N - X << endl; 
        }
    }
    return 0;
}
