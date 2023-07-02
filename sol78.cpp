//frequency of elements in an array

#include<iostream>
#include<bits/stdc++.h>
#include<array>
using namespace std;
 
void occurence(int arr[], int n){
    

    int count=1;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==arr[i+1]){
            count++;
        }
        else{
            cout<<arr[i]<<" : "<<count<<endl;
            count=1;
        }

    }
    

}
 
int main(){
 int arr[] = {10, 30, 10, 20, 10, 20, 30, 10};
 int n = sizeof(arr)/sizeof(arr[0]);

 sort(arr, arr+n);

 occurence(arr, n);

  
  
return 0;
}