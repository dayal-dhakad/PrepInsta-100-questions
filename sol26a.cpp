//Harshad number in range
#include<iostream>
using namespace std;
 
 
int main(){
 
 for (int i = 1; i < 1000; i++)
 {
    /* code */
 
 
int n = i;
int sum = 0;

int temp = n;
while (temp!=0)
{
    int x = temp%10;
    sum += x;
    temp= temp/10;
}

  if(n%sum==0){
    cout<<n<<" ";
  }
  else{
      //  cout<<n<<" is not a Harshad number"<<endl;

    
  }
 }
return 0;
}