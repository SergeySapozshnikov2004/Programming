#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

/**
 * \brief Это функция находит ВС
 * \param ab параметр ab
 * \param ac параметр ac
 * \param a параметр a
 * \return значение ВС
 */
double getBC(const double ab, const double ac, const double a);

/**
 * \brief Это функция находит площадь
 * \param ab параметр ab
 * \param ac параметр ac
 * \param a параметр a
 * \return значение площади
 */
double getS(const double ab, const double ac, const double a);

/**
 * \brief Это функция выполняет вычисление радиуса
 * \param ab параметр ab
 * \param ac параметр ac
 * \param a параметр a
 * \return значение радиуса
 */
double getR(const double ab, const double ac, const double a);

/**
 * \brief Точка входа в программу
 * \return 0  в случае успеха
 */
int main()
{
    cout << std::setprecision(9) << "Введите AB " << endl;
    double ab;
    cin >> ab;
    cout << std::setprecision(9) << "Введите AC " << endl;
    double ac;
    cin >> ac;
    cout << std::setprecision(9) << "Введите угол α " << endl;
    double a;
    cin >> a;
    const double bc = getBC(ab, ac, a);
    const double s = getS(ab, ac, a);
    const double r = getR(ab, ac, a);


    cout << setprecision(9) << " BC = " << bc << " S = " << s  << " R = " << r << endl;
    return 0;
}



double getBC(const double ab, const double ac, const double a)
{
    return sqrt(ab * ab + ac * ac - 2 * ab * ac * cos(a));
}

double getS(const double ab, const double ac, const double a)
{
    return (ab * ac * sin(a)) / 2.0;
}

double getR(const double ab, const double ac, const double a)
{
    return sqrt(pow(ab, 2) + pow(ac, 2) - 2 * ab * ac * cos(a)) / sin(a) ;
}
