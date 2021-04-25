// Amazon, Microsoft, Apple Interview Questions
// Rotate a n x n 2D matrix, rotate 90 degree clockwise

#include "rotateImage.h"

// Find transpose swap(arr[i][j], arr[j][i])
// Flip Horizontally swap(arr[i][j], arr[i][N-ij])
std::vector<std::vector<int>> rotateImage(std::vector<std::vector<int>> &arr) {
    int N = arr.size();
    // 1. Finding transpose
    for (int i = 0; i < N; i++) {
        for (int j = i; j < N; j++) {
            std::swap(arr[i][j], arr[j][i]);
        }
    }
    // 2. Flip Hoizontally
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < (N/2); j++) {
            std::swap(arr[i][j], arr[i][N-1-j]);
        }
    }
    return arr;
}
