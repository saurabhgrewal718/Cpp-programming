//checking if a number is aplindrome or not...
//palindrome is a number wich is same reading froim front and back...eg 121 when read from front is same as when read from backward

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int y,z,rem1,rev=0;

    cout << "enter the number : ";
    cin>>z;
    y=z;
    while(z!=0){
        rem1=z%10;
        rev=rev*10+rem1;
        z/=10;
    }
    cout<<"\nthe reverse number is : "<<rev<<endl;

    if(y==rev){
        cout<<"number is a palindrome"<<endl;
    }else{
        cout<<"number is not a palindrome";
    }

    return 0;
}
