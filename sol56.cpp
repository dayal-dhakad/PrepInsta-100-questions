//largest element in the array
/* #include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int maxNo(int arr[], int size){

  int max = arr[size];
  if (size==0)
  {
    return arr[0];
  }

  return max(arr[n-1], maxNo(arr, size-1));
  
  
}
 
int main(){
 int arr[10] = { 2, 5, 22, 5, 7, 7, 1, 8, 100, 4};
 int size = 10;
 
 cout<< maxNo(arr, size-1);

// Iterative approach
 int maxNo= arr[0];
 for (int i = 0; i < 10; i++)
 {
    if (arr[i]>maxNo)
    {
        maxNo = arr[i];
    }
    
 }
 cout<<maxNo<<endl;
 return 0;
}
 */

 //correct code
  #include<bits/stdc++.h>
using namespace std;

//Recursive function
int largest_element(int n, int arr[]){

   if(n==1) return arr[0];  // Base condition

   return max(arr[n-1], largest_element(n-1, arr));
}
//Driver code
 int main(){ int arr[] = {10, 45, 78, 34, 67};
 int n = sizeof(arr)/sizeof(arr[0]); 
cout<<"Largest Element is : "<<largest_element(n, arr); 
}
  
