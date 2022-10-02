#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void bubblesort(int arr[], int n) //suppose n =5
{
    int i, j;
    for (i=0; i<n-1; i++) //i=0 to n-1 = 4
    {
        for (j=0; j< n-i-1; j++) //j=0 to n-1-i = 5,4,3,2,1,0
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
    int k;
    for (k=0; k<n; k++)
    {
        cout<<arr[k]<<" ";
    }
    cout<<endl;
}

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout << "Sorted array: \n";
    bubblesort(arr, n);
    
return 0;
}
