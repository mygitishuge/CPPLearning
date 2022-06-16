// Your First C++ Program

#include <iostream>

int main() {
    int resistor;
    //int connections;
    int battery;
    float current;
    //std::cout << "\nThis program is developed to automate physics homework. The prompts will ask for certain \n details, namely the components of the circuit. Please enter the the amount of each \n component and then on subsequent prompts, enter the details of those components.\n\n";
    // std::cout << "Enter the amount of batteries: ";
    // std::cin >> batteries;
    // std::cout << "Amount of batteries: " << batteries << "\n";
    
    // const int COUNT = batteries;
    // int i= 0 ;
    // std::cout << "Value of COUNT: " << COUNT << "\n";

    std::cout << "\nOnly enter a value if it is known, otherwise leave it empty\n";

    std::cout << "\nEnter the voltage of the battery:\n";
    std::cin >> battery;

    std::cout << "\nEnter the resistance of the resistance in ohms:\n";
    std::cin >> resistor;

    //std::cout << "\nEnter the current of the circuit in ampere:\n";
    //std::cin >> current;

    current = (float)battery / resistor;

    std::cout << "\nThe current of the circuit is: " << current;

    // int battery [COUNT] = {};
   
    // while (i< COUNT)
    // {
    //     std::cin >> battery[i];
    // }

    // return 0;
}