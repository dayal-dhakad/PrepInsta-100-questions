//C++ program to count numbers of even and odd elements in an array
#include<iostream>
using namespace std;
 
 
int main(){
  int arr[] = {1, 7, 8, 4, 5, 16, 8};
   int n = sizeof(arr)/sizeof(arr[0]);
  int even = 0;
  int odd= 0;
  for (int i = 0; i < n; i++)
  {
     if (arr[i]%2==0)  // also we can write arr[i]&1==0
     {
        even++;
     }
     else{
        odd++;
     }
  }
  cout<<"even elements: "<<even<<endl;
  cout<<"odd elements: "<<odd<<endl;
  
return 0;
}