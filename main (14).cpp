#define _USE_MATH_DEFINES // for C++
#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

/**
 * \brief Это функция выполняет вычисление по заданной формуле
 * \param a параметр a
 * \param n параметр n
 * \return значение функции
 */
double getN(const double a, const double n);
/**
 * \brief Это функция выполняет вычисление по заданной формуле
 * \param a параметр a
 * \param n параметр n
 * \return 0
 */
double getSecN(const double a, const double n);
/**
 * \brief Это функция выполняет вычисление по заданной формуле
 * \param a параметр a
 * \param n параметр n
 * \return 0
 */
double getThrN(const double a, const double n);


/**
 * \brief считывает ввод
 * \param message побуждающее сообщение для пользователя
 * \return 
 */
double getNum(const std::string& message = "" );
/**
 * \brief Точка входа в программу
 * \return 0  в случае успеха
 */
 
enum class userInput
{    
    N,
    SecN,
    ThrN
};


int main()
{
    
    const double a = getNum("Введите A ");
    const double n = getNum("Введите N ");
    
    
    std::cout << "Введите число соответствующее заданию.\n"
        << static_cast<int>(userInput::N)<< " - вычисление A * N, "
        << static_cast<int>(userInput::SecN)<< " - вычисление A * 2N, "
        << static_cast<int>(userInput::ThrN)<< " - вычисление A * 3N \n";
        
    int input = 0;
    std::cin >> input;
    const auto choice = static_cast<userInput>(input);
    
    switch (choice)
    {
        case userInput::N:
        {
            const auto n1 = getN(a, n);
            std::cout << " A * N = " << n1;
            break;
        }
        
        case userInput::SecN:
        {
            const auto n2 = getSecN(a, n);
            std::cout << " A * 2N = " << n2;
            break;
        }
        
        case userInput::ThrN:
        {
            const auto n3 = getThrN(a, n);
            std::cout << " A * 3N = " << n3;
            break;
        }
        
    }
}

double getN(const double a, const double n)
{
    return a * n;
}

double getSecN(const double a, const double n)
{
    return a * 2 * n;
}

double getThrN(const double a, const double n)
{
    return a * 3 * n ;
}

double getNum(const std::string& message)
{
    std::cout << message;
    double side = 0.0;
    std::cin >> side;
    return side;
}
