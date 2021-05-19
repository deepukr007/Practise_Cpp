// Input [1,2,3]
// Sub arrays = [1], [1,2] , [1,2,3] , [2] , [2,3] , [3]
// Expected Output Sum of Each sub array = 1 , 3 , 6 , 2 , 5 ,3 


#include<iostream>
using namespace std;

int main()
{
int n ;
cin>>n;
int a[n];

for ( int i=0 ; i<n ; i++)

{
    cin>>a[i];

}

for(int i=0;i<n;i++)
{
    int count =0 ;
    for(int j=i; j<n ; j++)
    {
        count = count + a[j];
        cout<<count<<" ";
    }

}

    return 0;
}