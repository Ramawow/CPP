/* 
CODE BY ARSYBAI
Bolean terdiri dari 2
yaitu Ya dan Tidak/Benar Salah.
true = 1
false = 0
*/
#include <iostream>
using namespace std;

int main() {
  bool isCodingFun = true;
  bool isFishTasty = false;
  cout << isCodingFun << "\n"; //Output 1
  cout << isFishTasty << "\n\n"; //Output 0

  /*
  Ekspresi boolean
  Sebuah ekspresi Boolean adalah C ++ ekspresi yang mengembalikan nilai boolean: 1(true) atau 0(false).
  dapat menggunakan operator perbandingan, seperti lebih besar dari ( >operator) untuk mengetahui apakah ekspresi (atau variabel) adalah benar:
  Misal :
  */
  int x = 7;
  int y = 4;
  cout << "7 lebih besar dari 4 : " << (x > y);//maka output 1 (true atau benar)
  //bisa juga seperti dibawah ini :
  cout << "\n7 lebih besar dari 4 : " << (7 > 4);//maka output 1 (true atau benar)
  // sama dengan ( == ) operator
  int angka = 9;
  cout << "\napakah 9 sama dengan angka? : " << (9 == angka);//output 1 (true atau benar)


  return 0;
}
