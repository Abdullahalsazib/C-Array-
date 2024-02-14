#include <bits/stdc++.h>
using namespace std;


int findMax(int arr[], int n)
{
    return *max_element(arr, arr + n);
}

int main()
{

    int n, i;
    cin >> n; // Array size;
    int arr[n]; // Array Initialization;

    for(int i = 0; i < n;i++)
        cin >> arr[i];

    cout << findMax(arr, n);

    return 0;
}
