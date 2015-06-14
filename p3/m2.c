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
	if (!(target % 2)) {
	   largestFactor = 2; 
           target /= 2; 
 	   while (!(target % factor))
	  	target /= 2; 
	} else {
           largestFactor = 1; 
	}

	factor = 3;
	while ((factor * factor) < orig_target && (target > 1)) {
          if (!(target % factor)) {
	     /* divisible by factor */		
	     largestFactor = factor; 
             target = target / factor; 
             while (!(target % factor)) 
		target /= factor;
	  }
	  factor += 2;		
	};
	
	printf("Largest Factor: %d\n", largestFactor); 

	return 0;
}
