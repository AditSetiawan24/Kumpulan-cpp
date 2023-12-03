//array nasabah

#include <iostream>

using namespace std;

struct Nasabah {
    string nama;
    string nik;
    int gaji;
    bool is_pns;
};

int main () {
Nasabah arr_nasabah[10]; 
arr_nasabah[0].nama="Adit"; arr_nasabah[0].nik="92736382"; arr_nasabah[0].gaji=4000;
arr_nasabah[0].is_pns=true;
cout<<"nama: "<<arr_nasabah[0].nama<<endl;
cout<<"nik : "<<arr_nasabah[0].nik<<endl; cout<<"gaji: "<<arr_nasabah[0].gaji<<endl; cout<<"pns : "<<arr_nasabah[0].is_pns<<endl;
      
     return 0; 
     }