#include <iostream>
using namespace std;

bool linear_search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
            break;
        }
    }
    return 0;
}

int main()
{

    int arr[5] = {1, 4, 2, 3, 6};

    cout << "Enter the number you want to find : " << endl;
    int key;
    cin >> key;

    bool found = linear_search(arr, 5, key);

    if (found)
    {
        cout << "Element is present";
    }
    else
    {
        cout << "Element is not present";
    }

    return 0;
}