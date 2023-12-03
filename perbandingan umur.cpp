#include <iostream>
#include <string>
using namespace std;

int main () {
    string nama1, nama2, nama3;
    int umur1, umur2, umur3;
    
    cout<<"Masukan nama : ";
    cin>>nama1;
    cout<<"Masukan umur : ";
    cin>>umur1;
    cout<<"Masukan nama : ";
    cin>>nama2;
    cout<<"Masukan umur : ";
    cin>>umur2;
    cout<<"Masukan nama : ";
    cin>>nama3;
    cout<<"Masukan umur : ";
    cin>>umur3;
    
    if (umur1 > umur2 & umur3){
        cout<<nama1<<" lebih tua dari "<<nama2<<" dan "<<nama3;
    } else if (umur2 > umur1 & umur3){
        cout<<nama2<<" lebih tua dari "<<nama1<<" dan "<<nama3;
    }else if (umur3 > umur1 & umur2){
        cout<<nama3<<" lebih tua dari "<<nama1<<" dan "<<nama2;
    }else {
        cout<<"Perhitungan tidak valid, mohon teliti kembali \n";
    }
    return 0;
}