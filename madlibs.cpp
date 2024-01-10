#include <iostream>


int main() {
    // Variables
    std::string firstName;
    int age;
    std::string food;
    std::string hobby;

    // Inputs    
    std::ios_base::sync_with_stdio(false);
    int x;
    

    std::cout << "Enter a first name: \n";
    std::cin >> firstName;
    std::cout << "Enter a double digit number: \n";
    std::cin >> age;
    std::cout << "Enter a food: \n";
    std::cin >> food;
    std::cout << "Enter a hobby: \n";
    std::cin >> hobby;
    std::cout << "------------------------------ \n";
    std::cout << "Hello my name is: " + firstName + "\n";
    std::cout << "My age is: " + std::to_string(age) + "\n";
    std::cout << "My favourite food is: " + food + "\n";
    std::cout << "My hobby is: " + hobby + "\n";

    
    std::cout << "Thanks for viewing my program!\n";
    std::cin >> x;
    return 0;
}