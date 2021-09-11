#include<iostream>

using namespace std;

int main()
{
    int number;
    int reversenumber = 0;
    cout<<"Please Enter Your Number : ";
    cin>>number;

    while (number !=0)
    {
        reversenumber = reversenumber*10; //0
        int lastdigit = number % 10;
        reversenumber = reversenumber + lastdigit;
        number = number/10;
    }
    cout<<"Your Number After Reverse Process is = "<<reversenumber<<endl;
    return 0;
}