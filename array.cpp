/*
CODE BY ARSYBAI
Array digunakan untuk menyimpan beberapa nilai dalam satu variabel, bukan menyatakan variabel terpisah untuk setiap nilai.

Untuk mendeklarasikan array, menentukan jenis variabel, menentukan nama dari array diikuti dengan tanda kurung dan menentukan jumlah elemen itu harus menyimpan
EX : string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};

Untuk membuat sebuah array dari tiga bilangan bulat, bisa ditulis :
EX : int myNum[3] = {10, 20, 30};
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
  string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"}; //perhitungan dari 0 bukan 1
  cout << "Mobil no 1 : " << cars[0];//Output Volvo

  //Mengubah mobil tertentu. Misal :
  cars[0] = "Ferrari";
  cout << "\nmobil no 1 stelah diganti : " << cars[0]

  //LOOP melalui array
  for(int i = 0; i < 4; i++) {
    cout << "\n\nLoop Array :" <<cars[i] << "\n";
  }//Mengeluarkan semua mobil di dalam array
  return 0;
}
/*
array[5] dll adalah ukuran (size pada array)
tidak perlu ada.
*/