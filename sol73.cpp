//maximum scalar product
#include<iostream>
using namespace std;
 
 
int main(){

   int arr1[] = {1, 2, 6, 3, 7};
   int arr2[] = {10, 7, 45, 3, 7};

 int product = 0;

 int n = sizeof(arr1)/sizeof(arr1[0]);

 for (int i = 0; i < n; i++)
 {
    for (int j = i+1; j < n; j++)
    {
        if (arr1[i]>arr1[j])
        {
            int temp = arr1[i];
            arr1[i] = arr1[j];
            arr1[j] = temp;
        }
        
    }  
 }

 for (int i = 0; i < n; i++)
 {
    for (int j = i+1; j < n; j++)
    {
        if (arr2[i]>arr2[j])
        {
            int temp = arr2[i];
            arr2[i] = arr2[j];
            arr2[j] = temp;
        }
        
    }  
 }

 for (int i = 0; i < n; i++)
 {
    product += arr1[i]*arr2[i];
 }
 cout<<product<<endl;
 
  
return 0;
}