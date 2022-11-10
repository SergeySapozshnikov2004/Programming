#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

/**
 * \brief Эта функция проверяет явлиется ли a + b положительной 
 * \param a параметр a
 * \param b параметр b
 * \return значение суммы
 */
double getSum1(const double a, const double b);

/**
 * \brief Эта функция проверяет явлиется ли a + c положительной 
 * \param a параметр a
 * \param c параметр c
 * \return значение суммы
 */
double getSum2(const double a, const double c);

/**
 * \brief Эта функция проверяет явлиется ли b + c положительной 
 * \param b параметр b
 * \param c параметр c
 * \return значение суммы
 */
double getSum3(const double b, const double c);

/**
 * \brief Точка входа в программу
 * \return 0  в случае успеха
 */
int main()
{
    cout << "Введите a" << endl;
    double a;
    cin >> a;
    cout << "Введите b" << endl;
    double b;
    cin >> b;
    cout << "Введите c" << endl;
    double c;
    cin >> c;

    
    const double a1 = getSum1(a, b);
    const double a2 = getSum2(a, c);
    const double a3 = getSum3(b, c);
   
    
    
    if ((a + b) > 0) { 
        cout << "Сумма положительна: a + b = "  << a1 << endl;
    }
    
    if ((a + c) > 0) { 
        cout << "Сумма положительна: a + c = " << a2 << endl;
    }
    
    if ((b + c) > 0) { 
        cout << "Сумма положительна: b + c = " << a3 << endl;
    }
    
    if (((a + b) < 0) && ((a + c) < 0) && ((b + c) < 0)) { 
        cout << "Из  чисел a, b, c не вышла ни одна  положительная сумма " << endl;
    }
    
}


double getSum1(const double a, const double b)
{
    return a + b;
}

double getSum2(const double a, const double c)
{
    return a + c;
}

double getSum3(const double b, const double c)
{
    return b + c;
}
