#include <iostream>
using namespace std;

class Phones
{
    // Access specifier
    public:
  
    // Data Members
    string phoneName;
  
    // Member Functions()
    void makeEmergencyCall()
    {
       cout << "Calling emergency contact from  " << phoneName;
    }
};
  
int main() {
  
    // Declare an object of class geeks
    Phones obj1;
  
    // accessing data member
    obj1.phoneName = "pixel";
  
    // accessing member function
    obj1.makeEmergencyCall();
    return 0;
}