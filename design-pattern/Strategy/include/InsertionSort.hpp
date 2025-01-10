#ifndef INSERTIONSORT_HPP
#define INSERTIONSORT_HPP

#include <iostream>
#include "ISort.hpp"

struct InsertionSort final : ISort {
    void Sort(const std::vector<int>& v) override {
        std::cout << "InsertionSort::Sort()\n";
    }
};

#endif // INSERTIONSORT_HPP