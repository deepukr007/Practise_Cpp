//Time complexity O(n)

#include <iostream>
using namespace std;

int selectionSort(int a[],int n)  
{
    for(int i=0 ; i<n-1 ; i++)
    {
        int minId = i;

       for(int j=i+1 ; j<n ; j++)
        {
            if(a[j]<a[minId])
            {
                minId = j;
            }
           
        }

            int temp = a[i];
            a[i] = a[minId];
            a[minId] = temp;

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

    selectionSort(a , n);


   return 0;


}