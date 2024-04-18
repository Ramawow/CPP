/*
CODE BY ARSYBAI
Gunakan switchpernyataan untuk memilih salah satu dari banyak blok kode yang akan dieksekusi.

Sintaks ( syntax )
switch(expression) {
  case x:
    // code block
    break;
  case y:
    // code block
    break;
  default:
    // code block
}

Cara Kerja SWITCH :
- switch ekspresi dievaluasi sekali.
- Nilai dari ekspresi dibandingkan dengan nilai-nilai masing-masing case.
- Jika ada pertandingan, blok terkait kode dijalankan.
- The breakdan defaultkata kunci adalah opsional, dan akan dijelaskan kemudian dalam bab ini
*/
#include <iostream>
using namespace std;

int main() {
  int kode = 2;
  switch (kode) {
    case 1:
      cout << "Ini ke satu";
      break;
    case 2:
      cout << "Ini ke 2";
      break;
    default: //default kata kunci menentukan beberapa kode untuk dijalankan jika tidak ada pertandingan kasus
      cout << "Ini default";
  }
  return 0;
}
