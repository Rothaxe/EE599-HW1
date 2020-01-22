#include "solution.h"


double Solution::FindMedian(std::vector<int> &inputs){
  if(inputs.size() == 0){
    return INT32_MIN;
  }
  int mid = inputs.size() / 2;
  if(inputs.size() % 2 == 0){
    return (inputs[mid - 1] + inputs[mid]) / 2.0;
  }
  return inputs[mid];
}
