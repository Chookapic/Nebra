#include<stdio.h>
#include<stdlib.h>

int	main(int argc, char* argv[])
{
	int choixmenu = 0;

	printf("  === Make your choice Barbiloo ===  \n\n");	
	printf(" - 10 - Aiden \n");	
	printf(" - 20 - Aideen\n");	
	printf(" - 30 - Aedin \n");	
	printf(" - 40 - Aeden \n");	
	printf(" - 50 - Aidin \n");	
	scanf ("%d", &choixmenu);

	switch (choixmenu)
	{
		case ( (choixmenu > 5) && (choixmenu < 15)):
		printf("So, you picked Aiden.\n");
		break;
		case 20:
		printf("So, you picked Aideen.\n");
		break;
		case 30:
		printf("So, you picked Aedin.\n");
		break;
		case 40:
		printf("So, you picked Aeden.\n");
		break;
		case 50:
		printf("So, you picked Aidin.\n");
		break;
		default:
		printf("That is not a number. You have to pick the number");
		break;
		
	}
	return 0;
}
