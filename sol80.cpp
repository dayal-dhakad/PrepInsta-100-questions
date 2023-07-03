#include<iostream>
#include<vector>
using namespace std;
 
 int maxProfit(vector<int>prices){
     int size = prices.size();
    
     int minIndex = 0;
     int min = prices[0];
  


    for (int i = 0; i < size; i++)
    {
        if(prices[i] < min){
            min = prices[i];
            minIndex = i;
        }
    }

    
    { 
       int max = prices[0];
       int maxIndex = 0;
    for (int i = minIndex+1; i < size; i++)
    {
        
        if(prices[i] > max){
            max = prices[i];
            maxIndex = i;
        }

    }
    }

     return max;
 }
 
int main(){
 vector<int> prices = {7, 1, 5, 3, 6, 4};
 
 
 cout<< maxProfit(prices);
//   for (int i = 0; i < prices.size(); i++)
//   {
//     cout<<prices[i]<<" ";
//   }
  
  
return 0;
}