#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    int currentsum = 0;
    int maxsum = INT_MIN;
    int start = 0, end = 0, s = 0;
    for(int i=0; i<n; i++){
        currentsum += a[i];
        if (maxsum < currentsum)
        {
            maxsum = currentsum;
            start = s;
            end = i;
        }
        if (currentsum < 0){
            currentsum=0;
            s= i+1;
        }
    
    }
    cout << "Maximum contiguous sum is " << maxsum
         << endl;
    cout << "Starting index " << start << endl
         << "Ending index " << end << endl;
    return 0;
}