#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    //roots of a quadratic equation
    int n1,n2,flag=0,gcd=0;

    cout << "enter the number : ";
    cin>>n1;
    cout << "enter the second number : ";
    cin>>n2;

    if(n2>n1){
        flag=1;
    }
    cout<<flag;

    if(flag=1){
        for(int i=1;i<=n1;i++){
            if(n1%i==0 && n2%i==0){
                gcd=i;
            }
        }
        cout<<"the gcd is : "<<gcd;
    }else if(flag=0){
        for(int i=1;i<=n2;i++){
            if(n1%i==0 && n2%i==0){
                gcd=i;
            }
        }
        cout<<"the gcd is : "<<gcd;
    }else{
        cout<<"something went wrong";
    }

    return 0;
}
