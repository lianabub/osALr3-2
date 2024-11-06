#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	double a, b, c;
	cout << "введите сторону а";
	cin >> a;
	cout << "введите сторону b";
	cin >> b;
	cout << "введите сторону c";
	cin >> c;
	if (a + b > c || a + c > b || c + b > a)
	{
		if (a == b && a != c || a == c && a != b || b == c && a != c)
		{
			cout << "треугольник равнобедренный";
		}
		else if (pow(a, 2) + pow(b, 2) == pow(c, 2) || pow(b, 2) + pow(c, 2) == 
			pow(a, 2)|| pow(c, 2) + pow(a, 2) == pow(b, 2))
		{
			cout << "треугольник прямоугольный";
		}
		else if (a == b == c) {
			cout << "треугольник равносторонний";
		}
		else {
			cout << "треугольник разносторонний";
		}
	}
	else
	{
		cout << "такого треугольника нет";
	}
}

