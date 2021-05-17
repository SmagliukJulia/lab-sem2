#include <iostream>

using namespace std;

void print_array(int* A)
{
    for (int i = 0; i < 5; i++)
        cout << A[i] << " ";
    cout << A[5] << endl;
}

int main() 
{
    int B[6];
    for (int i = 0; i < 6; i++)
    cin >> B[i];
    print_array(B);
    return 0;
}
