#include <iostream>
#include <vector>


namespace randomNum 
{
    std::vector<int> memory;
}

using namespace randomNum;
 
int main() 
{
    memory.push_back(5);
    memory.push_back(7);
    memory.push_back(12);

    std::cout 
        << memory[0] << memory[1] << memory[2] << std::endl;

    return 0;
}

