/*
CODE BY ARSYBAI
C ++ membagi operator ke dalam kelompok berikut:

operator aritmatika
operator penugasan
operator perbandingan
operator logika
operator bitwise
*/
#include <iostream>
using namespace std;

int main() {
  int sum1 = 100 + 50;        // 150 (100 + 50)
  int sum2 = sum1 + 250;      // 400 (150 + 250)
  int sum3 = sum2 + sum2;     // 800 (400 + 400)
  cout << sum1 << "\n";
  cout << sum2 << "\n";
  cout << sum3;
  
  // Penugasan atau assigment
  //int x = 10;
  //cout << x;

  //The addition assignment
  //int x = 10;
  //x += 10;
  //cout << x;


  return 0;
}

/*
operator perbandingan digunakan untuk membandingkan dua nilai:

==	Equal to	x == y
!=	Not equal	x != y
>	Greater than	x > y
<	Less than	x < y
>=	Greater than or equal to	x >= y
<=	Less than or equal to	x <= y


operator logika digunakan untuk menentukan logika antara variabel atau nilai-nilai:

&&  Logical and Returns true if both statements are true	x < 5 &&  x < 10
|| 	Logical or	Returns true if one of the statements is true	x < 5 || x < 4
!	Logical not	Reverse the result, returns false if the result is true	!(x < 5 && x < 10)
*/