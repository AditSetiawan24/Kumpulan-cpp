#include <iostream>
using namespace std;

int main () {
    cout<<"pola pertama \n";
    //segitiga siku siku normal angka kelipatan
    for(int i=1; i<=10; i++){
        int nilai=i;
        for(int j=1; j<=i; j++ ){
            cout<<nilai;
            nilai += i;
        }
        cout<<endl;
    }
}