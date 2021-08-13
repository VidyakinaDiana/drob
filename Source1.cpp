#include <iostream>
#include <iomanip>

using namespace std;
struct Drob {
	int chis;
	int znam;
	Drob set() {
		chis = 1;
		znam = 2 + rand() % 8;
		return *this;
	}
	void show() {
		cout << chis << "/" << znam << "\t";
	}
	Drob operator +(Drob b)
	{
		Drob c;
		c.chis = chis * b.znam + b.chis * znam;
		c.znam = znam * b.znam;
		return c;
	}
	Drob operator -(Drob b)
	{
		Drob c;
		c.chis = chis * b.znam - b.chis * znam;
		c.znam = znam * b.znam;
		return c;
	}
	Drob operator *(Drob b)
	{
		Drob c;
		c.chis = chis * b.chis;
		c.znam = znam * b.znam;
		return c;
	}
	Drob operator /(Drob b)
	{
		Drob c;
		c.chis = chis * b.znam;
		c.znam = znam * b.chis;
		return c;
	}
};
void main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	Drob a[5], b[5];
	cout << " ִנמבü 1 " << " ִנמבü 2 " << endl;
	for (int i = 0; i < 5; i++)
	{
		a[i].set();
		b[i].set();
		a[i].show();
		b[i].show();
		cout << endl;
	}
	cout << endl << '+' << "\t\t" << '-' << "\t\t" << '*' << "\t\t" << '/' << endl;
	for (int i = 0; i < 5; i++) {
		(a[i] + b[i]).show();
		cout << '\t';
		(a[i] - b[i]).show();
		cout << '\t';
		(a[i] * b[i]).show();
		cout << '\t';
		(a[i] / b[i]).show();
		cout << '\t';
		cout << endl;
	}
}