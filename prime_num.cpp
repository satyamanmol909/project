#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter a number ";
    cin>>a;
    if(a>1)
    {
        for(int i=2;i<a;i++)
        {
            if(a%i==0)
            {
               cout<<"number is not a prime number "<<endl;
    
                break;
            }
            else
            {
                cout<<"number is a prime number"<<endl;
                break;
            }
        }   
    }
    else
    { 
        cout<<"please enter the correct number";
    }
    return 0;
}