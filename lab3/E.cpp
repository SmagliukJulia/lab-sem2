#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int do_some_awesome_work(int* A, int* B)
{
    return (*A + *B);
}

int main()
{
    int C, D;
    cin >> C >> D;
    cout << do_some_awesome_work(&C, &D) << endl;
    return 0;
}
