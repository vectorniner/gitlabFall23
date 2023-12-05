//contributors
//gpoppe room 55
//ctalebi 46

#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

int room46(char name[]);

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
				break;
			}
			case 45:
			{
				puts("room45");
				break;
			}
			case 46: //Ctalebi **************************************
			{
				puts("You choose door 46.");
                int result = 0;
                result = room46(name);
                if (result == -1 && name[26] == '\0')// If player dies and name[] has room,
                    strcat(name, " Jr."); //their kin takes their place
                else if (result == 1) //Successful escape
                    return EXIT_SUCCESS; //TODO Is this allowed?
                break;
			}//******************************************************
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



//**********************************************************************************************************************
int room46(char name[]){//Coded by ctalebi
    /*todo needs
     * Original work                            //always
     * 5 choices                                //done
     * separated function w/ prototype          //done
     * return to main menu when done            //ask if optional breakout is allowed
     * one loop,                                //done
     * array,                                   //ask if editing the original name counts?
     * RNG                                      //
     * pull request before end of last class    //done?
     * */
    //variables
    int choice = -1;
    int counter = 0;
    int rng = rand() % 10;
    int d20 = rand() % 20;

    //puts("************************************************************************************************************************\n");

    //code
    printf("Your name is %s\n", name);
    puts("************************************************************************************************************************\n"
         "You quickly enter what you think to be the next room and close the door behind you as to not let any more water in. As\n"
         "you look around, you notice this is a much smaller space than you had anticipated. There is a singular door with a large\n"
         "dial. Upon closer inspection, you see that you can use it to select from 5 different pictures.\n"
         "The first is a Lion, the second a dragon, the third a rabbit,\n"
         "fourth a snake, and the fifth a fin sticking out of water.\n"
         "The door is otherwise locked and there are no other exits.");

    do {
        puts("************************************************************************************************************************\n"
             "What choice do you make? (#1-5)");
        if (scanf("%d", &choice) != 1 || choice == -1)
            choice = 0;
        //if (choice == -1) choice = 0; //-1 is a reserved number, not for user access.
        switch (choice) {
            case 1://the lion
            {
                puts("You select the lion and open the door. A rush of air blows through as you open the door. a few mothballs roll past your\n "
                     "feet as you realize what you've opened is some sort of... Wooden clothing storage furnishing... But knowing what you\n"
                     "do about such a furnishing, you know that air lacking a certain musk that comes with old clothing could not have come\n"
                     "from a furnishing such as this so there must be an opening in the back. You push your way through some coats, jackets,\n"
                     "and pantaloons. This is going on longer than you thought, but just as you think that you see a light at the end. When\n"
                     "you break free of the clothing, you come to a clearing in the middle of a group of trees. The centerpiece to this\n"
                     "clearing is a mysterious illuminated oil lit lamp sitting upon a metal pole.\n"
                     "(For some reason, you just cant remember the names of some things...)");
                puts("You hear footsteps approaching, more than one pair, at this point, you have two choices: \n"
                     "1: Stay here and meet the approaching footsteps.\n"
                     "2: Run into the forest, cant risk any known dangers.");
                puts("************************************************************************************************************************\n");
                choice = -1;
                counter = 0;
                do {
                    if (counter == 0)
                    puts("What do you do?");
                        scanf("%d", &choice);
                    if (counter == 3 || choice == 1){//Stay in place
                        printf("The source of the footsteps enters the clearing, it is a lion. You dont see any\n"
                             "sense of malice in it's eyes and to your surprise, it greets you.\n"
                             "\"Hello child %s, this must seem strange but this is not the land you know. I must\n"
                             "apologize as you are not needed here yet. I shall be sending you home.\"\n"
                             "He breathes deeply upon you and your vision darkens and as you open your eyes you find\n "
                             "you are at home, in your bed. Was it a dream? You wonder this as you get out of bed\n"
                             "and a mothball falls from your sleeve... \n", name);
                        puts("************************************************************************************************************************\n");
                        //todo Can we exit the program exiting the head loop?
                        return 1; //exit head loop
                    }
                    else if (choice == 2){//run
                        puts("You sprint into the forrest. The thick branches hit against you as you run from\n"
                             "whatever was approaching. You start to hear rushing water but just as you notice, your\n"
                             "foot slips and you fall forward into an opening to an underground river. As you splash\n"
                             "into the freezing water and come up for air you look downriver and see a fork, one going\n"
                             "into open air, and the other into darkness. Sadly the current is too strong and you are\n"
                             "pulled into the dark. You only perceive a few seconds before you hit a hard floor...");
                        puts("************************************************************************************************************************\n");
                        return 0;
                    }
                    else {//wrong choice
                        counter++;
                        puts("The footsteps are getting closer...");
                    }
                }while(choice != -1);
                puts("************************************************************************************************************************\n");
                return 0;
            }
            case 2://the dragon
            {    //can use the RNG for a D20
                puts("You select the Dragon and open the door. The dungeon continues as a hallway, with a closed "
                     "door");
                puts("************************************************************************************************************************\n");
                return 0;
            }
            case 3://the rabbit
            {    //use the RNG in this one (Game show? w/ a 1/10 chance of getting out?)
                puts("You select the Rabbit and open the door.");
                puts("************************************************************************************************************************\n");
                return 0;
            }
            case 4://the snake
            {
                puts("You select the Snake and open the door.");
                puts("************************************************************************************************************************\n");
                return 0;
            }
            case 5://the fin
            {   puts("You select the Fin in Water and open the door.");
                puts("************************************************************************************************************************\n");
                return 0;
            }
            default: //fail to chose level 1
            {
                choice = -1;
                if (counter == 0){
                    puts("The door is otherwise locked and there are no other exits.");
                    counter++;
                }
                else if (counter == 1){
                    puts("The door really won't budge, and... is it getting warmer?");
                    counter++;
                }
                else if (counter == 2){
                    puts("You feel like the air is getting thick, perhaps you may be running out of air?");
                    counter++;
                }
                else if (counter == 3){
                    puts("You are definitely suffocating...");
                    counter++;
                }
                else if (counter == 4)  {
                    puts("The room goes black, you... Don't wake up...\n"
                         "************************************************************************************************************************\n");
                    return -1;
                }
            }
        }
    } while (choice == -1);
    return 0;
}
//**********************************************************************************************************************
/*if (counter == 0){
        counter++;
    } else if (counter == 1){
        counter++;
    } else if (counter == 2){
        counter++;
    } else if (counter == 3){
        counter++;
    } else if (counter == 4){
        return -1;
    }*/