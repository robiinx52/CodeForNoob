

/*------------------------------------------------------------------------------------*/

#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    long int answer=1;
    
    cin>>n;
     
     int *arr=new int[n](); //Static array intialization will do.
     
    for ( int i = 0 ; i < n ; i ++ )
    {
        cin>>arr[i];
    }
    
   int k = (pow(10,9)+7); /*pow is a mathematical function in #include<math.h> 
                           it returns a double value which we store in an integer k to
                           avoid errors(int%double error)*/
  while(n!=0)
  {
     
   answer = (answer*arr[n-1])%k;
       
    n--;
      
  }
  cout<<answer;
}
