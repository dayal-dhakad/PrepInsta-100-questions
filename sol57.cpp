#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int smallElement(int arr[], int n){
    
    if (n==0)
    {
        return arr[0];
    }
     return min(arr[n-1], smallElement(arr, n-1));
    
}
 
int main(){
 
 int arr[5] ={3 , 6, 2, 88, 77};
 int n = sizeof(arr)/sizeof(arr[0]);
 //cout<<n;
 cout<<smallElement(arr, n);

  
  
return 0;
}