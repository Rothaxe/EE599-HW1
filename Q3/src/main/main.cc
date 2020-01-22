#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    std::vector<int> inputs1 = {1, 2, 3, 4, 5};
    std::cout << "inputs: {1, 2, 3, 4, 5}, output: " << solution.FindMedian(inputs1)<< std::endl;

    std::vector<int> inputs2 = {2, 2, 3, 14, 17, 99};
    std::cout << "inputs: {2, 2, 3, 14, 17, 99}, output: " << solution.FindMedian(inputs2)<< std::endl;

    std::vector<int> inputs3 = {};
    std::cout << "inputs: {}, output: " << solution.FindMedian(inputs3)<< std::endl;
    
    return 0;
}