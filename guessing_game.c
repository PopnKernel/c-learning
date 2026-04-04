#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));
	int secret = (rand() % 100) + 1;
	int attempts = 0;

	printf("Guess the number from 1-100:\n");
	int guess;
	do {
	scanf("%d", &guess);
	if (guess < secret) {printf("higher!!");}
	else if (guess > secret) {printf("lower!!");}
	else {printf("you got it!!"); }
	attempts++;
	} while (guess!=secret);
	printf("Nice job you got it in %d attempts.\n", attempts); 
	return 0;
}
