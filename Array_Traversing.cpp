
#include <iostream>
using namespace std;

int main()
{
    int n[10];

    // Initialize array
    for (int i = 0; i < 10; i++)
    {
        n[i] = i + 100;
    }

    // Array Traversing
    for (int j = 0; j < 10; j++)
    {
        cout << "Index: " << j
             << " and Value: " << n[j] << endl;
    }

    return 0;
}
