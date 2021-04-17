#ifndef INTERVIEW_LONGESTSUBARRAYBYSUM_H
#define INTERVIEW_LONGESTSUBARRAYBYSUM_H

#include <vector>

int* longestSubArrayBySumBruteForce(int *arr, int len_arr, int sum);
std::vector<int> longestSubArrayBySumSlidingWindow(int *arr, int len_arr, int sum);

#endif //INTERVIEW_LONGESTSUBARRAYBYSUM_H
