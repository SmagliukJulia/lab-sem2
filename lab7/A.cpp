#include <iostream>

using namespace std;

int main()
{
    int M = 2;
    int A, B, C, D, E;
    cin >> A >> B >> C >> D >> E;

    if ((A + E == B) && (C * E == D))
        M = 5;
    else { if ((A + E == B) || (C * E == D))
               M = 4;
           else if (E == 1024)
               M = 3;
    }

    cout << M << endl;
    return 0;
}
