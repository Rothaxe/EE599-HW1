#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    std::cout << solution.PrintName() << std::endl << solution.PrintMajor() << std::endl << solution.PrintInterest() << std::endl;

    return EXIT_SUCCESS;
}