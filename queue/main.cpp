#include <iostream>
using namespace std;

#define MAXQUEUE 5
struct queue {
int items[MAXQUEUE];
int head;
int tail;
int count;
};

void inisialisasi(struct queue &antrian){
antrian.head = antrian.tail =-1;
antrian.count = 0;
}

int isEmpty(struct queue &antrian){
if (antrian.count == 0) {
return 1;
} else {
return 0;
}
}

int isFull(struct queue &antrian){
if (antrian.count == MAXQUEUE) {
return 1;
} else {
return 0;
}
}

void enqueue(struct queue &antrian, int data){
if(isEmpty(antrian)){
antrian.tail = antrian.head = 0;
antrian.items[antrian.tail] = data;
antrian.count++;
} else if(!isFull(antrian)){
antrian.tail++;
antrian.items[antrian.tail] = data;
antrian.count++;
} else {
    cout << "Queue Penuh" << endl;
}
}

void dequeue(struct queue &antrian){
antrian.tail = antrian.head = -1;
if(isEmpty(antrian)) {
cout << "Queue Kosong" << endl;
} else {
for (int i=antrian.head; i<antrian.tail; i++){
antrian.items[i] = antrian.items[i+1];
}
antrian.tail--;
antrian.count--;
if(isEmpty(antrian)){
        antrian.tail = antrian.head = -1;
}
}
}

void print(struct queue &antrian){
for(int i=antrian.head; i<=antrian.tail; i++){
cout << "Data Queue : "<< antrian.items[i] << endl;
}
}

int main() {
struct queue antrian;
inisialisasi(antrian);
cout<<"Fungsi inisialisasi \n";
cout << antrian.tail <<endl;
cout << antrian.head <<endl;
cout << antrian.count <<endl;
cout<<"Fungsi is empty \n";
cout<<isEmpty(antrian)<<endl;
cout<<"Fungsi is full \n";
cout<<isFull(antrian)<<endl;
cout<<"Fungsi enqueue \n";
enqueue(antrian, 10);
enqueue(antrian, 20);
enqueue(antrian, 30);
enqueue(antrian, 40);
enqueue(antrian, 50);
cout << antrian.tail <<endl;
cout << antrian.head <<endl;
cout << antrian.count <<endl;
cout<<"Fungsi print \n";
print(antrian);
cout<<"Fungsi dequeue \n";
dequeue(antrian);
dequeue(antrian);
dequeue(antrian);
dequeue(antrian);
dequeue(antrian);
dequeue(antrian);

return 0;
}
