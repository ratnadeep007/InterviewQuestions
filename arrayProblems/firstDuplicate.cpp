// Google Interview Question
// Find duplicate in array which contains values which cannot be larger than length of the array
// Example 1: let us assume a array [1, 2, 1, 2, 3, 3]
// so first duplicate for above array will be 1 at index 2
// Example 2: let us assume other array [2, 1, 3, 5, 3, 2]
// so first duplicate for above array will be 3 at index 4

#include "firstDuplicate.h"

// Time complexity: O(n^2)
int firstDuplicateBruteForce(int *arr, int size) {
    int min_index_for_duplicate = size + 1;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j] ) {
                min_index_for_duplicate = std::min(j, min_index_for_duplicate);
            }
        }
    }
    if (min_index_for_duplicate > -1) return arr[min_index_for_duplicate];
    return -1;
}

// Time complexity: O(n) but space requirement
int firstDuplicateUsingSet(int *arr, int size) {
    std::unordered_set<int> seen;
    for (int i = 0; i < size; i++) {
        if (seen.find(arr[i]) != seen.end()) {
            return arr[i];
        } else {
            seen.insert(arr[i]);
        }
    }
    return -1;
}

int firstDuplicate(int *arr, int size) {
    for (int i = 0; i < size; i++) {
// Don't remove this, easy to understand
//        int val = std::abs(arr[i]);
//        int index_to_work_with = val - 1;
//        if (arr[index_to_work_with] < 0) return val;
//        arr[index_to_work_with] *= -1;
        if (arr[std::abs(arr[i]) - 1] < 0) return std::abs(arr[i]);
        else arr[std::abs(arr[i]) - 1] = -arr[std::abs(arr[i]) - 1];
    }
    return -1;
}
