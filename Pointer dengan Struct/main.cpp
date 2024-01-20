#include <iostream>
using namespace std;

struct mahasiswa{
char *name;
int nim;
};

int main() {
struct mahasiswa m1;
struct mahasiswa *p;
m1.name = "Simas";
m1.nim = 202301054;
p = &m1;
cout <<"m1.name : "<< m1.name <<endl;
cout <<"m1.nim : "<< m1.nim <<endl;
}
