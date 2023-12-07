//contributors
//Christopher Martinez Room 28
//ctalebi 46

#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
 
//Prototypes
void myRoom_28(void);
void fightSkeleton_R28(void);
void runToSwitch_R28(void);

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
				puts("room15");
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
				myRoom_28();
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

//Function defenitions
void myRoom_28(){
	puts("You have entered a dark room and the door seals behind you.");
	puts("You notice there is a lever on the far side of the room. ");
	puts("The enterance behind you has sealed and visibility is very minimal  ");
	puts("Out of nowhere a giant ancient skeleton starts to reanimate from the ground. ");
	puts("Your choices are to:");
	puts("Choice 1: Try to run outrun skeleton to the lever");
	puts("Choice 2: Fight the Skeleton");
	puts("Choice 3: Try to pry the door open");
	puts("Choice 4: Hide from the skeleton");
	puts("Choice 5: Try to talk to the skeleton");
	puts("");	
	int userChoice;
	scanf("%d" , &userChoice);
	switch (userChoice){
		case 1:
		      runToSwitch_R28();
		      break;		      
		case 2:
		      fightSkeleton_R28();
		      break;
		case 3:
		      printf("You tried to pry open the door. It did not budge. The skeleton attacked while you had you back towards them. He takes all your items and kicks the door open and chucks you into the hallway. He slams the door shut behind you. You were able to escape but are very injured and lost all your items.\n\n");
			break;
		case 4:
			printf("You hid from the skeleton in a dard corner of the room. He was unable to find you and went back to being dormant after 20 minutes. You go and pull the lever and quickly leave the room before the skeleton is able to notice you were ever there. \n\n");
			break;
		case 5:
			printf("The skeleton fully animates infront of you. You try and talk to him but he obvoiusly can't speak english. Now your forced to fight him. \n\n");
			fightSkeleton_R28();
			break;

		default: 
		puts("Choice Invalid. Please enter a choice between 1 - 3");
	}
}

void fightSkeleton_R28(){
	puts("You and the giant skeleton enter a battle.");
	
	int action = 1;
	int hp[] = {9, 25}; // player and enemy health pool
	int rng;

	while ( hp[0] > 0 & hp[1] > 0){
	printf("\n\nYour hp is %d and The skeletons hp is %d. \n",hp[0], hp[1]);
	puts("Choose and action: 1-Heal( 1/3 odds to heal 6hp)   2-Attack(3/4 odds to deal 5 damage to the skeleton)   3-Run(1/5 chance to succeed)");
	scanf("%d", &action);
	while (action < 0 || action > 3){	
	puts("invalid input");
	puts("Choose and action: 1-Heal( 1/3 odds to heal 6hp)   2-Attack(3/4 odds to deal 5 damage to the skeleton)   3-Run(1/5 chance to succeed)");
	scanf("%d", &action);
	}
	
	if (action == 1) {
	puts("Heal chosen");
	rng = rand() % 3;
		if (rng == 0){
		hp[0] = hp[0] + 6;
		printf("Heal successful, your health is now at %d\n", hp[0]);
		}
		else{
		puts("Heal has failed.");

		}


	}

	if (action == 2) {
	rng = rand() % 4;
		if (rng == 0){
		puts("Your attack has failed");
			}

		else{
		hp[1] = hp[1] - 5;
		printf("The attack is successful. Skeleton's hp is now at %d\n", hp[1]);
			
		}
	}

	if (action == 3){
	puts("You chose to run");
	rng = rand() % 5;
	
		if (rng == 0){
		puts("You have ran away unscathed. The door shuts behind you and you kept all your items.\n\n");
		break;
		}
		else{
		puts("You were able to barely make it out of the room. You droppeed all your items in a panic to get the door open.. \n\n");
		break;
		}

		}
	//Skeleton attacks
	
	rng = rand() % 2;
	if (rng == 0){
	puts("The skeleton attacks but you evaded");
	}
	else{
	hp[0] = hp[0] - 3;
	printf("The skeleton attacks you with his hammer. You health is lowered to %d \n",hp[0]);
	}

	}
	if (action !=3 ){
	if (hp[0] > 0) {	
	puts("Congratulations, you have defeated the giant skeleton and where able to search the room for loot.");
	printf("After rummaging through everything you pull the lever and exit back to the dark hallway. :D  \n\n");
	}

	else{
	printf("The skeleton has bested you. Luckily it just ransacked you for all you had and did not finish you off. He throws you back into the dark hallway and shuts the door behind you.  :p  \n\n");
	}
	
	
	}

	
}

void runToSwitch_R28(){
	printf("You chose to outrun the skeleton.\n You make it to the switch before the skeleton is fully formed and are able to pull it.\n You turn around and the door to the hallway reopens but a Giant skeleton Stands in your way.\n\n Your left with the choice to: [1] go under the skeleton  or [2] try to run around him.\n");
	int option;
	scanf("%d", &option);
	while (option > 2 && option < 0){
	printf("Invalid input. Enter [1] to go under the skeleton or [2] to run around.\n");
	scanf("%d", &option);
	}
	if (option == 1){
	printf("You choose to go under the skeleton. He is unable to grab you and falls forwards onto his stomache. You exit back into the hallway unscathed but leave with no loot. :p\n\n");
	}
	else{
	printf("You choose to go around the skeleton. He swings and knocks you to the ground. He then grabs you and takes all items that you have in your inventory. He then lobs you like a baseball into the hallway and the door shuts behind you.  :p \n\n");
	}


}













































