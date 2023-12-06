//contributors
//Marcos Marquez Room#27
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


#define BAG_SIZE 5

char weapon[20] = "sword"; // Initial weapon
char* bag[BAG_SIZE] = {"Health Potion", "Bandages", "Rations", "Gold Coin", "Key"};
int bagCounts[BAG_SIZE] = {5, 5, 5, 5, 5}; // Initial counts for each item in the bag
int userHealth = 100; // Initial health of the user
int npcHealth = 100;  // Initial health of the computer NPC

// Function prototypes
void printMenu();
int getUserChoice();
int attackRandomizer(int defenderHealth);
int getBaseDamage();
void changeWeapon();
int checkBag();
int useItem(int index);
void useHealthPotion();
void useBandages();
void useRations();
int useGoldCoin();
void useKey();
void decrementItemCount(int index);
int guard(int guardHealth);
void npcTurn();
void displayGameOver();

void printMenu() 
{
    printf("Choose an option:\n");
    printf("1. Fight\n");
    printf("2. Change Weapon\n");
    printf("3. Check Bag\n");
    printf("4. Guard\n");
    printf("5. Run Away\n");
}

int getUserChoice() 
{
    int choice;
    printf("Enter your choice: ");
    if (scanf("%d", &choice) != 1)
    {
        // Handle invalid input
        printf("Invalid input. Please enter a number.\n");
        // Clear the input buffer
        while (getchar() != '\n');
        return getUserChoice(); // Recursive call to get a valid input
    }
    return choice;
}

int getBaseDamage() 
{
    // Define base damage based on the equipped weapon
    if (strcmp(weapon, "sword") == 0)
    {
        return 10;
    } 
    else if (strcmp(weapon, "long bow") == 0)
    {
        return 5;
    } 
    else if (strcmp(weapon, "magic staff") == 0)
    {
        return 15;
    } 
    else
    {
        return 0; // Default case, no weapon or unknown weapon
    }
}

int attackRandomizer(int defenderHealth) 
{
    int health = defenderHealth;

    srand(time(NULL));
    int attackerValue = rand() % 100;
    int defenderValue = rand() % 100;

    if (attackerValue > defenderValue)
    {
        printf("Attack hits!\n");

        // Calculate damage based on weapon
        int baseDamage = getBaseDamage();
        printf("Damage inflicted: %d\n", baseDamage);
        health -= baseDamage; // Reduce NPC health
    } 
    else
    {
        printf("Attack misses!\n");
    }

    return health;
}

void changeWeapon() 
{
    printf("Choose a weapon:\n");
    printf("1. Sword and Shield\n");
    printf("2. Long Bow with Arrows\n");
    printf("3. Magic Staff\n");

    int weaponChoice;
    printf("Enter your choice: ");
    scanf("%d", &weaponChoice);

    switch (weaponChoice) 
    {
        case 1:
            strcpy(weapon, "sword");
            printf("You equipped the Sword and Shield.\n");
            break;
        case 2:
            strcpy(weapon, "long bow");
            printf("You equipped the Long Bow with Arrows.\n");
            break;
        case 3:
            strcpy(weapon, "magic staff");
            printf("You equipped the Magic Staff.\n");
            break;
        default:
            printf("Invalid choice. Keeping the current weapon.\n");
    }
}

int checkBag() 
{
    printf("Checking your bag:\n");

    for (int i = 0; i < BAG_SIZE; i++) 
    {
        printf("%d. %s (%d left)\n", i + 1, bag[i], bagCounts[i]);
    }

    int itemChoice;
    printf("Enter the number of the item you want to use (0 to go back): ");
    scanf("%d", &itemChoice);

    if (itemChoice >= 1 && itemChoice <= BAG_SIZE) 
    {
        return useItem(itemChoice - 1);
    } 
    else if (itemChoice == 0) 
    {
        printf("Back to the main menu.\n");
        return 0;
    } 
    else 
    {
        printf("Invalid choice.\n");
        return 0;
    }
}

int useItem(int index) 
{
    switch (index) 
    {
        case 0:
            useHealthPotion();
            return 0;
        case 1:
            useBandages();
            return 0;
        case 2:
            useRations();
            return 0;
        case 3:
            return useGoldCoin();
        case 4:
            useKey();
            return 0;
        default:
            printf("Invalid item.\n");
            return 0;
    }
}

void useHealthPotion() 
{
    if (userHealth < 100) 
    {
        printf("You used a Health Potion.\n");
        userHealth = userHealth + 50 > 100 ? 100 : userHealth + 50; // Increase health, but not beyond the limit
        decrementItemCount(0);
    } 
    else 
    {
        printf("Your health is already at its maximum.\n");
    }
}

void useBandages() 
{
    if (userHealth < 100)
    {
        printf("You used Bandages.\n");
        userHealth = userHealth + 25 > 100 ? 100 : userHealth + 25; // Increase health, but not beyond the limit
        decrementItemCount(1);
    } 
    else 
    {
        printf("Your health is already at its maximum.\n");
    }
}

void useRations() 
{
    if (userHealth < 100) 
    {
        printf("You ate Rations.\n");
        userHealth = userHealth + 10 > 100 ? 100 : userHealth + 10; // Increase health, but not beyond the limit
        decrementItemCount(2);
    } 
    else 
    {
        printf("Your health is already at its maximum.\n");
    }
}

int useGoldCoin() 
{
    srand(time(NULL));
    if (rand() % 2 == 0) 
    {
        printf("You used a Gold Coin to bribe the goblin. It worked!\nYou got away this time...\n");
        decrementItemCount(3);
        return 1;
    } 
    else 
    {
        printf("You used a Gold Coin to bribe the goblin, but it didn't work.\n");
        decrementItemCount(3);
        return 0;
    }
}

void useKey() 
{
    printf("You used the Key to distract the goblin, dealing 10 extra damage!\n");
    npcHealth -= 10; // Reduce NPC health
    decrementItemCount(4);
}

void decrementItemCount(int index) 
{
    bagCounts[index]--;
}

int guard(int guardHealth) 
{
    int health = guardHealth;

    srand(time(NULL));
    int recoveryAmount = rand() % 20 + 10; // Random amount between 10 and 29
    health = health + recoveryAmount > 100 ? 100 : health + recoveryAmount; // Increase health, but not beyond the limit

    printf("Recovered health while guarding: %d\n", recoveryAmount);

    return health;
}

void npcTurn()
{
    // NPCs turn
    srand(time(NULL));
    int npcChoice = rand() % 2 + 1; // NPC randomly chooses between attack and guard

    switch (npcChoice) 
    {
        case 1:
            printf("NPC chose to Attack\n");
            userHealth = attackRandomizer(userHealth);
            break;
        case 2:
            printf("NPC chose to Guard\n");
            npcHealth = guard(npcHealth);
            break;
    }

    // Check if the NPC's health is zero after its turn
    if (npcHealth <= 0) 
    {
        displayGameOver();
    }
}

void displayGameOver() 
{
    printf("Game Over!\n");
    printf("User Health: %d\n", userHealth);
    printf("NPC Health: %d\n", npcHealth);

    if (userHealth <= 0)
    {
        printf("Your health dropped to 0. You lost the battle!\n");
    } 
    else if(npcHealth <= 0)
    {
        printf("You defeated the goblin! Congratulations!\n");
    }
}

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
				int choice = 0;
    			int goldCoin = 0;

   				 printf("Welcome to Room 27! You are now entering combat with a goblin! What will you do!?\n");

				while (choice != 5 && userHealth > 0 && npcHealth > 0)
				{
					printMenu();

					// Player's turn
					choice = getUserChoice();

					switch (choice) 
					{
						case 1:
							printf("You chose to Fight\n");
							npcHealth = attackRandomizer(npcHealth);
							break;
						case 2:
							printf("You chose to change your weapon\n");
							changeWeapon();
							break;
						case 3:
							printf("You chose to open and check your bag\n");
							goldCoin = checkBag();
							break;
						case 4:
							printf("You chose to guard and recover a random amount of health.\n");
							userHealth = guard(userHealth);
							break;
						case 5:
							break;
						default:
							printf("Invalid choice. Please enter a number between 1 and 5.\n");
					}

					if (choice == 5) 
					{
						printf("You chose to flee and left Room 27. Goodbye!\n");
						break;
					}

					if(goldCoin)
					{
						break;
					}

					// Check if the user's health is zero after their turn
					if (userHealth <= 0 || npcHealth <= 0) 
					{
						displayGameOver();
						break;
					}

					// NPC's turn
					npcTurn();

					printf("Your Health: %d\n", userHealth);
					printf("Goblin Health: %d\n", npcHealth);
				}
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















































