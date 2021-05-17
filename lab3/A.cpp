#include <iostream>

using namespace std;

int main()
{
    int N;
    int sum = 0;
    double average = 0;
    cin >> N;
    int* A = new int[N];
    for (int i = 0; i < N; i++)
    {
        cin >> *(A + i);
        average += *(A + i);
    }
    average = average / N;

    for (int i = 0; i < N; i++)
    {
        if (*(A + i) > average) sum += *(A + i);
    }

    delete[] A;
    cout << sum << endl;
    return 0;
}
