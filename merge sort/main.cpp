#include <iostream>
using namespace std;

void merge(int a[], int n, int low, int high, int mid){

int i, j, k, c[n];

i = low;

k = low;

j = mid +1;

while(i <= mid && j <= high){

if(a[i] < a[j]){

c[k] = a[i];

k++;

i++;

} else {

c[k] = a[j];

k++;

j++;

}

}

while (i <= mid) {

c[k] = a[i];

k++;

i++;

}

while (j <= high) {

c[k] = a[j];

k++;

j++;

}

for(i=low; i<k; i++){

a[i] = c[i];

}

}



void mergesort(int a[],int n, int low, int high){

int mid;

if (low < high) {

mid = (low+high)/2;

mergesort(a, n, low, mid);

mergesort(a, n, mid+1, high);

merge(a, n, low, high, mid);

}

}



void printArray(int data[], int n){

cout << "Data : [ ";

for(int i = 0; i < n; i++){

cout << data[i] << " ";

}

cout << "]" << endl;

}

int main() {
    int n = 6;
    int arr[n] = {32, 75, 69, 58, 21, 40};

    mergesort(arr, n, 0, n - 1);

    printArray(arr, n);

    return 0;
}
