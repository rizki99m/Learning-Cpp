#include<iostream>
using namespace std;

int main ()
{
    int a = 50;
    int b = 20;

    int temp = a;
    a = b;
    b = temp;

    cout<<"Swap Value ! \n"<<"value of a = "<< a << " " << "value of b = "<< b << endl;

    return 0;
    system ("pause");

}