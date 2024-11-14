#include <iostream>
#include <cmath>
using namespace std;


double adddouble(double a, double b) {
    return a + b;
}
int addint(int a, int b)
{
    return a + b;
}
int addint(int a, int b, int c) {
    return a + b + c;
}



double nemain()
{
    double a, b;
    cout << "Введите значение а: ";
    cin >> a;
    cout << "введите значение b: ";
    cin >> b;
    cout << '\n';
    cout << "результат: " << adddouble(a, b) << endl;
    return 0;
}
int main()
{
    setlocale(0, "ru");
    int a, b;
    cout << "Введите значение а: ";
    cin >> a;
    cout << "введите значение b: ";
    cin >> b;

    cout << "результат: " << addint(a, b) << endl;
    cout << '\n';
    return 0;
}
int mainin()
{
    int a, b, c;
    cout << "Введите значение а: ";
    cin >> a;
    cout << "введите значение b: ";
    cin >> b;
    cout << "введите значение c: ";
    cin >> c;
    cout << '\n';
    cout << "результат: " << addint(a, b, c) << endl;
    return 0;
}



