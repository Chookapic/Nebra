#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int	main(int argc, char* argv[])
{
	int nbrmystere = 0, nbrentre = 0;
	const int MIN = 0, MAX = 100;

	srand(time(NULL));
	nbrmystere = (rand () % (MAX - MIN + 1)) + MIN;

	do
	{
		printf("Pick the right number between 1 and 100\n");
		scanf("%d", &nbrentre);


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
			printf("Congrats! You found it.\n\n");
		}
	}
	while (nbrmystere != nbrentre);
	
	return 0;
}
