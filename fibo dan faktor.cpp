#include <iostream>

using namespace std;
//faktorial
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}
//fibonaci
int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}


int main() {
    //faktor
    int num;
    cout << "Masukkan angka untuk menghitung faktorial: ";
    cin >> num;

    cout << "Faktorial dari " << num << " adalah " << factorial(num) << endl;

    //fibo
    int n;
    cout << "Masukkan jumlah elemen dalam deret Fibonacci: ";
    cin >> n;

    cout << "Deret Fibonacci: ";
    for (int i = 0; i < n; ++i) {
        cout << fibonacci(i) << " ";
    }

    return 0;
}