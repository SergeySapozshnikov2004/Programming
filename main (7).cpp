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
double getA1(const double a, const double b);
double getA2(const double a, const double c);
double getA3(const double b, const double c);


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
    cout << std::setprecision(9) << "Введите a" << endl;
    double a;
    cin >> a;
    cout << std::setprecision(9) << "Введите b" << endl;
    double b;
    cin >> b;
    cout << std::setprecision(9) << "Введите c" << endl;
    double c;
    cin >> c;

    
    const double a1 = getA1(a, b);
    const double a2 = getA2(a, c);
    const double a3 = getA2(b, c);
   
    
    
    if ((a + b) > 0) { 
        cout << setprecision(9) << "Сумма положительна: a + b = "  << a1 << endl;
    }
    
    if ((a + c) > 0) { 
        cout << setprecision(9) << "Сумма положительна: a + c = " << a2 << endl;
    }
    
    if ((b + c) > 0) { 
        cout << setprecision(9) << "Сумма положительна: b + c = " << a3 << endl;
    }
    
    else { 
        cout << setprecision(9) << "Из  чисел a, b, c не вышла ни одна  положительная сумма " << endl;
    }
    
}


double getA1(const double a, const double b)
{
    return a + b;
}

double getA2(const double a, const double c)
{
    return a + c;
}

double getA3(const double b, const double c)
{
    return b + c;
}



