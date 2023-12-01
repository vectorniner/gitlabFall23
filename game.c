//contributors
//gpoppe room 55
//ctalebi 46
//Sung Kim room 20

#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

int hpUpdate(int hp, int update);

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

                               	puts("The door opens and you enter a new world. A suit of armor now clads your body, with a shield on your left arm and a sword in your right.");
				puts("WELCOME TO MY GAME- an etheral voice says- THERE ARE ONLY TWO WAYS YOU MAY LEAVE- IF YOU SURVIVE WHAT'S COMING, OR DEATH.");
				puts("A red healthbar appears above your head indicating a full 100 HP");
				
				int hp = 100;

				puts("Three goblins suddenly appear before you and rush forward with weapons drawn.");
				puts("Do you defend or attack?");

				char choice1[20];
				scanf("%s", choice1);

				if(strcmp(choice1, "defend") == 0)
				{
					puts("You raise your shield as the goblins line up to attack you.");
					puts("You successfully defend two of the goblins' blows, but the third's club glances off your body causing you to wince in pain.  You have taken 15 points of damage.");
					int dmg = -15;
					hp = hpUpdate(hp, dmg);
				}

				if(strcmp(choice1, "attack") == 0)
				{
					puts("You swing your sword wildly with the skill of an ox barely causing any damage to your enemies- this angers them and they charge you in a frenzy. They approach one at a time.");
					
					for(int i = 4; i < 7; i++)
					{
						printf("You take %d damage from a goblin.\n", i);
						int dmg = -i;
						hp = hpUpdate(hp, dmg);
					}
					
					if(hp <= 0)
					{
						puts("You are dead. You will resurrect in the room previous. Good luck!");
						break;
					}
				}
				
				puts("The goblins stop their attack and look to the sky in fear. You look up as a giant dragon descends and crushes the goblins with its landing.");
				puts("You quickly scan your surroundings to look for shelter- to your left is a cave, and to your right is a dense forest: cave or forest?");

				char choice2[20];
				scanf("%s", choice2);
				
				if(strcmp(choice2, "cave") == 0)
				{
					puts("You rush into the cave to find an old witch stirring a bubbling cauldron. She tells you if you drink her brew, you will gain the strength to face the dragon.");
					puts("Behind the witch, you notice a prisoner in a cage, mouth gagged, silently shaking his head no- his eyes tell me the witch is lying, but the prisoner looks just as untrustworthy.");
					puts("It looks like the key to the prisoner's cage sits on a table next to the witch. You might be able to fell the weak-looking witch and free the prisoner.");
					puts("He may have some answers on how to get out of here. Drinking the witch's brew may help you gain the strength to defeat the dragon and leave this place, ");
					puts("but freeing the prisoner would provide an ally: brew or prisoner?");

					char choice3[20];
					scanf("%s", choice3);

					if(strcmp(choice3, "brew") == 0)
					{
						puts("You decide to trust the witch and drink the brew. Your body shudders as you feel yourself transforming into a massive beast.");
					       	puts("You can feel your health replenishing and your power growing. You are ready to face the dragon.");
						int heal = 15;
						hp = hpUpdate(hp, heal);

						puts("You rush the dragon before it can attack, grabbing its neck in order to stop its firebreath.");
						puts("You feel the dragon's strength wane as it suffocates. With its last breath, it utters an ancient death curse.");
						puts("Your body becomes rigid as your consciousness drifts away. You are dead.");
						break;
					}

					if(strcmp(choice3, "prisoner") == 0)
					{
						puts("You lunge at the witch and pierce her heart with a lucky thrust. You pick up the key and free the prisoner.");
						puts("He removes his gag and introduces himself as a wealthy merchant. He finds his belongings in the witch's chest and hands you a large bag of coin and an amulet.");
							
						int gold = rand();
						printf("You have received %d gold from the prisoner!\n", gold);

						puts("The merchant says the amulet has the power to send you back in time- you grab your new riches and activate the amulet. You close your eyes and now you're back...");
						break;
					}
				}

				if(strcmp(choice2, "forest") == 0)
				{
					puts("You run into the forest until you can barely hear the dragon. You stop to catch your breath only to find yourself surrounded by wolves.");
					puts("You raise your shield as one of them lunges, knocking the wolf on its back. Two other wolves attack from the opposite direction. You take 30 damage.");
					int dmg = -30;
					hp = hpUpdate(hp, dmg);
					if(hp <= 0)
					{
						puts("You are dead. You will resurrect in the room previous. Good luck!");
						break;
					}

					puts("You see what looks like a path to escape, but it is a long sprint to get to it.  Your other option is to fight the wolves: run or fight?");
					
					char choice4[20];
					scanf("%s", choice4);

					if(strcmp(choice4, "run") == 0)
					{
						puts("You run as fast as you can for the path you saw, but a wolf grabs a hold of your ankle shredding it apart as you tumble through thick bramble. You take 25 damage.");
						int dmg = -25;
						hp = hpUpdate(hp, dmg);
						
						if(hp <= 0)
						{
							puts("You are dead. You will resurrect in the room previous. Good luck!");
							break;
						}

						puts("The wolves have stopped their pursuit. You continue on and find yourself in a massive cave, full of gold and riches- this is the dragon's lair.");
						puts("You see a mirror that shows the room you started in- you reach out to touch the mirror and your hand slips right through, as if passing through a portal.");
						puts("It looks to be a way out. You also see a massive jewel sitting on a pedestal, ripe for the taking: portal or jewel?");

						char choice5[20];
						scanf("%s", choice5);

						if(strcmp(choice5, "portal") == 0)
						{
							puts("You walk through the portal, and time flows backward...");
							break;
						}

						if(strcmp(choice5, "jewel") == 0)
						{
							puts("As soon as you grab the jewel from the pedestal, the cave walls begin to close in. You dash for the lair's entrance, but you are too late. You are dead.");
							break;
						}
					}

					if(strcmp(choice4, "fight") == 0)
					{
						puts("You attack the wolves and successfully kill three of them. The other nine tear you apart. You are dead.");
						break;
					}
				}
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

int hpUpdate(int hp, int update)
{
	hp = hp + update;
	return hp;
}















































