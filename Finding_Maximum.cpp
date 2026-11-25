#include <iostream>
using namespace std;

int main()
{
    int n[10];

    for (int i = 0; i < 10; i++)
    {
        n[i] = i + 100;
    }

    int max = n[0];

    for (int j = 1; j < 10; j++)
    {
        if (n[j] > max)
        {
            max = n[j];
        }
    }

    cout << "Maximum element: " << max << endl;

    return 0;
}
