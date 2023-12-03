#include <iostream> 

using namespace std;

float hitung_rata(int nilai[],int jml_index){ 

float rataan = 0;
for(int i=0; i<jml_index; i++) { 
rataan += nilai[i];
}
rataan = rataan/jml_index;
return rataan;
}

int main() {
int jml_siswa = 5;
int nilai_mtk[] = {10, 5, 8, 9, 7};
int nilai_ipa[] = { 8, 10, 6, 10, 10};
int nilai_bindo[] = {8, 9, 8, 10, 7};
cout << "Rata-rata nilai Matematika : " << hitung_rata(nilai_mtk, jml_siswa) << endl; 
cout << "Rata-rata nilai IPA : " << hitung_rata(nilai_ipa, jml_siswa) << endl;
cout << "Rata-rata nilai Bhs Indonesia : " << hitung_rata(nilai_bindo, jml_siswa) << endl; 
return 0;
}

//Rata- rata nilai mapel