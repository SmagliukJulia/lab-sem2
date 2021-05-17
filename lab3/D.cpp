#include <iostream>

using namespace std;

int* now_get_me_some_bytes(unsigned int N)
{
    return new int[N]{};
}

void now_free_some_bytes(int* A)
{
    delete [] A;
    A = NULL;
}

int main() 
{
    unsigned int N;
    cin >> N;
    int *C = now_get_me_some_bytes(N);
    for (int i = 0; i < N; i++)
        cin >> C[i];
    int B = 0;
    for (int i = 0; i < N; i++)
        B += C[i];
    if (B % 2)
        cout << "Нет" << endl;
    else 
        cout << "Да" << endl;
    now_free_some_bytes(C);
    
    return 0;
}
