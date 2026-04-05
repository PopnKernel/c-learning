#include <stdio.h>


    int factorial(int n) {
        if(n==0) return 1;
        return n*factorial(n-1);
}
    int power(int base, int exp){
        int a=1;
        for (int i=0; i!=exp; i++) {
            a= a * base; }
    return a;
}
    int is_prime(int n) {
        for (int a=2;a<n;a++) {
        if (n%a == 0) return 0; }
        return 1;
}
    int fibonacci(int n) {
        if(n==0) return 0;
        if(n==1) return 1;
        return fibonacci(n-1) + fibonacci(n-2);
}
    int main(){
    printf("factorial(5) = %d\n", factorial(5));
    printf("power(3,2) = %d\n", power(3,2));
    printf("is_prime(9) = %d\n", is_prime(87));
    printf("fibonacci(14) = %d\n", fibonacci(14));
    return 0;
}
