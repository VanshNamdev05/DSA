#include<iostream>
using namespace std;

void reverse_array(int arr[] , int size){
    for (int i = 0; i < size; i++)
    {
        int end = (size-1);
        if (i>end)
        {
            break;
        }
        else{
            swap(arr[i],arr[end]);
            size--;
        }
        
    }
    
}

void printarray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}

int main(){

    int arr[6]={1,4,0,5,-2,15};
    int brr[5]={2,6,3,9,4};

    reverse_array(arr,6);
    reverse_array(brr,5);
    
    printarray(arr,6); 
    printarray(brr,5); 

    return 0;
}