#include <stdio.h>
#include <time.h> 
#include <stdio.h>  
#include <stdlib.h>

int main() {
	srand(time(NULL));

	int myrand = rand()%11;

	if (myrand <= 4) {
		printf("Eat more beef, kick less cats \n");
	}
	else if (myrand >= 5 && myrand <= 9){
		printf("FRODO LIVES \n");
	}
	else if (myrand == 10){
		printf("Larn is the best roguelike \n");
	}
	
	printf("The random number was %d\n", myrand);

	return 0;
}
