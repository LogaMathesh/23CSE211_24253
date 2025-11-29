#include <stdio.h>
void fibonacci(int n) {
    int a = 0, b = 1, c;
    printf("%d ", a);
    printf("%d ", b);
    for (int i = 3; i <= n; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
}
int main() {
    int n;
    printf("Enter natural number : ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    fibonacci(n);
    return 0;
}
/*
Time Complexity: O(n) because each loop iteration does constant work for input
Space Complexity: O(1) because no recursion stack...only constant variables and on increasing input size the compelxity
the sapce comp will not increase..it would stay constant.
*/

