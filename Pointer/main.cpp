#include <iostream>
using namespace std;

int main() {
int *xyz, abc;
abc = 10; xyz =
&abc;
cout << "abc : " << abc << endl;
cout << "*xyz : " << *xyz << endl;
*xyz = 5;
cout << "abc : " << abc << endl;
cout << "*xyz : " << *xyz << endl;
abc = 15;
cout << "abc : " << abc << endl;
}
