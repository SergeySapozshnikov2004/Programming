#define _USE_MATH_DEFINES // for C++
#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

/**
 * \brief Это функция выполняет вычисление по заданной формуле
 * \param x параметр х
 * \param y параметр y
 * \return значение функции
 */
double getR(const double l, const double s, const double p);
/**
 * \brief Это функция выполняет вычисление по заданной формуле
 * \param x параметр х
 * \param y параметр y
 * \param z параметр z
 * \return 0  значение функции
 */

/**
 * \brief Точка входа в программу
 * \return 0  в случае успеха
 */
int main()
{
    const double p = 0.028;
    cout << std::setprecision(9) << "Введите длинну провода (в метрах)" << endl;
    double l;
    cin >> l;
    cout << std::setprecision(9) << "Введите площадь поперечного сечения провода (в мм²)" << endl;
    double s;
    cin >> s;
    const double r = getR(l, s, p);


    cout << setprecision(9) << " R = " << r << endl;
    return 0;
}



double getR(const double l, const double s, const double p)
{
    return (p * l) / s;
}


