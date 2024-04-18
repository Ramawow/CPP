/*
CODE BY ARSYBAI
while Loop, loop melalui blok kode selama kondisi yang ditentukan true

Sintaks (syntax)
while (condition) {
  // code block to be executed
}
*/
#include <iostream>
using namespace std;

int main() {
  int i = 0;
  while (i < 5) { //ganti dengan variabel untuk unlimited loops
    cout << i << "\n";
    i++;
  }
  //do/while Loops
  int i = 0;
  do {
    cout << i << "\n";
    i++;
  }
  while (i < 5);

  //for loops
  for (int i = 0; i < 5; i++) {
  	cout << i << "\n";}
  	
  return 0;
}
