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


void selectionsort(int data[], int n){

int pos;

for(int i=0; i<n-1; i++){

pos = i;

for(int j=(i+1); j<n; j++){

if(data[pos] > data[j]){

pos = j;

}

cout << "i : "<< i << ", j : "<< j << ", pos : "<< pos<<" ";

printArray(data, n);

}

if(pos != i){

tukar(&data[pos], &data[i]);
}

}

}


int main() {

int n = 6;

int arr[n] = {77, 42, 35, 12, 101, 5};

selectionsort(arr, n);

printArray(arr, n);

return 0;

}
