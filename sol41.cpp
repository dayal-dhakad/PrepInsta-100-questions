//Permutations in which n people can occupy r seats in a classroom

//it might have error

#include<iostream>
using namespace std;
 
 int fact(int num){
    if (num<=1)
    {
        return num;
    }
    
    return num*fact(num-1);

    
 }
 
int main(){


int people = 5;
int seats = 9;
int answer = fact(people)/fact(people-seats);

cout<< answer;
  
  
return 0;
}