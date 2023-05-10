//Harshad number
#include<iostream>
using namespace std;
 
 
int main(){
 
int n = 120;
int sum = 0;

int temp = n;
while (temp!=0)
{
    int x = temp%10;
    sum += x;
    temp= temp/10;
}

  if(n%sum==0){
    cout<<n<<" is a Harshad number"<<endl;
  }
  else{
        cout<<n<<" is not a Harshad number"<<endl;

    
  }
  
return 0;
}