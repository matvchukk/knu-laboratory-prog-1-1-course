#include <iostream>

int main()
{
    double zero = 0.0;
    double posinf = 5.0 / zero; // положительная бесконечность 
    std::cout << posinf << "\n";
 
    double neginf = -5.0 / zero; // отрицательная бесконечность 
    std::cout << neginf << "\n";
 
    double nan = zero / zero; // не число (математически некорректно)
    std::cout << nan << "\n";
 
    return 0;
}
