# C++ std::vector<bool> Out-of-Bounds Access Bug
This repository demonstrates a potential issue with accessing elements of a `std::vector<bool>` outside its valid range in C++.  While similar to standard vectors, `std::vector<bool>`'s optimized memory handling means typical out-of-bounds checks may not be triggered, leading to undefined behavior. 

## Bug Description
Accessing elements in a `std::vector<bool>` using the `[]` operator is prone to undefined behavior when the index is outside the vector's bounds. Unlike `std::vector` for other types, this specialized container optimizes memory usage but can bypass typical safety checks. 

## Reproduction Steps
1. Compile and run `bug.cpp`.  Observe the potentially unpredictable output.
2. Compare the behavior to `bugSolution.cpp` which demonstrates how to mitigate this. 

## Solution
The best practice is to explicitly check the bounds before accessing vector elements. Using `at()` instead of `[]` provides this bound-checking, thereby preventing undefined behavior.