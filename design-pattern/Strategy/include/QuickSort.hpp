#ifndef QUICKSORT_HPP
#define QUICKSORT_HPP

#include <iostream>
#include "ISort.hpp"

struct QuickSort final : ISort {
    void Sort(std::vector<int>& v) override {
        std::size_t collectionSize_t = v.size();
        int collectionSize = collectionSize_t;

        Sort(v, collectionSize, 0, 0);
    }

    void Sort(std::vector<int>& v, int size, int low, int high) {
        if (high == 0) { // Initialize "high" at the end of the array if it is 0 (default value).
            high = size - 1;
        }

        if (low < high) // Checks if the part of the array to be sorted is valid.
        {
            int p = Partition(v, low, high); // Partition the vector around a pivot and retrieve the sorted pivot index.

            // Sort recursively
            Sort(v, p, low, p-1);
            Sort(v, high + 1, p + 1, high);
        }
        
    }

    int Partition(std::vector<int>& v, int low, int high) {
        int pivotIndex = high;
        int l = low;

        for (int i = low; i < high; ++i) {
            if (v[i] <= v[pivotIndex]) { // If the element is less than or equal to the pivot, place it in the left part.
                std::swap(v[i], v[l]);
                ++l;
            }
        }
        std::swap(v[l], v[pivotIndex]); // Places the pivot in its correct position in the sorted array.

        return l; // Returns the pivot index.
    }
};

#endif // QUICKSORT_HPP