#include <iostream>

#include "arrayProblems/longestSubArrayBySum.h"
#include "dymaicProblems/fibonacci.h"
#include "arrayProblems/maxConsecutiveSum2.h"
#include "dymaicProblems/gridTraveler.h"
#include "arrayProblems/sortedSquaredArray.h"
#include "utils/arrayRelated.h"
#include "matrixProblem/rotateImage.h"
#include "arrayProblems/firstDuplicate.h"

int main() {
// Driver for array relate problems
//    int arr1[13] = {1,2,3,4,5,0,0,0,0,7,8,9,10};
//    int arr1[13] = {3,4,5,6,7,8,9,0,0,0,0,0,0};
//    int sum = 9;
//    std::vector<int> arr = longestSubArrayBySumSlidingWindow(arr1, 13, sum);
//    std::cout << arr[0] << " and " << arr[1] << "\n";

//    int arr[8] = {-2, -3, 4, -1, -2, 1, 5, -3};\
//    int result = maxContiguousSubarraySumKadane(arr, 8);
//    std::cout << result << "\n";

//    std::cout << fibHashmap(6) << "\n";
//    std::cout << fibHashmap(45) << "\n";
//    return 0;

//    std::cout << gridTravelerMemo(18, 18);
//    std::vector<int> input = {-6, -4, 1, 2, 3, 5};
//    std::vector<int> result = sortedSquaredArrayOptimized(input);
//    printIntVector(result);
//    std::vector<std::vector<int>> input{{ 1,  2,  3,  4},
//                                        { 5,  6,  7,  8},
//                                        { 9, 10, 11, 12},
//                                        {13, 14, 15, 16}};
//    std::vector<std::vector<int>> result = rotateImage(input);
//    printIntVectorMatrix(result);

    int arr1[] = {1, 2, 1, 2, 3, 3};
    int arr2[] = {2, 1, 3, 5, 3, 2};

    std::cout << firstDuplicate(arr1, 6) << "\n";
    std::cout << firstDuplicate(arr2, 6) << "\n";
}
