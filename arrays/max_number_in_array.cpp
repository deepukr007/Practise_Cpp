#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int new_array[n];


    for(int i=0;i<n;i++)
    {
        cin>>new_array[i];
    }

    cout << endl;

    
    int maxNum = new_array[0];
    int minNum = new_array[0];

    for(int i=0 ; i<n ;i++)
    {
        maxNum = max(new_array[i],maxNum);
        minNum = min(new_array[i],minNum);

    }

    cout<<"Max Number is: " << maxNum<<endl;
    cout << "Min Number is: " << minNum<<endl;

}