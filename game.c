//contributors
//

#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

void room44(void);//P Santos
void separator(void);//P Santos

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
				// P. Santos
				separator();
				printf("\n");
				printf("You enter a minimalist wooden door marked with the number 44 in a simple but neat style.\n\n");
				printf("You rush in and struggle to close the door as the water pushes against you, but you manage to\n");
				printf(" close the door and with a satisfying click it seems to lock behind you saving you from drowning\n");
			        printf(" but locking you inside.\n\n");

			        printf("[Press ENTER to continue]");
		                getchar();
			        getchar();//needs two to clear previous entries and allow user to press anything to continue
				room44();

				break;
			}
			case 45:
			{
				puts("room45");
				break;
			}
			case 46:
			{
				puts("room46");
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

void room44(){
	// Variables
	int choice = 0;

	printf("\nBefore you are two doors, \n\n");
	printf("On the LEFT is an old disheveled door, with chips and scratches showing its age.\n");
	printf("Behind this door you can smell cigar smoke and alcohol and hear quiet mumblings, the occasional laughter, and the clinking of glass...\n");
	printf(" and what appears to be the spinning of a revolver...\n\n");
	printf("On the RIGHT is a larger door that looks more like a bulkhead from a ship, with a wheel in the center that opens the door.\n");
	printf("Placing the side of your head against this door you feel its cold metal sting your ear, and only hear defeaning silence.\n");
	printf("Either there's nothing of note on the otherside, or the thick metal bulkhead hides whatever mysteries lie behind it...\n\n");
	printf("\nEnter your choice (1 for left, 2 for right): ");
	do
	{
		scanf("%d",&choice);
	}while(choice < 1 || choice > 2);
	switch(choice){
		case 1: //left door - roulette
			separator();
			printf("\nYou enter the door on the left, which slams shut as soon as you walk through.\n");
			printf("You seem to be in some sort of basement bar, with a bartender making drinks for patrons and a circular table before you with 3 people.\n");
			printf("The man that sits between the others seated at the table right across from you insists you take a seat, as he spins and plays with a revolver.\n");
			printf("\nEnter your choice (1 to go to the bar, 2 to sit at the table): ");
			scanf("%d",&choice);
			while(choice < 1 || choice > 2){
				printf("\nPlease enter a valid option (1 to go to the bar, 2 to sit at the table): ");
				scanf("%d",&choice);
			}
			if(choice == 1){
				separator();
				printf("\nYou walk past the table, much to the dismay of the three men, and reach the bar.\n");
				printf("You ask for your favorite drink (alcoholic or not) but the bartender says they don't serve those who don't play.\n");
				printf("Maybe a litte annoyed, you turn around when your hear a loud *BANG*.\n");
				printf("\nYou see the man with the revolver pointing his smoking gun at you, however when you look to see where you were shot\n");
				printf(" you just find a foam dart at your feet whose impact you didn't even feel.\n");
				printf("The whole bar erupts in laughter as the man explains how they're not that crazy and points towards the stairs for you to leave.\n");
				printf("\nNow especially done with these people, you go up the stairs and through a door that almost blinds you with a bright light as you\n");
				printf(" enter, you can't see where you're going but it's got to be better than here.\n\n");
				separator();
			}
			else if(choice == 2){
				separator();
				printf("\nYou sit at the table and the man points his gun at his head and you wince as he pulls the trigger.\n");
				printf("The gun clicks but nothing else happens, the three men let out a chuckle.\n");
				printf("He passes it to the man on this right, who spins the revolver's cylinder and tries testing his luck as well.\n");
				printf("Another click comes from the gun as the men begin to chuckle louder.");
				printf("The man hands it to you, saying good luck with a wry smile.\n");
				srand((unsigned)time(NULL));
				int revolver[] = {0,0,0,0,0,0}; // revolver with 6 spaces for bullets
				revolver[(rand()%6)] = 1; //randomizes index of a bullet
				int bullet = 0; //user option
				printf("Each chamber of the revolver cylinder is numbered 1-6, you spin the cylinder...\n");
				printf("\nWhich chamber do you hope it lands on? (Choose 1-6):  ");
				scanf("%d",&bullet);
				while(bullet <1 || bullet >6){
					printf("\nPlease hope for a chamber 1-6: ");
					scanf("%d",&bullet);
				}
				if(revolver[bullet-1] == 1){
					separator();
					printf("\nYou close your eyes and pull the trigger and hear a loud *BANG*, but feel a foam dart hit the side of your head.\n");
					printf("You're relieved that was all but the three men erupt with laughter.\n");
					printf("They hit the table and laugh as the man in the middle points up the stairs telling you to go up if you want to leave.\n");
					printf("They thank you for playing as you go up the stairs.\n");
					printf("\nNow especially done with these people, you go up the stairs and through a door that almost blinds you with a bright light as you\n");
					printf(" enter, you can't see where you're going but it's got to be better than here.\n\n");
					separator();
				}
				else{
					separator();
					printf("\nYou close your eyes and pull the trigger and hear a loud *CLICK*...and nothing seems to happen.\n");
					printf("\nThe whole table goes quiet and their stares move to the man to your right.\n");
					printf("Relieved, you hand the revolver to the next player...he spins the cylinder...he slowly raises the revolver to his head...\n");
					printf("\n*BANG*! The revolver fires a foam dart, hitting the man who frowns, knowing he lost, as the other men erupt into laughter.\n");
					printf("The man in the middle says good game and thanks you for playing and points you towards the stairs explaining it's the exit.\n");
					printf("\nNow especially done with these people, you go up the stairs and through a door that almost blinds you with a bright light as you\n");
					printf(" enter, you can't see where you're going but it's got to be better than here.\n\n");
					separator();
				}

			}
			break;
		case 2: //right door - space
			separator();
			printf("\nYou turn the bulkhead's valve until you hear a loud *CLUNK* that signifies the door opening.\n");
			printf("The door screeches a little as you pull it open and once inside the door suddenly slams shut\n");
			printf(" echoing in the large room you find yourself in.\n");
			printf("\nAcross from you is a large window that spans the entire wall, and through it you see the moon.\n");
			printf("You realize in the eerie, quiet room you're in that you're not on planet Earth anymore...you're on a spaceship!...In space!\n");
			printf("Suddenly, you hear loud thuds and an unfamiliar bestial roar muffled behind the bulkhead door to your right.\n");
			printf("You scan the room and see another door to your left.\n");
			printf("\nEnter your choice (1 for the door on the left, 2 for the door on the right): ");
			scanf("%d",&choice);
			while(choice < 1 || choice > 2){
				printf("\nPlease enter a valid choice (1 for the door on the left, 2 for the door on the right): ");
				scanf("%d",&choice);
			}
			if(choice == 1){
				separator();
				printf("\nYou run to the door on the left and try to open it, you hear the other door break open but manage to slip through\n");
				printf(" the left door and close it.\n");
				printf("You're unable to catch a proper glimpse of the creature as it moves too fast while charging towards you.\n");
				printf("\nYou manage to close the door just in time as you hear the creature slam against the door and screech in anger.\n");
				printf("The hallway continues further down, the way labelled with a sign saying \"EXIT\" but there's a room on the left with a broken door labelled \"ARMORY\"\n");
				printf("\nEnter your choice (1 for the ARMORY, 2 for the EXIT): ");
				scanf("%d",&choice);
				while(choice < 1 || choice > 2){
					printf("\nPlease enter a valid choice (1 for the ARMORY, 2 for the EXIT): ");
					scanf("%d",&choice);
				}
				if(choice == 1){
					separator();
					printf("\nYou dart into the armory and see many weapons, some scattered, used, and broken but some still in their cabinets.\n");
					printf("You also spot a keycard labelled \"EMERGENCY EXIT\" and quickly pick it up, but before you can leave you hear the creature\n");
					printf(" finally break through the door and begin heading towards you.\n");
					printf("\nYou decide with the remaining supplies you'll have your last stand here and you grab some rocket launchers.\n");
					printf("The creature tries to enter your room, but you fire rocket after rocket, choosing to switch between launchers rather than reloading one.\n");
					printf("When the dust finally settles and you see no trace of whatever that was, you quickly make your way to the exit\n");
					printf(" and use the keycard you found to open the exit door and venture forth to whatever awaits you on the other side...\n\n");
					separator();
				}
				else if(choice == 2){
					separator();
					printf("\nYou run as fast as you can towards the exit, hoping to escape before the creature breaks through the door.\n");
					printf("You make it to the door but it seems to be securely locked, with a slot for a keycard.\n");
					printf("You try in vain to force the door open before looking around your immediate surroundings hoping for a miraculous keycard to appear...\n");
					printf("\n...but no luck...and then you realize how quiet it's gotten...the banging sounds of the beast slamming the door has stopped.\n");
					printf("You can't tell if you should feel relieved or anxious.\n");
					printf("Unfortunately that question gets answered as your hear movement in the ceiling above you.\n");
					printf("You follow the movement as it gets louder and closer, you try to back up but feel the exit door behind you - you're cornered.\n");
					printf("\nYour eyes continue to helplessly follow the sounds until you look directly above you and see an air vent.\n");
					printf("The sounds stop...then suddenly the creature bursts through the vent and lands on top of you.\n");
					printf("\nYour visions is blurry and you feel disoriented from the impact, you can barely see the rough shape of the creature before it\n");
					printf(" opens it's mouth and rushes towards your vision.\n");
					printf("You can do nothing but flinch as you close your eyes shut...but then...\n\n");					
					separator();
				}
			}
			else if(choice == 2){
				separator();
				printf("\nYour curiousity leads you towards the unknown creature and you slowly approach the door on the right.\n");
				printf("You try to put your ear against the door when it suddenly bursts open!\n");
				printf("You flinch and close your eyes as you're launched backwards towards the center of the room.\n");
				printf("Before you could even open your eyes, you feel its presence over you and hear it's haunting cry one last time...\nbut then...\n\n");
				separator();
			}
			break;
	}
}
void separator(){
	printf("===================================================================================================================================\n");
}















































