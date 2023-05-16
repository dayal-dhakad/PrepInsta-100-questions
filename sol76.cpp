// finding the maximum product of sub-array of a given array
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {10, -20, -30, 0, 70, -80, -20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = arr[0];

    for (int i = 0; i < n; i++)
    {
        int mul = arr[i];
        // traversing in current subarray
        for (int j = i + 1; j < n; j++)
        { // updating result every time // to keep an eye over the // maximum product
            if (mul > result)
                result = mul;
            mul *= arr[j];
        }
        if (mul > result)
            result = mul;
    }

    cout << "Maximum Product of sub-array is " << result;
}