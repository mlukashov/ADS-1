// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
    for (uint64_t i = 2; i * i <= value; i++) {
        if (value % i == 0) {
            return false;
        }
    }
    return true;
}

uint64_t nPrime(uint64_t n) {
    uint64_t res = 0, num = 0;
    for (uint64_t i = 2; num < n; i++) {
        if (checkPrime(i)) {
            res = i;
            num++;
        }
    }
    return res;
}

uint64_t nextPrime(uint64_t value) {
    uint64_t i = value + 1;
    while (!checkPrime(i))
        i++;
    return i;
}

uint64_t sumPrime(uint64_t hbound) {
    uint64_t sum = 0;
    for (uint64_t i = 2; i < hbound; i++)
        if (checkPrime(i))
            sum = sum + i;
    return sum;
}
