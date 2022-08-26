// NAME-NISHA GUPTA
// ROLL NO.-2010991642
// SET-04
// Q2

#include <bits/stdc++.h>
using namespace std;

// Function to Check if elements are cons
bool areCons(int arr[], int n)
{
    // Sort the array
    sort(arr, arr + n);
    // checking the adjacent elements
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1] + 1)
        {
            return false;
        }
    }
    return true;
}

/* Driver program */
int main()
{
    int arr[] = {4, 2, 4, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    bool result;

    try
    {
        result = areCons(arr, n);
    }
    catch (int error)
    {
        cout << "Error: " << error << endl;
    }

    if (result == true)
        cout << " Array elements are consecutive ";
    else
        cout << " Array elements are not consecutive ";
    return 0;
}



