#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));
    int randomNum = rand() % 100 + 1;
    
    std::cout << "Random number: " << randomNum << std::endl;
    
    return 0;
}