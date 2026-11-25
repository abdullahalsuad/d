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

    int new_array[size_arr + 1];

    // Copy original array
    for (int i = 0; i < size_arr; i++)
    {
        new_array[i] = arr[i];
    }

    if (pos >= 0 && pos <= size_arr)
    {
        // Shift elements to the right
        for (int i = size_arr - 1; i >= pos; i--)
        {
            new_array[i + 1] = new_array[i];
        }

        // Insert new element
        new_array[pos] = data;

        cout << "Array after insertion: ";

        for (int i = 0; i < size_arr + 1; i++)
        {
            cout << new_array[i] << " ";
        }
    }
    else
    {
        cout << "Invalid Index";
    }

    return 0;
}
