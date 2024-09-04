#include<iostream>
using namespace std;

int main(){
    int n;
    int factorial = 1;
    cout<<"n : ";
    cin>>n;
    for (int count = 1; count <= n; count++)
    {
        factorial = (factorial*count);
        
    }
    cout<<"The factorial is : "<<factorial;
    

    return 0;
}