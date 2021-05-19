// 1 40 5 60 7 
// 1 40 40 60 60 
// Replace ith element with previous seen max element

#include <iostream>
using namespace std ;

void maxIArray(int a[] , int n)
{
    for(int i=1;i<n;i++)
    {
        a[i]= max(a[i] , a[i-1]);    

    }

    for(int i=0 ; i<n ; i++)
    {
        cout<<a[i];
    }
}

int main ()
{

int n;
cin>>n;
int a[n];

//Taking input 
for (int i=0 ; i< n ;i++)
{
    cin>>a[i];
}

maxIArray(a,n);

    return 0;

}