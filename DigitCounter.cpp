#include<iostream>

using namespace std;

int main()
{
    int number;
    cout<<" Please Enter Your Number : ";
    cin >>number;

    if(number==0)
    {
    cout<<" You Have Entered 0";
    }
    else 
    {
        if(number<0)
        {
            number = number*-1;
        }
     int counter = 0;
     while(number>0)
     {
        number = number/10;
        counter++;
     }
    
     cout<<"You Have Entered "<<counter<<" Digits"<<endl;
    }

    return 0;
}