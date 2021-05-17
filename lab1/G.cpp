#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(int A) 
{
    for (int i = 2; i <= sqrt(A) + 1; i++)
        if (A % i == 0)
            return 0;

    return 1;
}

int main() 
{
    int A;
    cin >> A;

    cout << is_prime(A) << endl;

    return 0;
}
