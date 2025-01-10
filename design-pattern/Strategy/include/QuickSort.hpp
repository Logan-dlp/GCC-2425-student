#ifndef QUICKSORT_HPP
#define QUICKSORT_HPP

#include <iostream>
#include "ISort.hpp"

struct QuickSort final : ISort {
    void Sort(std::vector<int>& v) override {
        std::cout << "QuickSort::Sort()\n";
    }
};

#endif // QUICKSORT_HPP