#include<stdio.h>
    // Recursive function to print numbers from current to n
    void printNumbers(int current, int n) {
        // Base case: if current exceeds n, stop recursion
        if (current > n)
            return;

        // Print current number
        printf("%d  ",current);

        // Recursive call with next number
        printNumbers(current + 1, n);
    }


int main() {
   
    int n = 10;

  printNumbers(1, n);
  

    return 0;
}
