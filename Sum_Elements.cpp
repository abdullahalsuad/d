#include <iostream>
using namespace std;

int main()
{
    int n[10];
    int sum = 0;

    // Initialize array
    for (int i = 0; i < 10; i++)
    {
        n[i] = i + 100;
    }

    // Calculate sum
    for (int j = 0; j < 10; j++)
    {
        sum += n[j];
    }

    cout << "Sum of the elements: " << sum << endl;

    return 0;
}
