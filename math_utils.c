#include <stdio.h>

int main() {
    int factorial(int n) {
    if (n == 0) return 1;        // base case, ALWAYS needed
    return n * factorial(n - 1); } // recursive call
	return 0;
}
