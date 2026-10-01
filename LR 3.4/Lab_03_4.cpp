// Lab_03_4.cpp
// Кіц Роман Романович
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 12

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x; // вхідний аргумент
    double y; // вхідний параметр
    double R; // вхідний параметр - радіус кіл

    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

    // розгалуження в повній формі
    // A: точка в квадраті II чверті поза колом із центром (-R, R)
    // B: точка в квадраті IV чверті поза колом із центром (R, -R)
    if ((x >= -R && x <= 0 && y >= 0 && y <= R &&
        pow((x + R), 2) + pow((y - R), 2) >= R * R) ||
        (x >= 0 && x <= R && y <= 0 && y >= -R &&
        pow((x - R), 2) + pow((y + R), 2) >= R * R))
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    cin.get();
    cin.get();
    return 0;
}
