/*
CODE BY ARSYBAI
Anda telah melihat break pernyataan yang digunakan dalam bab sebelumnya dari tutorial ini. Itu digunakan untuk "melompat keluar" dari switchpernyataan.

The break Pernyataan juga dapat digunakan untuk melompat keluar dari lingkaran
*/
#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i < 10; i++) {
    if (i == 4) {
      break;//Berhenti loop ketika i sama dengan 4
    }
    cout << i << "\n";
  } 
  return 0;
}