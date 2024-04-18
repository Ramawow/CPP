/*
CODE BY ARSYBAI

C ++ memiliki pernyataan bersyarat berikut:

- Gunakan if untuk menentukan blok kode yang akan dieksekusi, jika kondisi yang ditentukan benar
- Gunakan else untuk menentukan blok kode yang akan dieksekusi, jika kondisi yang sama palsu
- Gunakan else if untuk menentukan kondisi baru untuk menguji, jika kondisi pertama adalah palsu
- Gunakan switch untuk menentukan banyak blok alternatif kode yang akan dieksekusi

sintak (syntax)
if (condition) {
  // kode blok untuk di eksekusi
  // block of code to be executed if the condition is true
}
*/
#include <iostream>
using namespace std;

int main() {
  int arsybai = 10;
  int topix = 5;
  if (Arsybai > Topix) {
    cout << "Arsybai is more Handsome than Topix";
  }else { //Gunakan else pernyataan untuk menentukan blok kode yang akan dieksekusi jika kondisi false.
  	cout << "Topix is more Handsome than Arsybai";
  }

 // else if untuk kondisi baru
  int time = 22;
  if (time < 10) {
  	cout << "Good morning.";
  } else if (time < 20) {
  	cout << "Good day.";
  } else {
  	cout << "Good evening.";
  }
  return 0;
}
