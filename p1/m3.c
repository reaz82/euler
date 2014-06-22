/* Problem 1 on Project Euler */

#include <stdio.h>
int sumDivisibleBy(int multiplier, int limit) {
	int sum;
	int a_n;
	sum = 0;
	a_n = 0; 
	a_n = multiplier + (limit - 1) * multiplier; 
	sum = (limit * (multiplier + a_n)) / 2;
	return sum;
}
int main(void) {
	int sum;
	int target;
	sum = 0;
	target = 199999;

	sum = sum + sumDivisibleBy( 5, (target/5) );
	sum = sum + sumDivisibleBy( 3, (target/3) );
	sum = sum - sumDivisibleBy( 15, (target/15) );
	
	printf("Sum = %d\n", sum);
	return 0;
}


