//decimal to binary
#include<iostream>
#include<vector>
using namespace std;
 
 
int main(){
 int num = 14;
 
  vector<int> arr;

  while (num!=0)
  {
     arr.push_back(num&1);
     num = num>>1;
  }
  
  for (int i = (arr.size())-1; i>=0; i--)
  {
    cout<<arr[i];
  }
  
  
  
return 0;
}