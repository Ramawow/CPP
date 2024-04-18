//CODE BY ARSYBAI
#include <iostream>
#include <string>
using namespace std;

int main() {
  string teks = "Hello I'am is Arsybai, and Im handsome!\n\n";
  cout << teks;
  //Lenght Teks
  cout << "The length is: " << teks.length() <<"\n"; //Menghitung Jumlah Huruf pada variabel
  // STRING AKSES (mengambil huruf berdasarkan urutan)
  cout << "urutan ke 11: " << teks[11];
  // UBAH KARAKTER ( mengubah karakter tertentu dalam sebuah string ) atau Replace
  cout << "H ganti J : " << teks[0] = 'J';
  return 0;
}
