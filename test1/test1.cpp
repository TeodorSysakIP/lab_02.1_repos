#include <iostream>
#include <cmath>
#include <iomanip>
#include <windows.h> 

int main() {
  
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    double alpha, beta;

    std::cout << "Введіть кут alpha (у градусах): ";
    std::cin >> alpha;
    std::cout << "Введіть кут beta (у градусах): ";
    std::cin >> beta;

    const double M_PI = 3.14159265358979323846;

  
    double a = alpha * M_PI / 180.0;
    double b = beta * M_PI / 180.0;

   
    double num1 = std::sin(a - 2 * b) - std::cos(a - 2 * b);
    double den1 = std::cos(a - 2 * b) + std::sin(a - 2 * b);


    if (std::abs(den1) < 1e-9) {
        std::cout << "Помилка: знаменник першого виразу дорівнює нулю!" << std::endl;
    }
    else {
        double z1 = num1 / den1;
        std::cout << std::fixed << std::setprecision(4);
        std::cout << "z1 = " << z1 << std::endl;
    }
    // перша зміна для Git 
    

    double den2 = std::cos(2 * b);



    if (std::abs(den2) < 1e-9) {
        std::cout << "Помилка: знаменник другого виразу дорівнює нулю!" << std::endl;
    }
    else {
        double z2 = (1.0 - std::sin(2 * b)) / den2;
        std::cout << std::fixed << std::setprecision(4);
        std::cout << "z2 = " << z2 << std::endl;
    }

    return 0;
}