
#include <bits/stdc++.h>

using namespace std;

int  octalToDecimal(int n)
{
    int ans=0;
    int x=1;

    while(n>0)
    {
        int digit = n%10;
        if(digit>7)
        {
            cout<<"Invalid  Number";
            return 0;
        }
        ans+= digit * x;
        x*=8;
        n/=10;
    }
    return ans;
}


int main()
{
    int n;
    cin>>n;

    cout<<octalToDecimal(n);
}