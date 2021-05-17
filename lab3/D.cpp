#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int* bytes(unsigned int N)
{
    int* B = new int[N];
    return B;
}

void free_bytes(int* B)
{
    delete [] B;
}

int main() {
    unsigned int N;
    cin >> N;
    int* A = bytes(N);
    for (int i = 0; i < N; i++)
        cin >> A[i];
    int C = 0;
    for (int i = 0; i < N; i++)
        C += A[i];
    if (C % 2)
        cout << "Нет" << endl;
    else
        cout << "Да" << endl;
    free_bytes(A);
    return 0;
}
