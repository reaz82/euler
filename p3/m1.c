/* Project 3 in Project Euler */

# include <stdio.h>

int main(void) {
	long target;
	int factor;
	int largestFactor;
	int square;
	target=600851475143L;
	long orig_target;
	orig_target = target;
	factor = 2;
	largestFactor = 0;
	while (target > 1) {
          if (!(target % factor)) {
	     /* divisible by factor */		
	     largestFactor = factor; 
             target = target / factor; 
             while (!(target % factor)) {
		target = target / factor;
	     }
	  }
	  factor += 1;		
	};
	
	printf("Largest Factor: %d\n", largestFactor); 

	return 0;
}
