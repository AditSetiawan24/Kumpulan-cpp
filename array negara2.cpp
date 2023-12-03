#include <iostream>
#include <string>

using namespace std;

int main() {
    string countries[] = {"India", "Indonesia", "Iran", "Iraq", "Ireland"};
    int jumlahNegara = 5;

    cout << "Negara-negara yang berawalan huruf 'I':" << endl;
    for (int i = 0; i < jumlahNegara; ++i) {
        if (countries[i][0] == 'I') {
            cout << countries[i] << endl;
        }
    }

    return 0;
}