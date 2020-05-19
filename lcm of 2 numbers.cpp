//the least common multiple of two numbers

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    //roots of a quadratic equation
    int n1,n2,flag=0,flag2=0,gcd=0;

    cout << "enter the number : ";
    cin>>n1;
    cout << "enter the second number : ";
    cin>>n2;

    if(n2>n1){
        flag=1;
    }
    cout<<flag;

    if(flag=1){
        for(int i=2;i<=n1;i++){
            if(n1%i==0 && n2%i==0){
                gcd=i;
                flag2=1;
                break;
            }

        }
        cout<<"the lcm is : "<<gcd;
    }else if(flag=0){
        for(int i=2;i<=n2;i++){
            if(n1%i==0 && n2%i==0){
                gcd=i;
                flag2=1;
                break;
            }
        }
        cout<<"the lcm is : "<<gcd;
    }else{
        cout<<"something went wrong";
    }

    return 0;
}
