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
double getA1(const double a, const double n);
double getA2(const double a, const double n);
double getA3(const double a, const double n);
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
    cout << std::setprecision(9) << "Введите A" << endl;
    double a;
    cin >> a;
    cout << std::setprecision(9) << "Введите N" << endl;
    double n;
    cin >> n;
     cout << std::setprecision(9) << "Введите число - во сколько раз увеличить N (в 1, 2, 3 раза)" << endl;
    double x;
    cin >> x;
    
    const double a1 = getA1(a, n);
    const double a2 = getA2(a, n);
    const double a3 = getA3(a, n);
    
    
    if (x == 1) { // Если введенное число меньше 10.
        cout << setprecision(9) << "A * N раз = " << a1 << endl;
    }
    
    if (x == 2) { // Если введенное число меньше 10.
        cout << setprecision(9) << "A * 2N раз = " << a2 << endl;
    }

    if (x == 3) {
        cout << setprecision(9) << "A * 3N раз = " << a3 << endl;
    }
    return 0;
    
    
    
   
    




}



double getA1(const double a, const double n)
{
    return a * n;
}

double getA2(const double a,const double n)
{
    return a * 2 * n;
}

double getA3(const double a, const double n)
{
    return a * 3 * n;
    
    
    
    
    
  
}