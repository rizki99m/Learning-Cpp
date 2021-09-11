#include<iostream>

using namespace std;

int main()
{
    float tinggi;
    float berat;
    float hasil;

    cout<<"BMI CALCULATOR"<<endl;
    cout<<"Masukan berat badan (Kg) = "; 
    cin>>berat;
    cout<<"Masukan tinggi badan (m) = "; 
    cin>>tinggi;

    hasil = berat/(tinggi*tinggi);
    
    if (hasil<18.5)
    {
        cout<<"Kekurangan Berat Badan"<<endl;
    }
    else if (hasil>18.5 && hasil < 24.9)
    {
        cout<<"Normal (Ideal)"<<endl;
    }
    else if (hasil > 25 && hasil <29.9)
    {
        cout<<"kelebihan Berat Badan"<<endl;
    }
    else 
    {
        cout<<"Kegemukan"<<endl;
    }

    cout<<"BMI anda adalah = "<<hasil<<endl;

    return 0;
    system("PAUSE");
}