#include <stdio.h>

int main() {
    
      int i, max ;
      int a[6] = { 1,2,6,5,3,7 } ;
	  
	    max = a[0];
	   for (i = 1; i < 6; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    
    printf("The maximum value of the array is %d\n", max);
    
    return 0;
}

