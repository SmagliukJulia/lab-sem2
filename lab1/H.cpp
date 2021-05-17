#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(int A) 
{
    if (A == 2)
        return 1;
    else
        for (int i = 2; i <= sqrt(A) + 1; i++)
            if (A % i == 0)
                return 0;

    return 1;
}

int main() 
{
    int A;
    cin >> A;

    for (int i = 2; A != 1; i++) {
        if (is_prime(i))
            while (A % i == 0) {
                A /= i;
                cout << i << endl;
            }
            }