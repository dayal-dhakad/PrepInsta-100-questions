//decimal to octal
#include<iostream>
#include<vector>
using namespace std;
 
 
int main(){
 int num = 148;
 
  vector<int> arr;

  while (num!=0)
  {
     arr.push_back(num%8);
     num = num/8;
  }
  
  for (int i = (arr.size())-1; i>=0; i--)
  {
    cout<<arr[i];
  }
  
  
  
return 0;
}