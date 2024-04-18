/*
CODE BY ARSYBAI
Informasi dapat dikirimkan ke fungsi sebagai parameter. Parameter bertindak sebagai variabel di dalam fungsi.
Parameter yang ditentukan setelah nama metode, di dalam kurung. Anda dapat menambahkan sebanyak parameter yang Anda inginkan, hanya pisahkan dengan koma:

Sintaksis (syntax)
void functionName(parameter1, parameter2, parameter3) {
  // code to be executed
}
*/
#include <iostream>
#include <string>
using namespace std;
//Satu parameter
void myFunction(string name) {
  cout << name << " Cool\n";
}
//beberapa parameter berbeda
void myFunction2(string name, int age) {
  cout << name << " Cool : " << age << "Years old\n";
}
//Fungsi dengan nilai kembali 
int nilaiKembali(int x, int y) {
	return x + y;
}

int main() {
  myFunction("Arsy");
  myFunction("Topix");
  myFunction("Reza");
  cout << "\nFungsi 2 beberapa parameter : \n\n";
  myFunction2("arsy", 18);
  myFunction2("arsy", 22);
  myFunction2("arsy", 18);
  cout << "\nFungsi dengan Nilai Kembali : \n\n";
  cout << nilaiKembali(5, 5);
  return 0;
}

