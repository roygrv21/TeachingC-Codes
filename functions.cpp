#include <iostream>

// Following function that takes two parameters 'x' and 'y'
// as input. It returns 1 if x >y or else it returns 0.  
int max(int x, int y)
{
    if (x > y)
        return 1;
    else
        return 0;
}

// main function that doesn't receive any parameter and
// returns integer
int main() {

    int firstResult = max(55,10);
    int secondResult = max(15,25);
    
    std::cout << "First result is " << firstResult << "\n";
    std::cout << "Second result is " << secondResult << "\n";
    return 0;
}