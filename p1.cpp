//Write  a  program  to  create  an  array  and  demonstrate  insertion,  
//deletion, traversal, and search operations. 
#include <iostream>
using namespace std;

int main()
{
    int arr[100] = {10, 20, 30, 40, 50};
    int n = 5;

    // Traversal
    cout << "Original array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // Insertion
    int pos, value;
    cout << "\n\nEnter position for insertion (1-" << n + 1 << "): ";
    cin >> pos;

    cout << "Enter value: ";
    cin >> value;

    for (int i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = value;
    n++;

    cout << "Array after insertion: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // Deletion
    cout << "\n\nEnter position for deletion (1-" << n << "): ";
    cin >> pos;

    for (int i = pos - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    n--;

    cout << "Array after deletion: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // Search
    int searchValue;
    cout << "\n\nEnter value to search: ";
    cin >> searchValue;

    int found = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == searchValue)
        {
            cout << "Value found at position " << i + 1 << endl;
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        cout << "Value not found." << endl;
    }

    return 0;
}