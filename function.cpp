/*
CODE BY ARSYBAI
Sebuah fungsi adalah blok kode yang hanya berjalan ketika dipanggil.
dapat melewatkan data, yang dikenal sebagai parameter, ke dalam fungsi.
Fungsi yang digunakan untuk melakukan tindakan tertentu, dan mereka penting untuk digunakan kembali 

Sintaks (syntax)
void myFunction() {
  // code to be executed
}

- myFunction() adalah nama dari metode
- void berarti bahwa fungsi tidak memiliki nilai kembali. Anda akan belajar lebih banyak tentang nilai-nilai kembali kemudian dalam bab berikutnya
- dalam fungsi (tubuh), tambahkan kode yang mendefinisikan apa fungsi yang harus dilakukan
*/
#include <iostream>
using namespace std;
/*
Untuk memanggil fungsi, menulis nama fungsi diikuti oleh dua tanda kurung () dan titik koma;
Pada contoh berikut, myFunction() digunakan untuk mencetak teks (tindakan), ketika dipanggil:
*/
void myFunction() {
  cout << "Telah di Eksekusi!\n";
}

int main() {
  myFunction();//Di dalam main, hubungi myFunction()

 // Sebuah fungsi dapat disebut beberapa kali:
  myFunction();
  myFunction();
  myFunction();
  myFunction();


  return 0;
}
