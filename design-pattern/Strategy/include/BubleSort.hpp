#ifndef BUBULESORT_HPP
#define BUBULESORT_HPP

#include <iostream>
#include "ISort.hpp"

struct BubleSort final : ISort {
    void Sort(std::vector<int>& v) override {
        std::size_t collectionSize = v.size();

        for (int i = collectionSize; i > 0; --i) { // Reduces the sort size to avoid sorting the same numbers twice.
            for (int j = 0; j < i - 1; ++j) {
                if (v[j] > v[j+1]) { // For each number, compare to the one after it.
                    std::swap(v[j], v[j+1]); // Exchanged them if our number is greater than the one being compared.
                }
            }
        }
    }
};

#endif // BUBULESORT_HPP