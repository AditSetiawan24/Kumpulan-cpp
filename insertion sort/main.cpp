#include <iostream>

using namespace std;

void printArray(int data[], int n) {
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
}

void tukar(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void insertionsort(int data[], int n) {
    int temp;
    int j;

    for (int i = 1; i < n; i++) {
        temp = data[i];
        j = i - 1;

        while (j >= 0 && data[j] > temp) {
            cout << "i : " << i << ", j : " << j << ", temp : " << temp << " ";

            for (int k = 0; k < n; k++) {
                if (k == j + 1) {
                    cout << "[" << data[k] << "] ";
                } else {
                    cout << data[k] << " ";
                }
            }
            cout << endl;

            data[j + 1] = data[j];
            j--;
        }

        data[j + 1] = temp;
    }
}

int main() {
    int n = 6;
    int arr[n] = {77, 42, 35, 12, 101, 5};
    insertionsort(arr, n);

    printArray(arr, n);

    return 0;
}
