#include <iostream>

#include "arrayProblems/longestSubArrayBySum.h"

int main() {
//    int arr1[13] = {1,2,3,4,5,0,0,0,0,7,8,9,10};
    int arr1[13] = {3,4,5,6,7,8,9,0,0,0,0,0,0};
    int sum = 9;
    std::vector<int> arr = longestSubArrayBySumSlidingWindow(arr1, 13, sum);
    std::cout << arr[0] << " and " << arr[1] << "\n";
    return 0;
}
