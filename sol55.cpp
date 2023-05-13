// Prime number using recusion
#include <iostream>
using namespace std;

bool isPrime(int n, int i = 2)
{

    if (n <= 2)
    {
        return (n == 2) ? true : false;
    }

    if (n % i == 0)
    {
        return false;
    }
    if (i * i > n)
    {
        return true;
    }

    return isPrime(n, i + 1);
}

int main()
{
    int num = 18;

    if (isPrime(num))
    {
        cout << num << " is a prime number" << endl;
    }
    else
    {
        cout << "Not Prime" << endl;
    }

    //  int count = 0;
    //  for (int i = 2; i <=17/2; i++)
    //  {
    //     if (num%i==0)
    //     {
    //         count++;
    //     }

    //  }
    //    if (count<=0)
    //     {
    //         cout<<"Prime number";
    //     }

    return 0;
}