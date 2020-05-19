//this is the program to find the armstrong number...now hyou might ask what is an armstrong number?
//Armstrong number is a number that is equal to the sum of cubes of its digits. For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int y,z,rem1,rev=0,sum=0;

    cout << "enter the number : ";
    cin>>z;
    y=z;
    while(z!=0){
        rem1=z%10;
        cout<<rem1<<endl;
        sum=sum+(rem1*rem1*rem1);
        z/=10;
    }
    cout<<"\nsum is : "<<sum;

    if(y==sum){
        cout<<"\nnumber is a armstrong number"<<endl;
    }else{
        cout<<"\nnumber is not a armstrong number";
    }

    return 0;
}
