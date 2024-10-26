#include <iostream>
int main() {
    setlocale(LC_ALL, "RU");
    float a, b, c;
    cout >> a >> b >> c;
    if (a == b && b == c)
    {

        cout << "Этот треугольник равнобедренный ";
    }
    else if (a == b || b == c || c == a) {
        cout << "Этот треугольник  равносторонний";
    }
    else if ((a + b < c)) or (a + c < a)) {
        cout << "Этого треугольника не существует";
         }
    else if (pow(a, 2) == pow(b, 2) + pow(c, 2) || pow(b, 2) == pow(c, 2) || pow(b, 2) == pow(a, 2) + pow(c, 2)) {
        cout << "Треугольник прямоугольный ";
        exit;
    }
    else {
        cout << "Треугольный равносторонний";
    }
    return 0;
}
