// Google, Amazon, Microsoft and Samsung Interview Question
// Find max possible sum you can get fron one of its contiguous subarray must contain 1 element
// Kadane's algorithm

#include "maxConsecutiveSum2.h"

int maxContiguousSubarraySumBruteForce(int *arr, int size) {
    int max_sum = std::numeric_limits<int>::min();
    for (int i = 0; i < size; i++) {
        int current_sum = 0;
        for (int j = i; j < size; j++) {
            current_sum += arr[j];
            if (current_sum > max_sum) max_sum = current_sum;
        }
    }
    return max_sum;
}

int maxContiguousSubarraySumKadane(int *arr, int size) {
    std::vector<int> result;
    int max_sum = arr[0];
    int current_sum = max_sum;
    for (int i = 0; i < size; i++) {
        current_sum = std::max(arr[i] + current_sum, arr[i]);
        max_sum = std::max(current_sum, max_sum);
    }
    return max_sum;
}
