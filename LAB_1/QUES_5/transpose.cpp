#include <stdio.h>
int main() {
    int a[3][3];
    int i, j;
    printf("Enter elements of 3x3 matrix:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < 3; i++){
        for(j = i + 1; j < 3; j++){
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
    printf("\nTranspose of the matrix :\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/*
Though this code only works 3*3 but it takes constant time and space.
Time Complexity: O(c) because the time execution is depend on size of matrix which is 3*3 constant.  
Space Complexity: O(c) because the code doesnt requires a extra variable(array) to store the result.
It swaps the corressponding elements in the same array..so the space comp. is constant.
*/
