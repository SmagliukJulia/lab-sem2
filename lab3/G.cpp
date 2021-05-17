#include <iostream>
using std::cin;
using std::cout;
using std::endl;

struct cat 
{
    char name[20];
    unsigned int id;
    double W, L;
    unsigned int M;
};

unsigned int count_total_mice_amount(cat* cats, unsigned int B)
{
    unsigned int total = 0;
    for (int i = 0; i < B; i++)
        total += cats[i].M;
    return total;
}

int main() 
{
    unsigned int B;
    cin >> B;
    cat *A = new cat[B];
    for (int i = 0; i < B; i++) 
    {
        cin >> A[i].name >> A[i].W >> A[i].L >> A[i].M;
        A[i].id = i;
    }
    cout << count_total_mice_amount(A, B) << endl;
    delete[] A;
    return 0;
}
