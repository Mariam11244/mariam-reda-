#include <iostream>
using namespace std;

int F_E(int arr[], int n, int key);
int D_E(int arr[], int n, int key)
{
    int pos = F_E(arr, n, key);
    if (pos == -1) {
        cout << "Element not found";
        return n;
    }
    int i;

    for (i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];
    return n - 1;
}

int F_E(int arr[], int n, int key)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == key)
            return i;
    return -1;
}

int main()
{
    int i;
    int arr[] = { 8,4,1,3,12,6 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 13;

    cout << "before deletion\n";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    n = Delete(arr, n, key);

    cout << "\n After deletion\n";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}