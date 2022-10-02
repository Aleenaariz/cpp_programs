/*Given an unsorted array A of size N of non-negative integers, find a continuous
subarray which adds to a given number S.
Constraints
1 <= N <= 10^5
0 <= Ai <= 10^10 
Input:
N = 5, S = 12
A[] = {1,2,3,7,5}
Output: 2 4       */

/* time complexity = O(n)
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, s;
    cin >> n >> s;
    int a[n];
    for (int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    int i=0, j=0; int st=-1, en=-1;
    int sum = 0;
    while(j<n && sum + a[j] <= s)
    {
        sum += a[j];
        j++;
    }
    cout<< "SUM " << sum<<endl;
    cout<< "j " << j<<endl;
    if (sum ==s)
    {
        cout << i+1 << " "<< j << endl;
        return 0;
    }
    while(j<n)
    {
        sum += a[j];
        while (sum > s)
        {
            sum -= a[i];
            i++;
        }
        if (sum == s){
            st = i+1;
            en = j+1;
            break;
        }
        j++;
    }
    cout << st << " " << en << endl;
    return 0;
    
} */

//time com = O(n^2)

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, s;
    cin >> n >> s;
    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    for (int i=0; i < n; i++)
    {
        int currentsum = arr[i];

        if (currentsum == s)
        {
            cout << i << endl;
            return 0;
        }
        else{
            for (int j =i+1; j < n; j++)
            {
                currentsum +=arr[j];

                if (currentsum == s)
            {
                cout << i+1 << " " << j+1 << endl;
                return 0;
            }
            }
        }
    }
    cout << "No subarray found";

    return 0;
}