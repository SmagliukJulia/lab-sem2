#include <iostream>

using namespace std;

int main()
{
    long int A, B;
    int C; 

    cin >> A;
    cin >> C;
    cin >> B;   

    int **polygon = new int *[A];
    for (int i = 0; i < A; i++){
        polygon[i] = new int[C]{};
    }

    for (int count = 1; count <= 2*B; count+=2)
    {
        long int bomb_i; 
        int bomb_j;
        cin >> bomb_i;
        cin >> bomb_j;
        polygon[bomb_i-1][bomb_j-1] = -1;
        for (int i=bomb_i-2; i<=bomb_i; i++)
        {
            for (int j=bomb_j-2; j<=bomb_j; j++)
            {
                if (i >= 0 && i < A && j >= 0 && j < C && !(polygon[i][j] == -1))
                    polygon[i][j] += 1;
            }
        }
    }

    for (int i=0; i<A; i++)
    {
        for (int j=0; j<C; j++)
            cout << polygon[i][j] << " ";
        cout << endl;
    }

    for (int i=0; i<A; i++)
        delete [] polygon[i];
    delete [] polygon;

    return 0;
}
