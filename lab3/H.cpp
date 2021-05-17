include <iostream>

using std::cin;
using std::cout;
using std::endl;

struct cat 
{
    char *name;
    unsigned int id;
    double W, L;
    unsigned int M;
};

cat* get_home(unsigned int n)
{
    cat* cats = new Cat[n]{}; 
    for (int i = 0; i < n; i++)
        cats[i].name = new char[10];
    return cats;
}
void clear_home(cat *cats, unsigned int n)
{
    for (int i = 0; i < n; i++)
        delete [] cats[i].name;
    delete [] cats;
}

int main() 
{
    unsigned int n;
    cin >> n;
    cat *A = get_home(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> A[i].name >> A[i].W >> A[i].L >> A[i].M;
        A[i].id = i;
    }
    for (int i = 0; i < n; i++)
        cout << A[i].name << " ";
    cout << endl;
    clear_home(A, n);
    return 0;
}
