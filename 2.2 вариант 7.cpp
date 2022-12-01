#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

/**
 * \brief Это функция выполняет вычисление при a > 1.5
 * \param a параметр a
 * \param x параметр x
 * \return значение функции
 */
double getLager(const double a, const double x);


/**
 * \brief Это функция выполняет вычисление при a <= 1.5
 * \param a параметр a
 * \param x параметр x
 * \return 0  значение функции
 */
double getSmaller(const double a, const double x);

/**
 * \brief Точка входа в программу
 * \return 0  в случае успеха
 */
int main()
{
    double a = 1.5;
    cout << "Введите X" << endl;
    double x;
    cin >> x;

    
    const double a1 = getLager(a, x);
    const double a2 = getSmaller(a, x);
   
    
    
    if ((a * x) < 1) { 
        cout << "Y = " << a1 << endl;
    }
    
    else { 
        cout << "Y = " << a2 << endl;
    }
    
}


double getLager(const double a, const double x)
{
    return a * x - log10(a * x);
}

double getSmaller(const double a, const double x)
{
    return a * x + log10(a * x);
}
