/*
CODE BY ARSYBAI
continue pernyataan istirahat satu iterasi (dalam lingkaran), 
jika kondisi tertentu terjadi, dan berlanjut dengan iterasi berikutnya dalam lingkaran.
*/
#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i < 10; i++) {
    if (i == 4) {
      continue;//Melompati angka 4
    }
    cout << i << "\n";
  }   
  return 0;
}