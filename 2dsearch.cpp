//2D matrix Search- Optimised Approach [IMP]
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin>>n >> m;
    int target; cin>> target;
    int a[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
        {
            cin>> a[i][j];
        }
    }

    bool found = false;
    int r=0, c= n-1; //start from rightmost top corner or leftmost bottom corner
    while(r < n and c >=0)
    {
        if(a[r][c] == target){
            found = true;
            cout << "found"<<endl;
            cout << r <<" "<< c;
            return 0;
            
        }
        a[r][c] > target ? c-- : r++;
    }
    cout<<"Not found";
    return 0;
}