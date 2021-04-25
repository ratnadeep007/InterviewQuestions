// Facebook Interview Question
// You have a sorted array of integer, write a function that returns a sorted array containing the squares of those int.

#include "sortedSquaredArray.h"

// Time complexity: O(nlogn) cause std::sort()
std::vector<int> sortedSquaredArrayNaiveSolution(std::vector<int> arr) {
    std::vector<int> result;
    for (auto item: arr) {
        result.push_back(item * item);
    }
    std::sort(result.begin(), result.end());

    return result;
}

std::vector<int> sortedSquaredArrayOptimized(std::vector<int> arr) {
    std::vector<int> result(arr.size());
    int left = 0;
    int right = arr.size() - 1;
    for (int i = arr.size() - 1; i >= 0; i--) {
        if (std::abs(arr[left]) > arr[right]) {
            result[i] = arr[left] * arr[left];
            left++;
        } else {
            result[i] = arr[right] * arr[right];
            right--;
        }
    }

    return result;
}
