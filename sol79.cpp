//frequency of elements in an string
#include<iostream>

using namespace std;
 
 void occurence(string str, int n){
    for (int i = 0; i<n; i++)
    {
        cout<<str[i]<<" ";
    }
    
 }
 
int main(){
 
 string str = "apple";

 int n = str.length();
  
  sort(str, str+n);

 occurence(str, n);
  
  
return 0;
}