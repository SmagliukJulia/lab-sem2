#include <iostream>
#include <cmath>
#include <iomanip> 

using namespace std;

int arr[100000]{};

int main()
{
    float a = 1, M, D, S = 0, square = 0;
    int N = 0;

    cin >> a;
    while (a != 0)
    {
        arr[N] = a;
        N++;
        cin >> a;
    }
    
    for (int i = 0; i < N; i++)
    {
        S += arr[i];
        square += pow(arr[i], 2);
    }
    M = S / N;
    D = square / N - pow(M, 2);

    cout << fixed << setprecision(3) << M << ' ' << D << '\n';
    return 0;
}
