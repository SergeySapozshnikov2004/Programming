#include <iostream>
#include <cmath>
#include <limits>
/**
* \brief Существует ли функция в точке x
* \param x Aргумент функции
* \return труе если существует
*/
bool IsExists(const double x);
/**
* \brief Расчет функции в точке х
* \param x Аргумент функции
* \return значение функции в точке х
*/
double Calculation(const double x);
/**
* \brief Точка входа в программу
* \return 0 в случае успеха
*/
int main()
{
    const double xStart = 0;
    const double xFinish = 1;
    const double step = 0.1;
    double x = xStart;
    while(x < xFinish + step/2)
        {
            if (IsExists(x))
            {
                const double y = Calculation(x);
                std::cout << x << " " << y << "\n";
            }
            else
            {
                std::cout << x << " " << "Нет значения \n";
            }
            x += step;
        }
    return 0;
}
bool IsExists(const double x)
{
    return (1 - x) >= std::numeric_limits<double>::min();
}
double Calculation(const double x)
{
    return std::sqrt(1 - x) - std::cos(sqrt(1 - x));
}
