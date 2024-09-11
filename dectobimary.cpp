#include<iostream>
using namespace std;
int dectobinary(int x){
    int ans = 0 , pow = 1; 
    while (x>0)
    {
        int rem = x%2;
        x = x/2;
        ans = ans + (rem*pow);
        pow = pow*10;
    }
    cout<<ans;
    
}

int main(){
    int x;
    cout<<"x : ";
    cin>>x;
    dectobinary(x);    
    return 0;
}