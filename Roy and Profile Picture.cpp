#include <iostream>
using namespace std;

int main()
{
long int l,w,n,h; 
    
    cin>>l>>n;
    
    for(int i=0;i<n;i++)
    {cin>>w>>h;
    
        if(w<l || h<l)
        {
            cout<<"UPLOAD ANOTHER"<<endl;
        }
        else if(w==h)
        {
            cout<<"ACCEPTED"<<endl;
        }
        else
        {
            cout<<"CROP IT"<<endl;
        }
    }
    
    
   
   
   
}
