#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "masukkan panjang pola : ";
	cin >> n;

	cout << "pola 3\n";
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j < i; j++)
		{
			cout << " ";
		}
		for (int k = n; k >= i; k--)
		{
			cout << "*";
		}
		cout << endl;
	}

	cout << "pola 4\n";
	for (int i = 1; i <= n; i++)
	{
		for (int j = n; j > i; j--)
		{
			cout << " ";
		}
		for (int k = 1; k <= i; k++)
		{
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}