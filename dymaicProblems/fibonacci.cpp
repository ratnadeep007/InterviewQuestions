

#include "fibonacci.h"

int fibBruteForce(int num) {
    if (num <= 2) return 1;
    return fibBruteForce(num - 1) + fibBruteForce(num - 2);
}

std::unordered_map<int, int> mem;

int fibHashmap(int num) {
    if (num <= 2) return 1;
    int val_n1, val_n2 = 0;

    if (mem.find(num - 1) != mem.end()) val_n1 = mem.at(num - 1);
    else {
        val_n1 = fibHashmap(num - 1);
        mem.insert(std::make_pair(num - 1, val_n1));
    }

    if (mem.find(num - 2) != mem.end()) val_n2 = mem.at(num - 2);
    else {
        val_n2 = fibHashmap(num - 2);
        mem.insert(std::make_pair(num - 2, val_n2));
    }

    return val_n1 + val_n2;
}

