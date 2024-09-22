#include<iostream>
using namespace std;

int getmax(int array[] , int size){
    int max = INT16_MIN;
    for (int i = 0; i < size; i++)
    {
        if (array[i]>max)
        {
            max=array[i];
        }   
        
    }
    cout<<max<<endl;
    
}

int getmin(int array[] , int size){
    int mini = INT16_MAX;
    for (int i = 0; i < size; i++)
    {
        mini = min(mini , array[i]); //direct functoion to find min or max...
        // if (array[i]<min)
        // {
        //     min=array[i];
        // }   
        
    }
    cout<<mini;
    
}

int main(){

    int arr [5]={1,2,3,5,4};
    getmax(arr,5);
    getmin(arr,5);

    
    

    return 0;
}

