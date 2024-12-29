#include <iostream>
#include <vector>

int main() {
  std::vector<bool> vec(5); // Initialize a vector of bools
  int i = 10; // Index outside the vector's bounds

  // Incorrect approach: No bounds checking
  // if (vec[i]) { ... }

  // Correct approach using at():
  try {
    if (vec.at(i)) { // Throws exception if out-of-bounds
      std::cout << "Element at index " << i << " is true" << std::endl;
    } else {
      std::cout << "Element at index " << i << " is false" << std::endl;
    }
  } catch (const std::out_of_range& oor) {
    std::cerr << "Out of range error: " << oor.what() << std::endl;
  }

  // Alternatively, using explicit bounds checking:
  if (i >= 0 && i < vec.size()) {
      if (vec[i]) {
          std::cout << "Element at index " << i << " is true" << std::endl;
      } else {
          std::cout << "Element at index " << i << " is false" << std::endl;
      }
  } else {
    std::cerr << "Index out of bounds" << std::endl;
  }

  return 0;
}
