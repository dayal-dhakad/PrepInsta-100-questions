// finding the second smallest element in an array
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
    
 
int arr[5] = { 4, 8, 2, 9, 3};
int min = INT_MIN;
int min2 = arr[0];
for (int i = 0; i < 5; i++)
{
    if (arr[i]<min)
    {
       min = arr[i];
    }
    
}

for (int i = 0; i < 5; i++)
{
    if (arr[i]<min2 &&  arr[i]!=min)
    {
        min2= arr[i];
    }
    
}

cout<<min2;



  
return 0;
}