#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int A[] = {3, 4, 2, 4, 1, 3, 5, 9};

    int n = 8;

    int max = A[0];
    int secondMax = INT_MIN;

    for (int i = 1; i < n; i++)
    {
        if (A[i] > max)
        {
            secondMax = max;
            max = A[i];
        }
        else if (A[i] > secondMax && A[i] != max)
        {
            secondMax = A[i];
        }
    }

    if (secondMax == INT_MIN)
    {
        cout << "Second maximum does not exist";
    }
    else
    {
        cout << "Second Maximum element: " << secondMax << endl;
    }

    return 0;
}
