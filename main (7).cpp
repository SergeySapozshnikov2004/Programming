#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

/**
 * \brief Эта функция проверяет есть ли среди чисел сумма положительная 
 * \param a параметр a
 * \param b параметр b
 * \param c параметр с
 * \return true или  false
 */
double getSum(const double a, const double b, const double c);

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


    const double a0 = getSum(a, b, c);

    if (a0 == true) 
    { 
        cout << "Да" << endl;
       
    }
    else
    {
    cout << "Нет" << endl;
    }
}


double getSum(const double a, const double b, const double c)
{
    if ((a + b > 0) || (a + c > 0) || (b + c > 0)) {
        return true;   
    }
    return false;
}
