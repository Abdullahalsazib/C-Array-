#include <bits/stdc++.h>
using namespace std;


void second_largest(int arr[], int n)
{
    int i, fst, snd;

    fst = snd = INT_MIN;

    for(i  = 0; i < n; i++)
    {
        if(arr[i] > fst)
        {
            snd = fst;
            fst = arr[i];
        }
        else if(arr[i] > snd)
        {
            snd = arr[i];
        }
    }
    cout << "Second Largest Element is: " << snd;
}
int main()
{

    int n, i;
    cin >> n;
    int arr[n];
    for( i = 0; i < n;i++)
        cin >> arr[i];

    second_largest(arr, n);
    return 0;
}
