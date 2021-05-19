//Time complexity O(logn) base 2

#include <iostream>
using namespace std;

int binarySearch(int a[],int n,int key)  
{
    int low = 0 ;
    int high = n-1;
    int mid = (high +low)/2;

    for(mid ; mid>=low ; mid = (low+high)/2)
    {

        if(a[mid]==key)
        {
            return mid;
        }

        if(a[mid]>key)
        {
            high = mid-1;
        }

        if(a[mid]<key)
        {
            low=mid+1;
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