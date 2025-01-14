#include <iostream>
#include <vector>
#include <memory>
#include <algorithm>
#include <random>

#include "ISort.hpp"

#include "BubleSort.hpp"
#include "InsertionSort.hpp"
#include "QuickSort.hpp"

constexpr int MIN_VECTOR_SIZE = 0;
constexpr int MAX_VECTOR_SIZE = 255;

void GenericSorting(std::vector<int>& v) {
    std::unique_ptr<ISort> sortingAlgoritm = std::make_unique<QuickSort>();

    if (std::size_t collectionSize = v.size(); collectionSize < 16) {
        sortingAlgoritm = std::make_unique<BubleSort>();
    } 
    else if (collectionSize < 64) {
        sortingAlgoritm = std::make_unique<InsertionSort>();
    }

    sortingAlgoritm->Sort(v);
}

void DisplayVector(const std::vector<int>& v) {
    std::cout << "[";
    for (const int& i : v) {
        std::cout << i << " ";
    }
    std::cout << "]" << std::endl;
}

void FillRandomlyVector(int numberOfRandomNumbers, std::vector<int>& v) {
    std::mt19937 gen(std::random_device{}());
    std::uniform_int_distribution dis(MIN_VECTOR_SIZE, MAX_VECTOR_SIZE);

    v.reserve(numberOfRandomNumbers);
    for (int i = 0; i < numberOfRandomNumbers; i++) {
        v.emplace_back(dis(gen));
    }
}

int main() {

    std::vector<int> v1;
    std::vector<int> v2;
    std::vector<int> v3;

    FillRandomlyVector(6, v1);
    FillRandomlyVector(17, v2);
    FillRandomlyVector(65, v3);

    // DisplayVector(v1);
    // GenericSorting(v1);
    // DisplayVector(v1);

    // DisplayVector(v2);
    // GenericSorting(v2);
    // DisplayVector(v2);

    DisplayVector(v3);
    GenericSorting(v3);
    DisplayVector(v3);

    return 0;
}