#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Item {
    int value, weight;
};

// Function to maximize value in fractional knapsack
double fractionalKnapsack(int W, vector<Item>& items) {
    // Sort items by value/weight ratio in decreasing order
    sort(items.begin(), items.end(), [](Item a, Item b) {
        return (double)a.value / a.weight > (double)b.value / b.weight;
    });

    double totalValue = 0.0;
    for (auto& item : items) {
        if (W >= item.weight) {
            W -= item.weight;
            totalValue += item.value;
        } else {
            totalValue += item.value * ((double)W / item.weight);
            break;
        }
    }
    return totalValue;
}

int main() {
    int W = 50;  // Maximum weight capacity
    vector<Item> items = {{60, 10}, {100, 20}, {120, 30}};

    cout << "Maximum value in Knapsack: " << fractionalKnapsack(W, items) << endl;
    return 0;
}

// ===== Maximum Number of Coins Program in C++ =====

/*#include using namespace std;

int maxCoins(int n) { // Base cases for 0, 1, or 2 coins if(n == 0) return 0; if(n == 1) return 1; if(n == 2) return 2;

// Recurrence: take max of splitting coins into three piles
// maxCoins(n-1) + 1 simulates taking one coin and repeating
// maxCoins(n/2) + maxCoins(n - n/2) simulates splitting optimally
return max(n, maxCoins(n/2) + maxCoins(n/3) + maxCoins(n/4));

}

int main() { int n; cout << "Enter number of coins: "; cin >> n;

cout << "Maximum coins you can get: " << maxCoins(n) << endl;
return 0;

}

// Notes for Maximum Coins Program: // This program uses recursion to calculate the maximum coins obtainable // The maxCoins function checks the best way to split coins into 1/2, 1/3, 1/4 fractions // It returns the maximum between keeping the coin as-is and splitting it recursively // This is similar to the "Bytelandian coins" problem from competitive programming
*/