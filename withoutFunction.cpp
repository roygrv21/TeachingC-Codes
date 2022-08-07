#include <iostream>

int main() {
    
    int num1 = 55;
    int num2 = 10;
    int firstResult;
   
    if (num1 > num2)
        firstResult = 1;
    else 
        firstResult = 0;
    

    int num3 = 15;
    int num4 = 25;
    int secondResult;
   
    if (num3 > num4)
        secondResult = 1;
    else
        secondResult = 0;
    
    
    std::cout << "First result is " << firstResult << "\n";
    std::cout << "Second result is " << secondResult << "\n";

    return 0;
}