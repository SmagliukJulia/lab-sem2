#include <iostream>

using namespace std;

bool ok(int N)
{
    if (N % 4 == 0)
    {
        if (!((N / 1000 == 4) or (N / 1000 == 5)))
            return false;
    }
    if (N % 7 == 0)
    {
        if (!((N / 1000 == 7) or (N / 1000 == 1)))
            return false;
    }
    if (N % 9 == 0)
    {
        if (!((N / 1000 == 8) or (N / 1000 == 9)))
            return false;
    }
    return true;
}

int main()
{
    int n, N;
    bool all = true;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> N;
        if (! ok(N))
        {
            cout << N << endl;
            all = false;
        }
    }

    if (all)
        cout << 0 << endl;
            
    return 0;
}
