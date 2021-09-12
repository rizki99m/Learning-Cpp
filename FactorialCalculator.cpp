#include<iostream>

using namespace std;

int main()
{
    int number;
    cout<<"Please Enter The Number : ";
    cin>>number;
    int factorial =1;

    for (int i = 16; i<=number; i++)
    {
        factorial = factorial * i;
    }
    cout<<"The result is :"<<factorial<<endl;

    return 0;
}