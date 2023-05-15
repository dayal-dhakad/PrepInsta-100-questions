//Distinct element in array
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
  int arr[] = {9, 9, 8, 8, 8}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    sort(arr, arr+n);

    int count=0;
   for (int i = 0; i <n; i++)
   {
       if (arr[i]!=arr[i+1])
       {
         count++;
       }
       
   }
   cout<<count<<endl;
  
return 0;
}