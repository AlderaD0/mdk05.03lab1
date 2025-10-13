#include <iostream>
using namespace std;

int checking(double a)
{
    int cleanA = a;
    double checkA = a - cleanA; 
    if (a <= 0)
    {
        cout << "Введено число меньше 1!" << endl;
        return 0;
    }
    else if (checkA != 0)
    {
        cout << "Введено нецелое число!" << endl;
        return 0;
    }
    return 1;
}


int main()
{
    setlocale(LC_ALL, "");
    double first, second, third;
    cout << "Введите первую сторону" << endl;
    cin >> first;
    if (checking(first) == 0)
        exit(0);
    cout << "Введите вторую сторону" << endl;
    cin >> second;
    if (checking(second) == 0)
        exit(0);
    cout << "Введите третью сторону" << endl;
    cin >> third;
    if (checking(third) == 0)
    {
        exit(0);
    }
    if ((second + third < first) || (first + second < third) || (first + third < second))
    {
        cout << "Данные не соотвествуют правилу построения треугольника!" << endl;
        exit(0);
    }
    else if ((first == second) && (first == third))
    {
        cout << endl << "Треугольник равносторонний";
    }
    else if ((first == second) || (first == third) || (second == third))
    {
        cout << endl << "Треугольник равнобедренный";
    }
    else
    {
        cout << endl << "Треугольник разносторонний";
    }
    return 0;
}
