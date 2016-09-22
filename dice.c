#include <stdio.h>
#include <stdlib.h>

/**********************
Global variables and functions
**********************/
char choice();
int diceroll();
void bline();
void one();
void two();
void three();
void four();
void five();
void six();

/**********************
Main
**********************/
int main()
{
	// Print program intro text
	bline(2);
	printf("   _______\n  /\\ o o o\\\n /o \\ o o o\\_______\n<    >------>   o /|\n \\ o/  o   /_____/o|\n  \\/______/     |oo|\n        |   o   |o/\n        |_______|/\n   Image: R. Shawn Butler\n");
	bline(1);
	printf("Let's roll the dice!\n");

	// Play until user selects 'n'
	char play = 'y';
	while (play == 'y') {
		int number;
		number = diceroll();
		bline(2);
		if (number == 1) one();
		if (number == 2) two();
		if (number == 3) three();
		if (number == 4) four();
		if (number == 5) five();
		if (number == 6) six();
		bline(2);
		printf("You got a %d!\n",number);
		bline(3);
		play = choice();	
	}

	// End program
	printf("Thanks for playing!\n");
	bline(1);
	return 0;
}

/**********************
Function Definitions
**********************/

/*
Ask the user for a 'y' or 'n'
return the selection
*/
char choice() {	
	char answer;
	while (answer != 'y' && answer != 'n') {
		if (answer == '\n') answer = getchar();
		else {
			printf("Roll again? 'y' / 'n'\n");
			answer = getchar();
		}
	}
	bline(50);
	return answer;	
}

/*
Return a random number between 1 and 6
*/
int diceroll() {
	int roll;
	roll = (rand() % 6) + 1;
	return roll;
}

/*
Print n blank lines
*/
void bline(int n) {
	for (;n>0;n--) {
		printf("\n");
	}
}

/*
Set of functions to print dice
*/
void one() {
	printf("  _____\n");
	printf(" |     |\n");
	printf(" |  *  |\n");
	printf(" |     |\n");
	printf("  -----\n");
}
void two() {
	printf("  _____\n");
	printf(" | *   |\n");
	printf(" |     |\n");
	printf(" |   * |\n");
	printf("  -----\n");
}
void three() {
	printf("  _____\n");
	printf(" | *   |\n");
	printf(" |  *  |\n");
	printf(" |   * |\n");
	printf("  -----\n");
}
void four() {
	printf( "  _____\n");
	printf( " | * * |\n");
	printf( " |     |\n");
	printf( " | * * |\n");
	printf( "  -----\n");
}
void five() {
	printf( "  _____\n");
	printf( " |*  * |\n");
	printf( " | *   |\n");
	printf( " |*  * |\n");
	printf( "  -----\n");
}
void six() {
	printf("  _____\n");
	printf(" |*   *|\n");
	printf(" |*   *|\n");
	printf(" |*   *|\n");
	printf("  -----\n");
}