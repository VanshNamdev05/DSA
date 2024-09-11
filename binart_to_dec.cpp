#include<iostream>
using namespace std;
int bintodec(int x){
    int ans = 0 , pow = 1;
    while (x>0)
    {
        int rem = x%10;
        x = x/10;
        ans = ans + (pow*rem);
        pow = pow*2;
    }
    cout<<ans;
    
}

int main(){
    int x;
    cout<<"x : ";
    cin>>x;
    bintodec(x);
    
    return 0;
}