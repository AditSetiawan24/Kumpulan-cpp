#include <iostream>

using namespace std;

//kalkulator

int main()
{
    float a, b, hasil;
    char aritmatika, pilihan;
   
   do
   {
        cout << "masukan angka pertama: ";
        cin >> a;
        cout << "pilih operasi +,-,*,/: ";
        cin >> aritmatika;
        cout << "masukan angka kedua: ";
        cin >> b;

        if (aritmatika == '+')
        {
            hasil = a + b;
            cout << "hasil "<< a << "+" << b <<"=" << hasil << endl;
        }
        else if (aritmatika == '-')
        {
            hasil = a - b;
           cout << "hasil "<< a << "-" << b <<"=" << hasil << endl;
        }
        else if (aritmatika == '*')
        {
            hasil = a * b;
            cout << "hasil "<< a << "*" << b <<"=" << hasil << endl;
        }
        else if (aritmatika == '/')
        {
            hasil = a / b;
            cout << "hasil "<< a << "/" << b <<"=" << hasil << endl;
        }
        else
        {
            cout << "operasi yang anda masukan salah" << endl;
        }
        cout<<"Ketik y untuk mengulang dan n untuk berhenti"<<endl;
        cin>>pilihan;
   } while(pilihan=='y');
       cout<<"Terima Kasih telah mencoba\n";
    }