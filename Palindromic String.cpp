/*---------------------------------------------------------------------------------------------------------------------*/




#include <iostream>
using namespace std;

int main()
{    
    int length = 0;
    int count = 0;
    string s;   //Declaring variables 
    
      cin >> s ;
        
        for ( int i =0 ; s [ i ] != '\0' ; i ++) 
      
        {
            
            length++;                    //Calculating the length of the string, we can use strlen() too.
    
        }
        
        
        for ( int k = 0 ; k < length ; k ++)      /*  Checking each character of the string that it
                                                      matches to the corresponding character or not, 
                                                      in order to become the Palindrome string */
        
        {
            
            if(s[ k ] == s[ (length - 1) - k ])  
            {
                count ++;
                
            }
                                                  
            
           
            
            
        }
        
        if ( count == length )
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    
    
    return 0;
    
 
}
