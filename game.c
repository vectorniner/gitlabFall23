//contributors
//gpoppe room 55
//ctalebi 46
//ogarcia 15
//declare prototype
void userChoice_door15();

#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	int choice = 0;
	char name[30] = "bob";

	srand(time(NULL));
	
	printf("Please enter your name: ");
	scanf("%s",name);

	printf("Hello %s welcome to the RPG Game!\n",name);

	while(choice != 99)
	{
		puts("You find yourself in a dark room and you are not sure how you got here.");
        	puts("As you look around you see the room has 55 doors, each labeled with a number.");
        	puts("The room starts filling with water and you must choose a door to open or you will likely drown. you may quit anytime by selecting option 99.");
        	puts("What door do you choose?");
        	scanf("%d",&choice);

		switch(choice)
		{
			case 1:
			{
				puts("room1");
				break;
			}
			case 2:
			{
				puts("room2");
				break;
			}
			case 3:
			{
				puts("room3");
				break;
			}
			case 4:
			{
				puts("room4");
				break;
			}
			case 5:
			{
				puts("room5");
				break;
			}
			case 6:
			{
				puts("room6");
				break;
			}
			case 7:
			{
				puts("room7");
				break;
			}
			case 8:
			{
				puts("room8");
				break;
			}
			case 9:
			{
				puts("room9");
				break;
			}
			case 10:
			{
				puts("room10");
				break;
			}
			case 11:
			{
				puts("room11");
				break;
			}
			case 12:
			{
				puts("room12");
				break;
			}
			case 13:
			{
				puts("room13");
				break;
			}
			case 14:
			{
				puts("room14");
				break;
			}
			case 15:
			{
				//Author: Omar Garcia
				//Date: 11/30/23
				//Purpose: For Final Project!
				puts("room 15");

				printf("This room is filled with other doors!\n");
				printf("As you enter the room you gain arcane power.\n");
				printf("You gain power you've never felt before.\n");
				printf("You are now ready to face what comes next!\n");
				printf("Choose a door 1-5 or 9 to return!\n");
				
				userChoice_door15();
				break;

							
			}
			case 16:
			{
				puts("room16");
				break;
			}
			case 17:
			{
				puts("room17");
				break;
			}
			case 18:
			{
				puts("room18");
				break;
			}
			case 19:
			{
				puts("room19");
				break;
			}
			case 20:
			{
				puts("room20");
				break;
			}
			case 21:
			{
				puts("room21");
				break;
			}
			case 22:
			{
				puts("room22");
				break;
			}
			case 23:
			{
				puts("room23");
				break;
			}
			case 24:
			{
				puts("room24");
				break;
			}
			case 25:
			{
				puts("room25");
				break;
			}
			case 26:
			{
				puts("room26");
				break;
			}
			case 27:
			{
				puts("room27");
				break;
			}
			case 28:
			{
				puts("room28");
				break;
			}

			case 29:
			{
				puts("room29");
				break;
			}
			case 30:
			{
				puts("room30");
				break;
			}
			case 31:
			{
				puts("room31");
				break;
			}
			case 32:
			{
				puts("room32");
				break;
			}

			case 33:
			{
				puts("room33");
				break;
			}
			case 34:
			{
				puts("room35");
				break;
			}

			case 36:
			{
				puts("room36");
				break;
			}

			case 37:
			{
				puts("room37");
				break;
			}

			case 38:
			{
				puts("room38");
				break;
			}
			case 39:
			{
				puts("room39");
				break;
			}
			case 40:
			{
				puts("room40");
				break;
			}
			case 41:
			{
				puts("room41");
				break;
			}
			case 42:
			{
				puts("room42");
				break;
			}
			case 43:
			{
				puts("room43");
				break;
			}
			case 44:
			{
				puts("room44");
				break;
			}
			case 45:
			{
				puts("room45");
				break;
			}
			case 46: //Ctalebi testing
			{
				puts("room46");
                puts("hello");
				break;
			}
			case 47:
			{
				puts("room47");
				break;
			}
			case 48:
			{
				puts("room48");
				break;
			}
			case 49:
			{
				puts("room49");
				break;
			}
			case 50:
			{
				puts("room50");
				break;
			}
			case 51:
			{
				puts("room51");
				break;
			}
			case 52:
			{
				puts("room52");
				break;
			}
			case 53:
			{
				puts("room53");
				break;
			}
			case 54:
			{
				puts("room54");
				break;
			}
			case 55:
			{
				puts("room55");
				break;
			}
			case 99:
			{
				puts("You have escaped");
				break;
			}
			default:
			{
				puts("invalid choice");
			}
		}
	}
	puts("Game Over");
	return EXIT_SUCCESS;
}
 //Method userChoice_door15()
                                void userChoice_door15(){
                                   int options;
                                   const char* casts[] ={"Fire","Water","Holy","Nature", "Plasma"};

				   //Used to determine the number of elements in an array
                                   int numCasts = sizeof(casts)/sizeof(casts[-1]);

				   //variable to hold index value
                                   int randomIndex;

				   

                                   do{

                                   scanf("%d", &options);

                                   switch(options){
                                        case 1:
                                                printf("This room reveals a tree ent\n");
                                                randomIndex = rand() % numCasts;

						//generate random door number
						int randomDoor1 = (rand() % 5) + 1;

                                                printf("You cast a %s attack defeating the foe!\n", casts[randomIndex]);
                                                printf("You find yourself back in room 15\n");
                                                printf("Try your luck with a random door try door #%d\nOr exit press 9\n", randomDoor1);
						break;
                                        case 2:
                                                printf("This room reveals an undead ghoul!\n");
                                                randomIndex = rand() % numCasts;

						//generate random door 
						int randomDoor2 = (rand() % 5) + 1;
                                                printf("You cast a %s attack defeating the foe!\n", casts[randomIndex]);
						printf("You find yourself back in room 15\n");
                                                printf("Try your luck with a random door try door #%d\nOr exit press 9\n", randomDoor2);
                                                break;
                                        case 3:
                                                printf("This room reveals a unholy priest!\n");
                                                randomIndex = rand() % numCasts;

						//generate random door
						int randomDoor3 = (rand() % 5) + 1;
                                                printf("You cast a %s attack defeating the foe!\n", casts[randomIndex]);
						printf("You find yourself back in room 15\n");
                                                printf("Try your luck with a random door try door #%d\nOr exit press 9\n", randomDoor3);
						break;
                                        case 4:
                                                printf("This room reveals a grey alien!\n");
                                                randomIndex = rand() % numCasts;

						//random door
						int randomDoor4 = (rand() % 5) + 1;
                                                printf("You cast a %s attack defeating the foe!\n", casts[randomIndex]);
						printf("You find yourself back in room 15\n");
                                                printf("Try your luck with a random door try door #%d\nOr exit press 9\n", randomDoor4);
						break;
                                        case 5:
                                                printf("This room reveals a fire elemental monster!\n");
                                                randomIndex = rand() % numCasts;

						//random door
						int randomDoor5 = (rand() % 5) + 1;
                                                printf("You cast a %s attack defeating the foe!\n", casts[randomIndex]);
                                                printf("You find yourself back in room 15\n");
						printf("Try your luck with a random door try door #%d\nOr exit press 9\n", randomDoor5);
						break;
                                        case 9:
                                                printf("Exiting back to room 15\n");
                                                break;
                                        default:
                                                printf("Wrong choice try again!\n");

                                   }
                                  }//end do loop
                                   while(options !=9);
				}
















































