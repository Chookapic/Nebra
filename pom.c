#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int	main(int argc, char* argv[])
{
	int nbrmystere = 0, nbrentre = 0, compteur = 0, replay = 1;
	const int MIN = 0, MAX = 100;

	srand(time(NULL));
	nbrmystere = (rand () % (MAX - MIN + 1)) + MIN;


	while (replay ==1)
	{
	do
	{
		printf("Pick the right number between 1 and 100\n");
		scanf("%d", &nbrentre);
		compteur++;

		//if ( (!(nbrentre <= 100)) && (!(nbrentre >= 1))) 
		if ( nbrentre < 1 || nbrentre > 100)
		{
			printf("You are out of scope!!!\n");
		}
		else if ( nbrmystere > nbrentre )
		{
			printf("The right number is bigger.\n");
		}
		else if ( nbrmystere < nbrentre )
		{
			printf("The right number is smaller.\n");
		}
		else
		{
			printf("***Congrats! You found it.***\n\n");
			printf("** It took you %d shot(s).**\n\n", compteur);
			compteur = 0;
		}
	}
	while (nbrmystere != nbrentre);

	srand(time(NULL));
	nbrmystere = (rand () % (MAX - MIN + 1)) + MIN;
	
	printf("Would you like to replay ?\n");
	printf("Select\n");
	printf("-0- No.\n");
	printf("-1- Yes\n");
	scanf("%d", &replay);
	
	}


	return 0;
}

