#include <iostream>
using namespace std;

int Fib(int n){
    
    // Note : declaring static items too here
    static int t1 = 0, t2 = 1, nextTerm;
    
    if(n > 0)
    {    
        nextTerm = t1 + t2;
        t1 = t2;    
        t2 = nextTerm;    
    
        cout << nextTerm << ", ";    
        Fib(n-1);    
    }
    
}

int main()
{
    int n = 15;
    
    cout << "0, 1, ";
    
    // n-2 as 2 terms already printed
    Fib(n-2);

    return 0;
}
