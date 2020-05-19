#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    //roots of a quadratic equation
    int y,z,rem,rem1,rev=0;

    cout << "enter the number : ";
    cin>>y;
    z=y;

    //using only one variable
    cout<<"the number is : : : ";
    while(y!=0){
        rem=y%10;
        cout<<rem;
        y/=10;

    }

    //using 2 variables
    while(z!=0){
        rem1=z%10;
        rev=rev*10+rem1;
        z/=10;
    }
    cout<<"\nthe reverse number is : "<<rev;


    return 0;
}
