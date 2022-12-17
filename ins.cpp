#include <iostream>
using namespace std;
 
int ins(int arr[], int n, int key, int cap)
{
  if (n >= cap)
        return n;
    arr[n] = key;
    return (n + 1);
}
 
int main()
{
    int x = 12;
    int arr[x] = { 8,4,1,3,12,6 };
    int y = 5;
    int key = 13;
    cout << "\n Before insert: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    y = ins(arr, y, key, sizeof(arr) / sizeof(arr[0]));
    cout << "\n After insert: ";
    for (int j = 0; j < n; j++)
        cout << arr[j] << " ";
    return 0;
}