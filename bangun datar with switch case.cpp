//Bangun datar

#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
    int bangunDatar;
    int panjang;
    int lebar;
    float hasil;
    float const Pi = 3.16;
    
    cout<<"Masukan 1. untuk menghitung luas persegi \n";
    cout<<"Masukan 2. untuk menghitung luas lingkaran \n";
    cin>>bangunDatar;
    
    switch(bangunDatar)
    {
    case 1:
    cout<<"Masukan panjang dan lebar \n";
    cin>>panjang;
    cin>>lebar;
    hasil=panjang*lebar;
    break;
    
    case 2:
    cout<<"Masukan Jari-jari \n";
    cin>>panjang;
    hasil=Pi * pow (panjang, 2);
    break;
    }
    cout<<"Hasil : "<<hasil;
    return 0;
}