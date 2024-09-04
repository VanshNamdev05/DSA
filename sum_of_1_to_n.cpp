#include<iostream>
using namespace std;

int main(){
    int n;
    int count = 1;
    int sum = 0;
    cout<<"n: "<<endl;
    cin>>n;
    while (count<=n)
    {
        sum+=count;
        count++;
    }

    cout<<"The sum from 1 to "<<n<<" is : "<<sum;
    

    return 0;
}