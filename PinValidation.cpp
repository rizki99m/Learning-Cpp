#include<iostream>

using namespace std;

int main()
{
    int userpin = 1234;
    int enterpin;
    int errorcounter = 0;

    do {
        cout<<"Please Enter Your Pin : ";
        cin>>enterpin;
        errorcounter++;
    }
    while (enterpin != userpin && errorcounter <3);
    
    if(errorcounter<4 && enterpin == userpin)
    {
        cout<<"Loading"<<endl;
    }
    else 
    {
        cout<<"Your Account has been suspended"<<endl;
    }
       
    return 0;
}