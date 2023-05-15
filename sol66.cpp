//sort function
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
 vector<int> arr = {4, 6,2 ,5, 7};
 sort(arr.begin(), arr.end());

 for (int i = 0; i < arr.size(); i++)
 {
    cout<<arr[i]<<" ";
 }
 
  
  
return 0;
}