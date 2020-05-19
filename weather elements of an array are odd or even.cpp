#include <iostream>

using namespace std;

int main()
{
    int a[5];
    cout << "enter the elements of the array : " << endl;
    for(int i=0;i<5;i++){
        cout<<"the "<<i+1<<" element is : ";
        cin>>a[i];
    }
    for(int i=0;i<5;i++){
        if(a[i]%2==0){
            cout<<"the "<<i+1<<" number is even"<<endl;
        }else{
            cout<<"the "<<i+1<<" number is odd"<<endl;
        }
    }

    return 0;
}
