#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    // pointer
    int *aPtr = nullptr;
    aPtr = &a;
    // int a memiliki nilai dan alamat
    cout << "nilai dari a : " << a << endl;
    cout << "alamat dari a : " << aPtr << endl;
    // derefencing, mengambil data dari sebuah pointer
    a = 10;
    cout << "mengambil nilai dari pointer aPtr : " << *aPtr << endl;

    return 0;
}