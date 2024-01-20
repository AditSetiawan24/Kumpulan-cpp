#include <iostream>
using namespace std;

int main() {
    int *xyz;
    int abc[5] = {10,20,30,40,50};
    xyz = abc;

    for (int i=0; i<5; i++) {
        cout << "*xyz - "<< i <<" : " << *xyz << " " << "xyz - " << i << " : " << xyz << endl;
        xyz++;
    }

    return 0;
}

