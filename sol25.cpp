//Automorphic number

#include<iostream>
#include<math.h>
using namespace std;
 
 
int main(){
 
int n= 24;
int num = 0;

int i = 0;

int sqr = n*n;
cout<<"Square of "<<n<<" is "<<sqr<<endl;
int count=0;
// cout<<"Sqr is "<<sqr<<endl;
while (sqr!=0)
{
    
    int x = sqr%10;
    num = x* pow(10, i) + num;
    if(num==n){
        count++;
        // cout<<n<<" is a automorphic number"<<endl;
    }
    sqr = sqr/10;
    i++;

}

if (count>0)
{
    cout<<n<<" is a automorphic number"<<endl;
}
else
{
    cout<<n<<" is not a automorphic number"<<endl;
}
  
return 0;
}