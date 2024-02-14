#include<bits/stdc++.h>
using namespace std;

void three_lar_ele(int arr[], int n)
{
    int i, first, second, third;
    if(n < 3)
    {
        cout << "Invalid Input";
        return;
    }

    third = first = second  = INT_MIN;

    for(i = 0; i < n; i++)
    {
        if(arr[i] > first)
        {
            third = second;
            second = first;
            first = arr[i];
        }else if(arr[i] > second)
        {
            third = second;
            second = arr[i];
        }else if(arr[i] > third)
        {
            third = arr[i];
        }
    }
    cout << "Frist Largest Element is: "
    <<first << endl << "Second Largest Element is: "
    << second << endl << "Third Largest Element is: "
    << third;
}
int main()
{
    int n, i;
    cin >> n;
    int arr[n];
    for(i = 0; i < n; i++)
        cin >> arr[i];

    three_lar_ele(arr, n);
    return 0;
}
