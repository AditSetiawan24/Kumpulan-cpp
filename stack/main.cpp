#include <iostream>
using namespace std;

#define MAXSTACK 5

struct stack {
    int items[MAXSTACK];
    int top;
};

void inisialisasi(struct stack &tumpukan) {
    tumpukan.top = -1;
}

int isEmpty(struct stack &tumpukan){
if (tumpukan.top == -1) {
return 1;
} else {
return 0;
}
}

int isFull(struct stack &tumpukan){

if (tumpukan.top == (MAXSTACK-1)) {
return 1;
} else {

return 0;

}

}

void push(struct stack &tumpukan, int data) { if(isFull(tumpukan)){

cout << "Stack Penuh" << endl;

} else {

tumpukan.top++;

tumpukan.items[tumpukan.top] = data;

}

}

void pop(struct stack &tumpukan){
if(isEmpty(tumpukan)){
cout << "Stack Kosong" << endl;
} else {
cout << "Data Stack : " << tumpukan.items[tumpukan.top] << endl;
tumpukan.top--;
}
}

void peek(struct stack &tumpukan){
cout << "Data Stack peek : " << tumpukan.items[tumpukan.top] << endl;
}

void clear(struct stack &tumpukan){
tumpukan.top = -1;
}

void print(struct stack &tumpukan){
for (int i=tumpukan.top; i>=0; i--) {
cout << "Data Stack yang di print: " << tumpukan.items[i] << endl;
}
}

int main() {
    struct stack tumpukan;
    inisialisasi(tumpukan);
    cout<<"fungsi inisialisasi \n";
    cout << tumpukan.top << endl;
cout<<"fungsi is empty \n";
cout<<isEmpty(tumpukan) << endl;
cout<<"fungsi is full \n";
cout <<isFull(tumpukan) << endl;
push (tumpukan, 10);

cout << isEmpty(tumpukan) << endl;

cout << isFull(tumpukan) << endl;

push (tumpukan,20);

push (tumpukan,30);

push (tumpukan,40);

push (tumpukan, 50);

push (tumpukan, 60);

print(tumpukan);
peek(tumpukan);
//clear(tumpukan);
cout << isFull(tumpukan) << endl;

pop(tumpukan);
pop(tumpukan);
pop(tumpukan);
pop(tumpukan);
pop(tumpukan);

return 0;
}
