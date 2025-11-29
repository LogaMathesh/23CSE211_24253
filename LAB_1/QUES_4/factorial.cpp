#include<stdio.h>
int factorial(int n){
	if(n==1){
		return 1;
	}
	return factorial(n-1)*n;
}
int main(){
	int n;
	printf("Enter a number :\n");
	scanf("%d",&n);
	printf("Factorial n is : %d \n",factorial(n));
}
/*
1.Space Complexity as O(n) because recursion method will consumes stack memory.
2.Time Complexity: O(n),where n is input.Because where recursively iterating till base n=1 and for each recursive step 
we are multiplying by n.Each recursive call doing O(1) work for n times..so time comp is O(n).
*/
