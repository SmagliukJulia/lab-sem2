#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    for (int i=1; i<=N; i++)
    {
        int number = N - (i - 1)*2;
        int first_position = (N - number) / 2 + 1;
        int last_postion = first_position + number - 1;
        for (int j=1; j<=N; j++)
        {
            if (j<first_position || j>last_postion)
                cout<<' ';
            else
                cout<<'*';
        }
        cout<<endl;
    }
    return 0;
}
