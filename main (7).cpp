#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

/**
 * \brief Эта функция проверяет явлиется ли x + y положительной 
 * \param x параметр x
 * \param y параметр y
 * \return true или false
 */
bool Sum(int x, int y);

/**
 * \brief Точка входа в программу
 * \return 0  в случае успеха
 */
int main()
{
    int a, b, c;
    cout << "Введите a" << endl;
    cin >> a;
    cout << "Введите b" << endl;
    cin >> b;
    cout << "Введите c" << endl;
    cin >> c;

    if (Sum(a, b) or Sum(b, c) or Sum(a, c)) 
        std::cout << "Yes" << endl;
    else
    cout << "No" << endl;
}


bool Sum(int x, int y)
{
    return (x + y > 0);
}
