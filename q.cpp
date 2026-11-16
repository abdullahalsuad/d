#include <iostream>
using namespace std;

void quickSort(int arr[], int low, int high) {
    if (low >= high) return;

    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);

    int p = i + 1;

    quickSort(arr, low, p - 1);
    quickSort(arr, p + 1, high);
}

int main() {
    int arr[] = {5, 2, 8, 1, 3};
    int n = 5;

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}