// armstrong number

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int number = 153;
    int temp = number;
    int num = number;
    int count = 0;

    while (number != 0)
    {
        number = number / 10;
        count++;
    }

    int sum = 0;
    while (temp != 0)
    {
        int bit = temp % 10;
        sum += pow(bit, count);
        temp = temp / 10;
    }

    if(sum==num){
        
        cout<<num<<" is a armstrong number"<<endl;
    }
    else{
        cout<<num<<" is not a armstrong number"<<endl;
    }

    return 0;
}