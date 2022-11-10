#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

/**
 * \brief Это функция выполняет вычисление сопротивления
 * \param l параметр l
 * \param s параметр s
 * \param p параметр p
 * \return значение сопротивления
 */
double getR(const double l, const double s, const double p);

/**
 * \brief Точка входа в программу
 * \return 0  в случае успеха
 */
int main()
{
    const double p = 0.028;
    cout << "Введите длинну провода (в метрах)" << endl;
    double l;
    cin >> l;
    cout << "Введите площадь поперечного сечения провода (в мм²)" << endl;
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
