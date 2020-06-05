#include<stdio.h>
main()
{
//1. display the menu
printf("pick an item : \n1. pizza\n2. burger\n3. sandwich\n4. cake");
//2. read their choice
int choice=0;
scanf("%d",&choice);
//3. display based on their choice

switch(choice)
{
	case 1:
		printf("you picked pizza.");
		break;
	case 2:
		printf("you picked burger.");
		break;
    case 3:
    	printf("you picked sandwich.");
    	break;
    case 4:
    	printf("you picked cake.");
    	break;
    	default : printf("invalid choice");
    }
}
