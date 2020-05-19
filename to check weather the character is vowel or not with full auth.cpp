#include <iostream>
#include <ctype.h>

using namespace std;

int main()
{
    char c;
    cout << "enter the character : " << endl;
    cin>>c;
    c=tolower(c);
    if(c>='a' && c<='z'){

        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
            cout<<c<<" is a vowel";
        }else{
            cout<<c<<" is a consonent";
        }
    }else{
        cout<<"not a valid character";

    }


    return 0;
}
