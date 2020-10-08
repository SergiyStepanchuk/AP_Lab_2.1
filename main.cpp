// Lab_2.1.cpp
// Степанчук Сергій
// Лабораторна робота № 2.1
// Лінійні програми.
// Варіант 20
#include <iostream>

using namespace std;

int main()
{
	double m, n; // вхідний параметр
	double z1; // результат обчислення 1-го виразу
	double z2; // результат обчислення 2-го виразу 

	cout << "m = ?" << endl; // 
	cin >> m;

	cout << "n = ?" << endl;
	cin >> n;

	z1 = ( (m-1)*sqrt(m) - (n-1)*sqrt(n) )/( sqrt(pow(m, 3) * n) + n*m + pow(m, 2) - m);
	z2 = (sqrt(m) - sqrt(n))/m;

	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl; 

	cin.get();
	return 0;
}