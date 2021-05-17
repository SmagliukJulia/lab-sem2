#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    float average;
    int N, A;
    cin >> N;

    int * arr = new int[N];
    for(int i=0; i<N; i++){
        cin >> A;
        arr[i] = A;
        sum += A;
    }

    average = (float)sum / N;
    sum = 0;

    for(int i=0; i<N; i++){
        if (arr[i] > average)
            sum += arr[i];
    }

    cout << sum << endl;
    delete [] arr;

    return 0;
}
