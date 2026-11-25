#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 3, 4, 5, 2};

    int size_arr = 5;
    int pos;

    cout << "Enter the position: ";
    cin >> pos;

    if (pos >= 0 && pos < size_arr)
    {
        // Shift elements to the left
        for (int i = pos; i < size_arr - 1; i++)
        {
            arr[i] = arr[i + 1];
        }

        size_arr--;

        cout << "Array after deletion: ";

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
