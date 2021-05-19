//Time complexity O(n)

#include <iostream>
using namespace std;

int insertionSort(int a[],int n)  
{
    for(int i=1 ; i<n-1 ; i++)
    {
        int current = a[i];
        int j = i;
        while(a[j] > current && a[j]!=0)
        {
            a[j+1] = a[j];
            j--;

        }

        a[j+1] = current;
    }

        
    for(int i=0 ; i<n ; i++)
    {
        cout<< a[i] << " ";
    }

 return 0;
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

    insertionSort(a , n);


   return 0;


}