#include <iostream>
using namespace std;
int main()
{
    int arr[100], n, i;
    int *ptr;

    cout << "Enter number of elements:";
    cin >> n;

    cout << "Enter" << n << "elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ptr = arr;

    cout << "\nArray elements using pointer:\n";
    for (int i = 0; i < n; i++)
    {
        cout << *(ptr + i) << " ";
    }

    cout << "\n\nArray elements doubled using pointer:\n";
    for (int i = 0; i < n; i++)
    {
        cout << 2 * (*(ptr + i)) << " ";
    }

    cout << endl;
    return 0;
}