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
double getA1(const double a, const double x);
double getA2(const double a, const double x);

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
    double a = 1.5;
    cout << std::setprecision(9) << "Введите X" << endl;
    double x;
    cin >> x;

    
    const double a1 = getA1(a, x);
    const double a2 = getA2(a, x);
   
    
    
    if ((a * x) < 1) { 
        cout << setprecision(9) << "Y = " << a1 << endl;
    }
    
    else { 
        cout << setprecision(9) << "Y = " << a2 << endl;
    }
    
}


double getA1(const double a, const double x)
{
    return a * x - log10(a * x);
}

double getA2(const double a, const double x)
{
    return a * x + log10(a * x);
}



