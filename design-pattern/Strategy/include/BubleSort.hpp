#ifndef BUBULESORT_HPP
#define BUBULESORT_HPP

#include <iostream>
#include "ISort.hpp"

struct BubleSort final : ISort {
    void Sort(const std::vector<int>& v) override {
        std::cout << "Bubleshort::Sort()\n";
    }
};

#endif // BUBULESORT_HPP