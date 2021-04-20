
#include "gridTraveler.h"

int gridTravelerBruteForce(int rows, int cols) {
    if (rows == 1 && cols == 1) return 1;
    if (rows == 0 || cols == 0) return 0;
    return gridTravelerBruteForce(rows -1, cols) + gridTravelerBruteForce(rows, cols - 1);
}

std::unordered_map<std::string, long long> memo;

long long gridTravelerMemo(int rows, int cols) {
    std::string key = std::to_string(rows) + ',' + std::to_string(cols);
    if (memo.find(key) != memo.end()) return memo.at(key);
    if (rows == 1 && cols == 1) return 1;
    if (rows == 0 || cols == 0) return 0;
    memo[key] = gridTravelerMemo(rows - 1, cols) + gridTravelerMemo(rows, cols - 1);
    return memo.at(key);
}
