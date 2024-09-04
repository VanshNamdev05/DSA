#include<iostream>
using namespace std;

int main(){
    int num;
    int flag=0;
    cout<<"Enter the number : ";
    cin>>num;
    int i=2;
    
    for ( i = 2; i <=(num-1); i++)
    {
        if (num%i==0){
        flag++;
    }    
}
    if (flag>0)
    {
        cout<<"Not a prime number";
    }
    else
    {
        cout<<"Prime number";
    }

    return 0;
}