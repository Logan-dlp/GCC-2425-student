#ifndef INSERTIONSORT_HPP
#define INSERTIONSORT_HPP

#include <iostream>
#include "ISort.hpp"

struct InsertionSort final : ISort {
    void Sort(std::vector<int>& v) override {
        std::size_t collectionSize_t = v.size();
        int collectionSize = collectionSize_t;

        for (int i = 0; i < collectionSize; ++i) {
            int iValue = v[i]; // Stores the current value of the vector for insertion into its correct position.
            int j = i - 1; // Initializes the previous index to compare already sorted values.
            while (j >= 0 && v[j] > iValue) { // Moves elements larger than "iValue" to the right to make room.
                v[j + 1] = v[j]; // Shifts the current element one position to the right.
                j -= 1; // Decrement the index to continue the comparison.
            }
            v[j + 1] = iValue; // Places the current value "iValue" in its correct position.
        }
    }
};

#endif // INSERTIONSORT_HPP