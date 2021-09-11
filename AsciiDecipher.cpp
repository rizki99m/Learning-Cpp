#include<iostream>

using namespace std;

int main()

{
    char thingstodecipher;
    int  resultofdecipher;

    cout<<"Enter number/character to decipher to ASCII = ";
    cin>>thingstodecipher;
    resultofdecipher = int(thingstodecipher);
    cout<<"Here's your ASCII Code : "<<resultofdecipher<<endl;

    return 0;
}