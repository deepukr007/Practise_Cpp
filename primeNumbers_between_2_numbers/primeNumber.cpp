#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

bool isPrime(int i)
{
    for (int j=2 ; j<= sqrt(i); j++)
    {
        if(i%j==0)
        {   
            return false;
        }

    
    }

     return true;

}

 int main()
 {
      int a , b;
      cin>> a>>b;

      for (int i =a ; i<=b; i++ )
      {
          if(isPrime(i)==true)
          {
              cout<<i<<endl;
          }  
      }

 }