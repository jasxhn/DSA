// all the possible arrangments of a number or array;
// if number is 3 then permutations will be 3!(factorial)

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> nums = {1, 2, 3};

    // Sort the vector to start with the smallest lexicographical permutation
    std::sort(nums.begin(), nums.end());

    std::cout << "Permutations of {1, 2, 3}:\n";
    do {
        for (int num : nums) {
            std::cout << num << " ";
        }
        std::cout << "\n";
    } while (std::next_permutation(nums.begin(), nums.end()));

    return 0;
}
