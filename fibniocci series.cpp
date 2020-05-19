#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    //roots of a quadratic equation
    int y,a=0,b=1,nxt=0;

    cout << "enter the number of fibnoacci series : " << endl;
    cin>>y;

    for(int i=1;i<=y;++i){
        if(i==1){
            cout<<a<<endl;
        }
        if(i==2){
            cout<<b<<endl;
        }
        nxt=a+b;
        cout<<a<<" + "<<b<<" = "<<nxt<<endl;
        a=b;
        b=nxt;

    }


    return 0;
}
