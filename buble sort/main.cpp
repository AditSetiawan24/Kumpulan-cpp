#include <iostream>

using namespace std;

void tukar(int *a, int *b){

int temp = *a;

*a = *b;

*b = temp;

}

void printArray(int data[], int n){

cout << "Data : [ ";

for(int i=0; i<n; i++){

cout << data[i] << " ";

}

cout << "]" <<endl;

}



void bubblesort(int data[], int n){

for(int i=1; i<n; i++){

for(int j=0; j<(n-i); j++){

cout << "i : "<< i << ", j : "<< j;

printArray(data, n);

if(data[j] > data[j+1]){

tukar(&data[j], &data[j+1]);

}

}

}

}



int main() {

int n = 6;

int arr[n] = {77, 42, 35, 12, 101, 5};

bubblesort(arr, n);

printArray(arr, n);

return 0;

}
