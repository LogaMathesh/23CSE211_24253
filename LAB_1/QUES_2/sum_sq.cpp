#include<stdio.h>
int sum_sq_n(int n){
	return n*(n+1)*(2*n+1)/6;
}
int main(){
	int n;
	printf("Enter a number :\n");
	scanf("%d",&n);
	printf("Sum of square of 1st n natural numbers : %d \n",sum_sq_n(n));
}
/*
Insted of interating and adding the number less than n (that would take O(n) time comp.)...we can use direct formula to 
find sum of n natural number:n*(n+1)*(2*(n+1)/6 ..take would take:
1.Space Complexity as O(c)constant space because constant no.of variables.
2.Time Complexity: O(c)constant time because the result is not depend on input size.
*/
