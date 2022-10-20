#define _USE_MATH_DEFINES // for C++
#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;
 
int main()
{   
    for(float i =0.; i < 1.0; i +=0.1)
    {
         std::cout << "y = " << sqrt(1 - i) - cos(sqrt( 1 - i)) << std::endl;
    }
     
    return 0;
}