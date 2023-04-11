//Sum of a number

#include<iostream>
#include<vector>
using namespace std;
 
 
int main(){
 
vector<int> vec;
int num = 1234;
int digit;


while (num != 0)
{
    digit = num%10;
   vec.push_back(digit);

    num = num/10;

}
for (int i = 0; i < vec.size(); i++)
{
    cout<< vec[i];
}


  
return 0;
}