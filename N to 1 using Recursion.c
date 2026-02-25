#include<stdio.h>
 // Recursive function to print numbers from n down to 1
void printNumbers(int current) 
{
        // Base case: if current is less than 1, stop recursion
        if (current < 1)
            return;

        // Print current number
        printf("%d  ",current);

        // Recursive call with next smaller number
        printNumbers(current - 1);
    }


int main() {
   
    int n = 10;

    printNumbers(n);


    return 0;
}
