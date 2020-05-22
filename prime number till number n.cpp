//get all the prime numbers till number n

#include <iostream>
using namespace std;

int checkPrimeNumber(int);

int main()
{
    int n1, n2;
    bool flag;

    cout << "Enter two positive integers: ";
    cin >> n1 >> n2;

    cout << "Prime numbers between " << n1 << " and " << n2 << " are: ";

    for(int i = n1+1; i < n2; ++i)
    {
        // If i is a prime number, flag will be equal to 1
        flag = checkPrimeNumber(i);

        if(flag)
            cout << i << " ";
    }
    return 0;
}

// user-defined function to check prime number
int checkPrimeNumber(int n)
{
    bool flag = true;

    for(int j = 2; j <= n/2; ++j)
    {
        if (n%j == 0)
        {
            flag = false;
            break;
        }
    }
    return flag;
}


//Enter two positive integers: 12
//55
//Prime numbers between 12 and 55 are: 13 17 19 23 29 31 37 41 43 47 53
