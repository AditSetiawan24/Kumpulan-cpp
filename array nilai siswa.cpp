//array siswa

#include <iostream>

using namespace std;

struct siswa
{
    string nama;
    int nilai;
};

int main()
{
    siswa siswaArray[10];

    for (int i = 0; i < 10; i++)
    {
        cout << "Nama Siswa: ";
        cin >> siswaArray[i].nama;
        cout << "nilai: ";
        cin >> siswaArray[i].nilai;
    }

    cout << "Siswa yang gagal: ";
    cout << endl;

    for (int i = 0; i < 10; i++)
    {
        if (siswaArray[i].nilai < 60)
        {
            cout << siswaArray[i].nama << endl;
        }
    }

    return 0;
}