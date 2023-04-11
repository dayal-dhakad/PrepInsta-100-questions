//Palindrome number

#include<iostream>
using namespace std;
 
 
int main(){
int num = 1234321;
int temp = num;
int ans = 0;

while (num != 0){ 

int digit = num%10;
ans = (ans*10) + digit;

num = num/10;

}

if(temp == ans){
    cout<< temp<<" is palindrome number";
}
else{
     cout<< temp<<" is not a palindrome number";
}
return 0;
}