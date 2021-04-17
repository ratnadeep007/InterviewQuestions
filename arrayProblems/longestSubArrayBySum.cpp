// Facebook Interview Question
// Question: Find longest subarray by sum

#include "longestSubArrayBySum.h"

// Time complexity: O(n^2)
int *longestSubArrayBySumBruteForce(int *arr, int len_arr, int sum) {
    int max_length = 0;
    int boundaries[2];
    for (int i = 0; i < len_arr; i++) {
        int total = arr[i];
        for (int j = i+1; j < len_arr; j++) {
            total = total + arr[j];
            if ((total == sum) && ((j - i) > max_length)) {
                boundaries[0] = i + 1;
                boundaries[1] = j + 1;
                max_length = j - i;
            }
        }
    }
    return boundaries;
}

std::vector<int> longestSubArrayBySumSlidingWindow(int *arr, int len_arr, int sum) {
    std::vector<int> boundaries = {-1};

    int total = 0;
    int left = 0;
    int right = 0;

    while (right < len_arr) {
        total += arr[right];
        while (left < right && total > sum) {
            total -= arr[left++];
        }
        if (sum == total && (boundaries.size() == 1 || boundaries[1] - boundaries[0] < right - left)) {
            boundaries = {left + 1, right + 1};
        }
        right++;
    }
    return boundaries;
}

