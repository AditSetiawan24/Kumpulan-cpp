#include <iostream>
using namespace std;

#define MAXQUEUE 5
struct queue {
int items[MAXQUEUE];
int head;
int tail;
int count;
};

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

void inisialisasi(struct queue &antrian){
antrian.head = antrian.tail =-1;
antrian.count = 0;
}


void enqueue(struct queue &antrian, int data){
if(isEmpty(antrian)) {
antrian.tail = antrian.head = 0;
antrian.items[antrian.tail] = data;
antrian.count++;
} else if(!isFull(antrian)){
antrian.tail = (antrian.tail+1)%MAXQUEUE;
antrian.items[antrian.tail] = data;
antrian.count++;
} else {
    cout << "Queue Penuh" << endl;
}
}

void dequeue(struct queue &antrian){
if(isEmpty(antrian)){
cout << "Queue Kosong" << endl;
} else {
cout << "Data Queue : "<< antrian.items[antrian.head] << endl;
antrian.head = (antrian.head+1) % MAXQUEUE;
antrian.count--;
if(isEmpty(antrian)){
antrian.tail = antrian.head = -1;
}
}
}

void print(struct queue &antrian){
int head = antrian.head;
for(int i=0; i<antrian.count; i++){
cout << "Data Queue : "<< antrian.items[head] << endl;
head = (head + 1) % MAXQUEUE;
}
}

int main() {
struct queue antrian;
inisialisasi(antrian);
enqueue(antrian, 10);
enqueue(antrian, 20);
enqueue(antrian, 30);
enqueue(antrian, 40);
enqueue(antrian, 50);
enqueue(antrian, 60);
dequeue(antrian);
dequeue(antrian);
dequeue(antrian);
enqueue(antrian, 70);
enqueue(antrian, 80);
enqueue(antrian, 90);
enqueue(antrian, 100);
enqueue(antrian, 110);
dequeue(antrian);
dequeue(antrian);
dequeue(antrian);
dequeue(antrian);
dequeue(antrian);
dequeue(antrian);
dequeue(antrian);

print(antrian);
return 0;
}
