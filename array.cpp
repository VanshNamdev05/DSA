#include <iostream>
using namespace std;

void printarray(int arr[], int size)
{
    cout << "printing the array : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    cout << "printing DONE" << endl;
}

int main()
{
    // initialising entire array with same value...
    int array[70];
    fill_n(array, 70, 9);
    // for (int i = 0; i < 70; i++)
    // {
    //     cout<<array[i]<<endl;
    // }

    printarray(array, 70);

    // int num[15];

    // for (int i = 0; i < 15; i++)
    // {
    //     cout<<"Enter the value of index at "<< i<<": "<<endl;
    //     cin>>num[i];
    // }

    // for (int i = 0; i < 15; i++)
    // {
    //     cout<<num[i]<<endl;
    // }

    // cout<<"Value at 0 index : "<<num[0]<<endl;
    // cout<<"Value at 20th index : "<<num[20];

    // accessing more elements than initialised :

    int arr[8] = {2, 3, 4};
    // only 3 elements initialised

    // accessing these elements and more :

    // for (int i = 0; i < 8; i++)
    // {
    //     cout << arr[i] << endl;
    // }

    printarray(arr, 8);

    // jitne initialise kre hai agar usse jaada access kro to baaki sab ko 0 value assign ho jayegi automatically...

    return 0;
}