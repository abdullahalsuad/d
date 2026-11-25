#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 3, 4, 5, 2};

    int size_arr = 5;
    int data, pos;

    cout << "Enter the data: ";
    cin >> data;

    cout << "Enter the position: ";
    cin >> pos;

    if (pos >= 0 && pos < size_arr)
    {
        // Update element
        arr[pos] = data;

        cout << "Array after update: ";

        for (int i = 0; i < size_arr; i++)
        {
            cout << arr[i] << " ";
        }
    }
    else
    {
        cout << "Invalid Index" << endl;
    }

    return 0;
}
