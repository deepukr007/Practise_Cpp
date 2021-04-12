#include <iostream>

using namespace std;

int fact (int n){
    int factorial =1;
    while(n>1)
    {
        factorial = factorial * n;
        n--;
    }

    return factorial;
}

int main()
{
    int n;
    cin >> n;

    for(int i=0 ; i<n ; i++)            // i from 0 to n-1 ,and j from 0 to i
    {
        for(int j=0;j<=i;j++)
        {
            cout<< (fact(i)/(fact(j)*fact(i-j))) << " ";   //t(i,j)= combination (i,j)
        }

        cout<<endl;

    }
    
}