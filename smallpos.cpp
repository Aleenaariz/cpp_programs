/* Problem
Find the smallest positive missing number in the given array.
Example: [0, -10, 1, 3, -20], Ans = 2 */

#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];

    for (int i=0; i < n; i++)
    {
        cin>>a[i];
    }
    const int N = 10000.0;
    bool check[N];
    for (int i=0; i<N; i++)
    {
        check[i] = 0;
    }
    
    for (int i=0; i < n; i++)
    {
        check[a[i]] = 1;
    }
    int ans = -1;
    for(int i=1; i<N; i++)
    {
        if(check[i] == 0)
        {
            ans = i;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}