#include <iostream>
#include <algorithm>

using namespace std;

bool key(int A, int B)
{
    bool flag;
    if ((A % 2 == 0 && B % 2 == 0) || (A % 2 != 0 && B % 2 != 0))
        flag = A < B;
    if (A % 2 == 0 && B % 2 != 0)
        flag = true;
    if (A % 2 != 0 && B % 2 == 0)
        flag = false;
    return flag;
}

int main()
{
    int arr[10000];
    int A, i = 0;

    while (cin >> A)
    {
        arr[i] = A;
        i++;
    }
    sort(arr, arr + i, key);

    for (int j = 0; j < 7; j++)
        cout << arr[j] << ' ';
    return 0;
}
