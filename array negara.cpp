#include <iostream> 
 #include <string.h> 
  
 using namespace std; 
  
 int main() 
 { 
     char negara[5][2][15]; 
  
     strcpy(negara[0][0], "Jerman"); 
     strcpy(negara[0][1], "Frankfurt"); 
     strcpy(negara[1][0], "Argentina"); 
     strcpy(negara[1][1], "Rosario"); 
     strcpy(negara[2][0], "Indonesia"); 
     strcpy(negara[2][1], "Jakarta"); 
     strcpy(negara[3][0], "India"); 
     strcpy(negara[3][1], "New Delhi"); 
     strcpy(negara[4][0], "Iran"); 
     strcpy(negara[4][1], "Teheran"); 
  
     for (int i = 0; i < 5; i++) 
         if (negara[i][0][0] == 'I') 
             cout << negara[i][0] << "-" 
                  << negara[i][1] << endl; 
  
     return 0; 
 }