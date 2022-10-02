#include <bits/stdc++.h>
using namespace std;

int bintodec(int n)
{
    int dec = 0;
    int x = 1;
    while (n >0)
    {
        int l = n%10;
        dec += (l*x);
        x *= 2;
        n /= 10;
    }
    return dec;
}

int octtodec(int n)
{
    int dec = 0;
    int x = 1;
    while (n >0)
    {
        int l = n%10;
        dec += (l*x);
        x *= 8;
        n /= 10;
    }
    return dec;
}

int hextodec(string n)
{
    int dec = 0;
    int x = 1;

    int s = n.size();
    for (int i = s-1; i>=0; i--)
    {
        if (n[i] >= '0' && n[i] <= '9')
        {
            dec += x*(n[i] - '0');   //suppose n[i] = '1' then this step will give '1' - '0' = 1 i.e int value
        }
        else if (n[i] >='A' && n[i] <= 'F')
        {
            dec += x*(n[i]- 'A' + 10);   //suppose n[i] = 'A' then this step will give 'A' - 'A' = 0 +10 = 10 so value of 'A' = 10
        }
        else{
            return 1;
        }
        x *= 16;
    }
    return dec;
}
/*int dectobin(int n){
    int x = 1;
    int bin = 0;
    while(x<=n)
    {
        x *= 2;
    } 
    x /= 2;  //suppose n=10 then x=8 < 10 then again while loop will be executed making x=16 so we need to divide it by 2

    while( x>0 )
    {
        int ld = n/x;   //n=10 x=8 -> ld =1 //next turn x=4>0 n=2 -> ld =0 //x=2,n=2 -> ld = 1 //x=1,n=0 -> ld =0
        n -= ld*x;      //n= 10 - (1*8)=2  // n= 2 -(0*4) = 2 //n= 2 - (1*2) = 0 //n=0-(0*1)=0
        x /= 2;         //x=4 //x=2 //x=1 //x=0
        bin = bin*10 + ld;  // bin = 0*10+1 =1 //bin = 1*10+ld = 10  // bin = 10*10+1 = 101 // bin = 101*10+0 =1010
    }
    return bin;
} */

int dectobin(int n){
    int bin = 0;
    int x = 1;
    while( n>0 )
    {
        bin += (n%2)*x;
        n /= 2;
        x *= 10;
    }
    return bin;
}

string dectohex(int n)
{
    int x = 1;
    string hex = "";
    while ( x <= n)
    {
        x *= 16;
    }
    x /= 16;
    while ( x>0)
    {
        int ld = n/x;
        n -= (ld*x);
        x /= 16;
        if (ld <= 9)
        {
            hex = hex + to_string(ld);
        }
        else
        {
            char c = 'A' + ld - 10;
            hex.push_back(c);
        }
        
    }
    return hex;
}

int32_t main()
{
    int n;
    //string n;
    cin>>n;

    //cout<< bintodec(n) << endl;
    //cout<< octtodec(n) << endl;
    //cout<< hextodec(n) << endl;
    //cout<< dectobin(n) << endl;
    cout<< dectohex(n) << endl;
    
}