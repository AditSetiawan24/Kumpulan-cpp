//rata-rata nilai

#include <iostream>

using namespace std;

float rataBerat (float berat[], int jmlSiswa);
float rataTinggi (float tinggi[], int jmlSiswa);

int main () 
{
    int jmlSiswa=5;
    float berat[]={55.5,60.2,65.0,48.7,70.3};
    float tinggi[]={165.3,170.2,160.5,155.0,175.1};
    
    cout<<"Rata - rata berat siswa  : "<<rataBerat(berat, jmlSiswa)<<" Kg"<<endl;
    cout<<"Rata - rata tinggi siswa : "<<rataTinggi(tinggi, jmlSiswa)<<" Cm"<<endl;
}

float rataBerat (float berat[], int jmlSiswa) 
{
    float rataan = 0;
    for (int i=0; i<jmlSiswa; i++)
    {
        rataan += berat[i];
    }
    rataan = rataan/jmlSiswa;
    
    return rataan;
}

float rataTinggi (float tinggi[], int jmlSiswa) 
{
    float rataan = 0;
    for (int i=0; i<jmlSiswa; i++)
    {
        rataan += tinggi[i];
    }
    rataan = rataan/jmlSiswa;
    
    return rataan;
}