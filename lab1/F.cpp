
#include <iostream>

using namespace std;

int main() 
{
    int A, max = 0, counter = 0;

    while ((cin >> A) && A != 0) {
        if (A > max) {
            max = A;
            counter = 0;
        }
        if (A == max)
            counter++;
    }

    cout << counter << endl;

    return 0;
}