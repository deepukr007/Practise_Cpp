//Time complexity O(logn) base 2

#include <iostream>
using namespace std;

int binarySearch(int a[],int n,int key)  
{
    int low = 0 ;
    int high = n-1;
    int mid ;

    while(low<=high)
    {
    mid = (high +low)/2;

    if(key==a[mid])
    {
        return mid;
    }

    else if(key >a[mid])
    {
        low = mid+1;
    }

    else if(key<a[mid])
    {
        high = mid-1;
    }

    }

    return -1;
}

int main()
{
    int n;
    cin>>n;
    int a[n];

    for (int i=0 ; i<n ; i++)
    {
        cin >> a[i];
    }

    int key ;
    cin>>key;

   cout<< binarySearch(a,n,key);

   return 0;

}