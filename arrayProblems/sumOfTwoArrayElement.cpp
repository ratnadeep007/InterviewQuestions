// Google Interview Question sumOfTwo
// Question: Given 2 array and a number find pair 1 element of each array that can add upto given number

#include "sumOfTwoArrayElement.h"

// Time Complexity: O(n^2)
bool sumOfTwoBruteForce(int *arr1, int len_arr1, int *arr2, int len_arr2, int sum) {
    for (int i = 0; i < len_arr1; i++) {
        int diff = sum - arr1[i];
        for (int j = 0; j < len_arr2; j++) {
            if (arr2[j] == diff) return true;
        }
    }
    return false;
}

// Time complexity: O(n)
bool sumOfTwoUsingCompliments(int *arr1, int len_arr1, int *arr2, int len_arr2, int sum) {
    std::unordered_set<int> compliments;
    for (int i = 0; i < len_arr1; i++) {
        compliments.insert(sum - arr1[i]);
    }
    for (int i = 0; i < len_arr2; i++) {
        if (compliments.find(arr2[i]) != compliments.end()) return true;
    }
    return false;
}
