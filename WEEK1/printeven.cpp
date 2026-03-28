class Solution {
public:
    void printEvenNumbers(int n) {
        // Implement the loop logic to print even numbers from 1 to n
     for (int i = 2; i <= n; i += 2) {
            std::cout << i;
            if (i != n && i + 2 <= n) std::cout << " ";
        }
    }
};

    
