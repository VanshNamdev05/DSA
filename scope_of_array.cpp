#include <iostream>
using namespace std;

void updatearray(int arr[], int size)
{
    cout << "inside function" << endl;
    arr[0] = 190;
    arr[1] = 10;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int array[4] = {1, 4, 3, 2};
    updatearray(array, 4);
    cout << "Inside the main function" << endl;
    for (int i = 0; i < 4; i++)

    {
        cout << array[i] << " ";
    }

    int array[5]={2,7,1,-4,11};

    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        sum += array[i];
    }

    cout<<sum;
    

    return 0;
}