// longest palindrome
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int rev(int n)
{

    int answer = 0;
    int bit = 0;
    while (n != 0)
    {
        bit = n % 10;
        answer = answer * 10 + bit;
        n = n / 10;
    }
    return answer;
}

int main()
{
    int arr[] = {1, 121, 5551555, 54545, 10111, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n);

    for (int i = n - 1; i >= 0; i--)
    {
        if (rev(arr[i]) == arr[i])
        {
            cout << arr[i];
            break;
        }
    }

    return 0;
}