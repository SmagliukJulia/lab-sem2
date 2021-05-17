#include <iostream>

using namespace std;

int main() {
    int A; int counter = 0;

    while ((cin >> A) && A != 0)
        if (A % 2 == 0)
            counter++;

    cout << counter << endl;

    return 0;
}