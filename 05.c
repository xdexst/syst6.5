#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	printf("Test v6.5: OK.\n");
	srand(time(0));
	
	int i,a[20];
	
	for(i=0;i<20;i++) {
		a[i]=rand()%20+1;
		if(i==19) {
			printf("%d", a[i]);
		} else {
			printf("%d, ", a[i]);
		}
	}
	
	printf("\nNew position of elements:\n");
	
	for(i=19;i>0;i--) {
		a[i]=a[i-1];
	}
	a[0] = 0;
	
	for(i=0;i<20;i++) {
		if(i==19) {
			printf("%d", a[i]);
		} else {
			printf("%d, ", a[i]);
		}
	}
	
	return 0;
}
