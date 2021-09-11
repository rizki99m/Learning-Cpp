#include<iostream>
using namespace std;

int main()
{
    float a,b,c;

    cout<<"Triangle Detector, Please put value for each side of triangle !"<<endl;
    cout<<"Side A = " ;
    cin>>a;
    cout<<"Side B = " ;
    cin>>b;
    cout<<"Side C = " ;
    cin>>c;

    if(a==b && b==c)
    {
        cout<<"Equilateral Triangle"<<endl;
    }
    else if (a==b || b==c || a==c)
    {
        cout<<"Isosceles Triangle"<<endl;
    }
    else 
    {
        cout<<"Scalene Tringle"<<endl;
    }
    cout<<"Thank You, Bye";

    return 0;
    system("PAUSE");

}