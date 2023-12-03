#include <iostream>
using namespace std;

int main () {
    cout<<"pola pertama \n";
    //segitiga siku siku normal
    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++ ){
            cout<<j;
        }
        cout<<endl;
    }
    cout<<"pola kedua \n";
    //segitiga siku siku terbalik
    for(int i=1; i<=5; i++){
        for(int j=5; j>=i; j--){
            cout<<j;
        }
        cout<<endl;
    }
          cout<<"pola ketiga \n";
    //segitiga siku siku normal tapi dari kanan
    for(int i=1; i<=5; i++){
        for(int j=5; j>=i; j--){
            cout<<" ";
        }
        for(int k=1; k<=i; k++){
            cout<<k;
        }
        cout<<endl;
    }
   cout<<"pola keempat \n";
    //segitiga siku siku kebalik tapi dari kanan
    for(int i=5; i>=1; i--){
        for(int j=5-i; j>0; j--){
            cout<<" ";
        }
        for(int k=1; k<=i; k++){
            cout<<k;
        }
        cout<<endl;
    }
    cout<<"pola kelima \n";
    //segitiga sama sisi
      for(int i=1; i<=5; i++){
        for(int j=5; j>=i; j--){
            cout<<" ";
        }
        for(int k=1; k<=i; k++){
            cout<<k;
        }
        for(int l=1; l<i; l++){
            cout<<l;
        }
        cout<<endl;
    }
     cout<<"pola enam \n";
    //segitiga sama sisi terbalik
      for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            cout<<" ";
        }
        for(int k=5; k>=i; k--){
            cout<<k;
        }
        for(int l=5; l>i; l--){
            cout<<l;
        }
        cout<<endl;
    }
}