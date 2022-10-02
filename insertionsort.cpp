#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void insertionsort(int arr[], int n) //suppose n =5
{
    int i, key, j;
    for (i = 1; i < n; i++) //i 1 to 4
    {
        key = arr[i];  //key = element
        j= i - 1;   // j =0, 1, 2, 3

        while (j >= 0 && arr[j] > key){ //1st element greater than second element 
            arr[j+1] = arr[j];
            j = j - 1;  // compare all previous elements
        }
        arr[j + 1] = key;
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
    insertionsort(arr, n);
    
return 0;
}
