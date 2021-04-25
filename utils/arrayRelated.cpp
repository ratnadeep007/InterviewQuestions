#include "arrayRelated.h"


void printIntVector(std::vector<int> arr) {
    for (auto item: arr) {
        std::cout << item << ", ";
    }
}

void printIntVectorMatrix(std::vector<std::vector<int>> arr) {
    for (auto row: arr) {
        for (auto item: row) {
            std::cout << item << ", ";
        }
        std::cout << "\n";
    }
}
