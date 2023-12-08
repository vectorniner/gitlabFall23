//contributors
//Marcos Marquez Room#27
//gpoppe room 55
//ctalebi 46
//Sung Kim room 20
//ogarcia 15
//Sung Kim room 20
//Matthew Lira room25
//jaye room 8
//Edvin Monzon room 31
//Thisara Perera Room 41
//Hrithik Dayal Singh room 47
//Haylee Allen Room 4
//Paolo Santos room 44
// Christian A. Contreras Room 12

#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

void myRoomThirtyOne(int num);
int giftSel(int c);
void loadRoom8(void);

//Start of RED Door Series25
void specialRoom25(void);
void AetherDoor25(void);
void RedDoor25(void);
void miserySorrowDoor25(int Ammo);
void reflectionDoor25(int Ammo);
void FinaleLighthouse25(int Ammo);
//End of RED Door Series

//start of Aether Door Series 25
//specialRoom25
void maintenanceSector25(void);
void researchSector25(void);
void containmentSector25(void);
bool guessGame25(void);
void FinaleAstralPlane25(void);
//end of Aether Door Series


//declare prototype
int car(int num);

//Prototype Room 15
void userChoice_door15(void);

int room37ShowOptions(int chosen);
int hpUpdate(int hp, int update);


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
int hpUpdate(int hp, int update);
int room23RanSet (int lowerLimit, int upperLimit);
float speedofHonda(float hnd, float tme);
int room46(char name[]);//used to execute the bulk of room 46's code
int inputNumber(void); //used to ensure only integers are allowed and any others are flushed from the input buffer, returns 0 if invalid input

int chosenBoons[3];
void choose_gods(int *choices, int maxChoices);
void apply_boons(int *choices, int numChoices);
void random_event(int godChoice);
void room47_conclusion();

void room44(void);//P Santos
void separator(void);//P Santos

void printMessage(int result); // Room 12


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
				float hnd = 10;
				float tme = 2.5;
				float totalTmeSpeed = speedofHonda(hnd, tme);
				int chooseVehicle;
				int chooseTactic;
				int choosePancakes;
				int pineapples;
				int bluberries = 0;
				char* pizzaoptions[3];
				pizzaoptions[0] = "pepperoni";
				pizzaoptions[1] = "chili verde";
				pizzaoptions[2] = "build-your-own";
				
				puts("Welcome aboard cadet! You are about to embark on a totally normal, super important mission... aht aht ask questions later!");
				puts("No time to waste, We just got a call from HQ, we need to head down to Apple Pie Avenue, something big is happening!");
				puts("We gotta go quick! How are we going to get there? Enter 1 for the Tank or 2 for the Honda.\n");
				scanf("%d", &chooseVehicle);
				
				while ((chooseVehicle != 1) && (chooseVehicle != 2)) {
				    puts("HEY! Time is of the essence here, let's try this again. Enter 1 to choose the Tank or 2 to choose the Honda?!\n");
				    scanf("%d", &chooseVehicle);
				}
				
				if (chooseVehicle == 1) {
				    puts("A tank... really???? It's going to take foreverrr to get there. Oh well, LET'S GO!");
				    puts("After a grueling 2 hour drive, we made it! And...there's an Apple Pie monster throwing *gasp* cherry pies at the whole block!");
				    puts("The horror, I mean cherry pies, that's just terrible. Who even eats cherry pie??");
				    puts("Welp we can do two things, we can fight or go get pizza. Enter 5 to Fight or 10 to go get Pizza?\n");
				    scanf("%d", &chooseTactic);
				}
				
				if (chooseVehicle == 2) {
				    printf("Well it took a total of %.2f minutes to get here, and I see nothing. So let's call it a day. Good work!\n", totalTmeSpeed);
				    break;
				}
				
				while ((chooseTactic != 5) && (chooseTactic != 10)) {
				    puts("The choice is simple, try AGAIN! Enter 5 to Fight or 10 for the Pizza...\n");
				    scanf("%d", &chooseTactic);
				}
				
				while (chooseTactic == 5) {
				    puts("oh, so we're actually going to fight an Apple Pie Monster?? If you say so.");
				    puts("Well, we are in a tank so might as well use it. With the power of this Grade A Military Vehicle we'll save the town from the apple pie....");
				    printf("After a total of %d shots, the apple pie is cooked!\n", rand());
				    puts("Yay! We totally saved the day, okay, now it's time to celebrate!");
				    puts("I'm thinking Pancakes, so we're going to head over to Pip's Pancakes, best pancakes in town!");
				    puts("Okay, I'm going for the Chocolate Chip Pancakes, are you going for the the #2 Buttermilk Pancakes or the #12 Blueberry Pancakes?\n");
				    scanf("%d", &choosePancakes);
				    
				    while ((choosePancakes != 2) && (choosePancakes != 12)) {
				    puts("I'm starvinnng, order quick! Enter 2 for the Buttermilk or 12 for the Blueberry\n");
				    scanf("%d", &choosePancakes);
				}
				
				if (choosePancakes == 2) {
				    puts("Great choice, can't go wrong with the classic stack of Buttermilk Pancakes! Cheers to us!");
				    puts("And that's how we saved the town from the APPLE PIE MONSTER... who happened to be throwing cherry pies...");
				    puts("THE END!\n");
				    break;
				}
				
				if (choosePancakes == 12) {
				    do {
				        printf("Bluberries? Blueberries?? BLUEBERRIES???\n");
				        bluberries++;
				    }
				    
				    while (bluberries < 4);
				    
				    puts("Sorry, I thought I heard you say blueberry pancakes...oh you actually did");
				    puts("Oh my, the horror...well we saved the day so I'll let it slide...for now.");
				    puts("THE END\n");
				    break;
				}
				
				}
				
				while (chooseTactic == 10) {
				    puts("I personally think Pizza is a GREAT choice, I mean its a pie monster, I'm sure the sun will melt it.");
				    puts("We can go to Pete's Pizzaria, best pizza in town! Now for the most important question.");
				    puts("Are you going to get pineapples on your pizza? Enter 7 for yes or 21 for no");
				    scanf("%d", &pineapples);
				    
				    while ((pineapples != 7) && (pineapples != 21)) {
				    puts("No wrong answers...maybe... Enter 7 for yes to the pineapples, of 21 for no to the pineapples\n");
				    scanf("%d", &pineapples);
				}
				
				if (pineapples == 7) {
				    puts("..................no comment\n");
				    break;
				}
				
				if (pineapples == 21) {
				    puts("whew, that is great to hear, almost thought you were going to put pineapples on your pizza...");
				    printf("Anway, I'd highly recommend getting the %s pizza, that way you can customize it. I'm going for the %s pizza\n", pizzaoptions[2], pizzaoptions[1]);
				    puts("Great work pal! That marks the end of the day!\n");
				    break;
				}
				
				}
				
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
				loadRoom8();
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
				int userInput, guess, randy, randomNum, questionNum, result;
				
				puts(".");
				puts("Welcome to Room12!");
				puts("Please enter a number (1 though 5): ");
				scanf("%d", &userInput);

				switch(userInput)
				{
					case 1:
						// Random
						puts(".");
						puts("You have chosen Game 1!");
						puts("In order to win, you must guess the correct number (1 through 10)");
						puts("Please enter your guess: ");
						scanf("%d", &guess);

						randy = rand() % 10;
						randomNum = randy + 1;

						if(guess == randomNum)
						{
							puts(".");
							result = 1;
							printMessage(result);
						}

						else
						{
							result = 0;
							puts(".");
                                                	printf("The correct number was: %d\n\n", randomNum);
							printMessage(result);
						}

						break;


					case 2:
                                                puts(".");
                                                puts("You have chosen Game 2!");
						puts("TRIVIA! In order to win, you must correctly answer the following question:\n");
						
						randy = rand() % 3;
						questionNum = randy + 1;


						switch(questionNum)
						{
							case 1:
								puts("What device(phone) was announced in 2007 w/ the solgan ''This is only the beginning''?");
								puts("1. iPhone");
								puts("2. Galaxy");
								puts("3. Razor\n");
								puts("Please enter the number that corresponds to your answer: ");
								scanf("%d", &guess);

								if(guess == 1)
								{
									result = 1;
									puts(".");
									printMessage(result);
								}

								else
								{
									puts(".");
									puts("The correct answer was: 1. iPhone\n");
									result = 0;
									printMessage(result);
								}

								break;

							case 2:
								puts("The ''Big Four'' consists of Google, Apple, Meta, and Amazon.");
								puts("What software company is sometimes added to make The ''Big Five''?");
								puts("1. Oracle");
								puts("2. Microsoft");
								puts("3. IBM\n");
								puts("Please enter the number that corresponds to your answer: ");
                                                                scanf("%d", &guess);

								if(guess == 2)
								{
									result = 1;
									puts(".");
									printMessage(result);
								}

								else
								{
									puts(".");
									puts("The correct answer was: 2. Microsoft\n");
									result = 0;
									printMessage(result);
								}

								break;

							case 3:
								puts("Which smartphone game had millions of players days after its release in 2016?");
								puts("1. Clash of Clans");
								puts("2. Candy Crush");
								puts("3. Pokemon Go\n");
								puts("Please enter the number that corresponds to your answer: ");
								scanf("%d", &guess);

								if(guess == 3)
                                                                {
                                                                        result = 1;
									puts(".");
                                                                        printMessage(result);
                                                                }

                                                                else
                                                                {
									puts(".");
									puts("The correct answer was: 3. Pokemon Go\n");
                                                                        result = 0;
                                                                        printMessage(result);
                                                                }

								break;
						}

                                                break;


					case 3:
						// Loop
                                                puts(".");
                                                puts("You have chosen Game 3!");
						puts("In order to win, you have 3 tries to guess the correct number (1 through 25)");

						randy = rand() % 25;
						randomNum = randy + 1; 
						int i = 0;

						while(i < 3)
						{
							puts("Please enter your guess: ");
							scanf("%d", &guess);

							if(guess != randomNum)
							{
								puts("Incorrect...");
								result = 0;
								i++;

								if(i > 2)
								{
									puts(".");
									printf("The correct number was %d\n\n", randomNum);
									printMessage(result);
									break;
								}
							}

							else
							{
								puts("Correct!");
								result = 1;
								puts(".");
								printMessage(result);
								break;
							}
						}

                                                break;


					case 4:
                                                puts(".");
                                                puts("You have chosen Game 4!");
						puts("TRIVIA! In order to win, you must get the correct answer to the following question:\n");
						
                                                randy = rand() % 3;
                                                questionNum = randy + 1;

                                                switch(questionNum)
                                                {
                                                        case 1:
                                                                puts("Which programming language is named after a type of Indonesian coffee?");
                                                                puts("1. Java");
                                                                puts("2. C++");
                                                                puts("3. Python\n");
                                                                puts("Please enter the number that corresponds to your answer: ");
                                                                scanf("%d", &guess);

                                                                if(guess == 1)
                                                                {
                                                                        result = 1;
									puts(".");
                                                                        printMessage(result);
                                                                }

                                                                else
                                                                {
									puts(".");
									puts("The correct answer was: 1. Java\n");
                                                                        result = 0;
                                                                        printMessage(result);
                                                                }

								break;

                                                        case 2:
                                                                puts("Which college did Bill Gates graduate from?");
                                                                puts("1. Harvard");
                                                                puts("2. None");
                                                                puts("3. Yale\n");
                                                                puts("Please enter the number that corresponds to your answer: ");
                                                                scanf("%d", &guess);

                                                                if(guess == 2)
                                                                {
                                                                        result = 1;
									puts(".");
                                                                        printMessage(result);
                                                                }

                                                                else
                                                                {
									puts(".");
									puts("The correct answer was: 2. None\n");
                                                                        result = 0;
                                                                        printMessage(result);
								}

								break;

							 case 3:
                                                                puts("Which product did Amazon first sell?");
                                                                puts("1. Computers");
                                                                puts("2. Printers");
                                                                puts("3. Books\n");
                                                                puts("Please enter the number that corresponds to your answer: ");
                                                                scanf("%d", &guess);

                                                                if(guess == 3)
                                                                {
                                                                        result = 1;
									puts(".");
                                                                        printMessage(result);
                                                                }

                                                                else
                                                                {
									puts(".");
									puts("The correct answer was: 3. Books\n");
                                                                        result = 0;
                                                                        printMessage(result);
                                                                }

								break;
                                                }

                                                break;


					case 5:
						// Array
						puts(".");
						puts("You have chosen Game 5!");
						puts("There are 3 hats and a ball...");
						puts("In order to win, you must guess which number hat the ball is under");
						puts("Please enter which number hat the ball is under (1, 2, or 3): ");
						scanf("%d", &guess);
						

						randy = rand() % 3;
						randomNum = randy + 1;
						
						int correctHat;
						int hats[3] = {0, 0, 0};
						hats[randomNum] = 7;
						
						puts(".");
						for(int i = 0; i < 3; i++)
						{
							if(hats[i] != 0)
							{
								correctHat = i;
								printf("The ball was under hat #%d\n\n", i);
								break;
							}
						}


						if(guess != correctHat)
						{
							result = 0;
							printMessage(result);
						}

						else
						{
							result = 1;
							printMessage(result);
						}

						break;


					default:
						puts("\n");
						puts("Invalid entry...");
						break;
				}

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
				//Purpose: For Final Project
				
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
				int b1 = 0;
  int b2 = 0;
  int b3 = 0;
  int b4 = 0;

  int total = 0;

  int room23choice = 0;

  puts ("room23");
  puts ("You see a door with 5 buttons,");
  puts ("the number 100 on the top");
  puts ("and the number 0 on the bottom");

  do
    {
      b1 = room23RanSet (1, 10);
      b2 = room23RanSet (2, 10);
      b3 = room23RanSet (3, 15);
      b4 = room23RanSet (4, 15);

      printf ("\nButton 1 has a green %d\n", b1);
      printf ("Button 2 has a red %d\n", b2);
      printf ("Button 3 has a green %d\n", b3);
      printf ("Button 4 has a red %d\n", b4);
      printf ("Button 5 says RESET");

      printf ("\nWhich button will you press? ");
      scanf ("%d", &room23choice);

      switch (room23choice)
      {
          case 1:
          {
              total = total + b1;
              printf ("The bottom number now says %d", total);
              break;
              
          }
          case 2:
          {
              total = total - b2;
              printf ("The bottom number now says %d", total);
              break;
              
          }
          case 3:
          {
              total = total + b3;
              printf ("The bottom number now says %d", total);
              break;
              
          }
          case 4:
          {
              total = total - b4;
              printf ("The bottom number now says %d", total);
              break;
              
          }
          case 5:
          {
              total = 0;
              printf ("The bottom number now says %d", total);
              break;
              
          }
          
      }

    } while (total != 100);
    
    printf ("\nThe door opens and you escape!");
    printf ("\n");
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
				specialRoom25();
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
				int num;
				printf("Now choose a number between 1 - 5:\n");
				scanf("%d",&num);

				while(num < 1 || num > 5)
				{
					printf("Error: Please choose a number between 1 - 5:\n");
					scanf("%d",&num);
				}

				if(num == 1)
				{
					printf("Now you're in a room full of snakes!\n");
				}

				if(num == 2)
				{
					int clowns[3];
					clowns[0] = 10;
					clowns[1] = 5;
					clowns[2] = 50;
					clowns[3] = 100;
					int randClowns = rand() % 3;
					printf("Now you're in a room full of %d clowns!\n",clowns[randClowns]);
				}

				if(num == 3)
				{
					printf("Now you're in a room full of spiders!\n");
				}

				if(num == 4)
				{
					printf("Now you're in a room full of bunnies\n");
				}

				if(num == 5)
				{
					int money = rand() % 1000000;
					printf("You won %d dollars!\n",money);
					car(num);
	
				}


				break;
			}
			case 31:
			{
				int arr[] = {1,2,3,4,5};
  for(int i = 0; i < 5; i++)
  {
   printf("%d\n",arr[i]);
   }

   int num;
   printf("Please choose 1 of the 5 gates to continue: \n");
   scanf("%d",&num);

   myRoomThirtyOne(num);
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
				puts("\nWelcome to Santa's WORKshop");
                                puts("A magical place that grants children's wishes come true-- but not for you");
                                puts("That's right-- You're one of Santa's elves");
                                puts("You've been assigned a few tasks that you need to complete before Santa personally throws coal at you");
                                puts("NOW GET TO IT BEFORE YOU GO DOWN IN HISTORY AS THE ELF WHO RUINED CHRISTMAS!\n");


                                puts("Those were the wishlists of the kids entrusted to you-- not random sheets of paper we hand out for fun");
                                puts("We do enough damage with the amount of wrapping paper we use each December\n");

                                int g,n;

                                puts("\nOkay, now Alice is up first. She didn't say how many Barbie dolls she'd like. How many should we gift her? ");
                                scanf("%d",&n);
                                while(n>3||n<=0)
                                {
                                        if(n>3)
                                        {
                                                puts("Oooh Santa's wallet won't be too happy. Let's not be too ambitious, go lower: ");
                                                scanf("%d",&n);
                                        }
                                        if (n<=0)
                                        {
                                                puts("Alright let's not be too stingy, aim higher: ");
                                                scanf("%d",&n);
                                        }

                                }
                                printf("\nAwesome, I'll send %d dolls over to the packaging station\n",n);



                                puts("Alright Jax is up next, let's test your memory from the tour before you met me");
                                puts("How many racecars did he want? (It's less than 6) ");
                                scanf("%d",&g);
                                int num= rand()%5+1;
                                while(g!=num)
                                {
                                        puts("Jax would be very disappointed in you. Try again: ");
                                        scanf("%d",&g);
                                }
                                puts("\nAlright another task done");

                                char toy1[30]="train";
                                puts("Now Adam's indecisive, he can't pick between a train set or a toy guitar.(Choose train or guitar): ");
                                scanf("%s",toy1);
                                if(strcmp(toy1,"guitar")==0)
                                {
                                        puts("Nice! We got a rockstar in the making. I'll put in a couple of earplugs for the parents");
                                }
                                else
                                {
                                        puts("All aboard Adam's Express. Prayers to the parents's feet for they will be run over");
                                }

                                char toy2[20]="p";
                                puts("\nOkay now Liz is 5 and loves princesses, but is deadly afraid of dragons");
                                puts("Should we help her face her fears or take the safe route? (enter p or d): ");
                                scanf("%s",toy2);
                                if(strcmp(toy2,"p")==0)
                                {
                                        puts("I think that's a wise choice");
                                }
                                else
                                {
                                        puts("Liz and her parents hate you. You caused a lot of waterworks. Liz hopes you get eaten by dinosaurs");
                                }

                                char toy3[20]="t";
                                puts("\nOkay now Milo is 4 and quite the hyperactive soul");
                                puts("Should we gift him a trampoline or a book on relaxation techniques? (enter t or b): ");
                                scanf("%s",toy3);
                                if(strcmp(toy3,"t")==0)
                                {
                                        puts("You're a savior to his parents. They just toss him in and he tires himself out and sleeps through the night");

                                }
                                else
                                {
                                        puts("What are you doing? The child can barely read?!");
                                }

                                char toy4[20]="p";
                                puts("\nOkay now Angie is 11 and she's quite the artsy type");
                                puts("Should we gift her a fingerpaint set or a nice wooden easle? (p for paint, e for easle): ");
                                scanf("%s",toy4);
                                if(strcmp(toy4,"p")==0)
                                {
                                        puts("Way to go! You ruined her art career! SHE'S 11! NOT A TODDLER!");
                                }
                                else
                                {
                                        puts("She loved it! A Picasso in the making! I'm sure she'll credit you when she's famous");
                                }

                                puts("\nCongrats! You're done with the wishlists! I'm sure it gave you headaches and joy!");
                                puts("\nBefore you go, we have a little surprise for you");
                                puts("\nSanta can't let his little helper go back empty-handed so he has a little gift prepared for you too!");

                                int c=0;
                                char ans[10]="y";

                                char gifts[5][40]={
                                        "Trip to Dubai",
                                        "A used toothbrush",
                                        "A slimy toad",
                                        "Giant Teddy Bear",
                                        "$500 gift voucher to Costco"
                                };

                                puts("I will say that Santa is a little prankster so do you want to test your luck? (y or n): ");
                                scanf("%s",ans);
                                if(strcmp(ans,"y")==0)
                                {
                                        puts("\nPick a number from 1-5: ");
                                        scanf("%d",&c);
                                        int index=giftSel(c);
                                        if(c==-1)
                                        {
                                                puts("Pick a number from 1-5: ");
                                                scanf("%d",&c);
                                                index=giftSel(c);
                                        }
                                        printf("%s\n",gifts[index]);

                                        if (strcmp(gifts[index],"A used toothbrush")==0)
                                        {
                                                puts("That's plain nasty ewww!\n");
                                        }
                                        if (strcmp(gifts[index],"A slimy toad")==0)
                                        {
                                                puts("I mean... if you kiss it, it might turn into a prince. If not, Disney lied I guess\n");
                                        }
                                        puts("Enjoy your gift... or not\n");
                                }
                                puts("Hope you enjoyed putting smiles on the kids's faces or ripping their hearts out");
                                puts("If any complaints come up, I'm sending the letters straight to you!\n");

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
			case 46: //Ctalebi **************************************
            		{
		        	puts("You choose door 46.");
		                int result = 0;
		                result = room46(name);
		                if (result == -1 && name[26] == '\0')// If player dies and name[] has room,
		                    strcat(name, " Jr."); //their kin takes their place
		                else if (result == 1) //Successful escape
		                    return EXIT_SUCCESS;
		                break;
		        }//******************************************************

			case 47:
			{
				puts("room47");
				puts("You enter Room 47 and find yourself before an altar dedicated to Greek gods. You may choose up to 3 boons.\n");
		                choose_gods(chosenBoons, 3);
		                apply_boons(chosenBoons, 3);
		                room47_conclusion();
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
				printf("You hastily close the door behind you, water crashing against the door.\n"
				"A breath of relief escapes from your lips before you notice an eerie silence.\n"
				"A slow breathy turn reveales a large silhouette, seemingly kneeled down as if paying respect to a fallen king.\n"
				"The only source of light is a gentle flame, steadily burning in the far corner of the room.\n"
				"You slowly step to the right, making sure to stay close to the wall and keeping pace with your steady breathes, making your way to the flame.\n"
				"As you inch closer to the flame, the silence of the room accentuates your breathing, its cadence mimicking that of a trotting horse.\n"
				"You reach the flame and pause for moment, comtemplating your next choice.\n");
				int printAndGetSelection() {
				 printf("Please input a number 1-5 to choose\n"
				"Choices:\n"
				"1. Use Bandages\n"
				"2. Use Rations \n"
				"3. Attack the silhouette\n"
				"4. Check your bag\n"
				"5. Sit down and cry for awhile\n");
				return  getUserChoice();   
				}
				int keepChoosingOrLeave() {
				    printf("Would you like to keep choosing from the options or leave the room?\n (Choose or Leave)");
				    char choice[10];
				    scanf("%s", choice);
				    if (strcmp(choice,"choose")==0||strcmp(choice,"Choose")==0){
				        return printAndGetSelection();
				    }
				    else if (strcmp(choice,"leave")==0||strcmp(choice,"Leave")==0) {
				        printf("You leave the room, hoping the hallway is flushed out now.");
				        return 0;
				    }
				}
				int choice = printAndGetSelection();
				while(choice !=0 ) {
				    
				    switch(choice){
				        case 1: 
				            printf("You pull out bandages from your bag\n");
				            choice = keepChoosingOrLeave();
				            break;
				        case 2:
				            char itemsToUse[5][200] = {"The animal meat was filling.","The concotion whispered \"I hate you\" when opend and tasted foul.","The bread tastes like sand.", "Tastes earthy with a hint of acidity","The fresh berries are a tasty reminder that you need to escape."} ;
				            printf("You use rations from your limited supply\n What do you decide to eat?\n");
				            printf("Please input a number 1-5 to choose\n"
                				"Choices:\n"
                				"1. Dry animal meat\n"
                				"2. A concotion from your Mother in Law, who does not like you. \n"
                				"3. A piece of stale bread that smells of feet\n"
                				"4. A mushroom you found on the journey to this wretched place\n"
                				"5. Some berries from your garden\n");
                			printf("%s", itemsToUse[getUserChoice()]);
                			choice = keepChoosingOrLeave();
				            break;
				        case 3:
				            printf("Your swing pushed through the silhouette; it disappears into the room, leaving you worried.");
                			choice = keepChoosingOrLeave();
				            break;
				        case 4:
				            checkBag();
				            choice = keepChoosingOrLeave();
				            break;
				        case 5: 
				            int randomWaitTime = rand() % 10;
				            printf("You wait for %d seconds before making another choice.", randomWaitTime);
				            choice = keepChoosingOrLeave();
				            break;
				    }
				}
				break;
			}
			case 55:
			{
				puts("room55");
				puts("New addition to my room");
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

//Door #4 Function 
float speedofHonda(float hnd, float tme)
{
    return hnd * tme;
}

 //Method userChoice_door15()
void userChoice_door15(void){
	int options;
        const char* casts[] ={"Fire","Water","Holy","Nature", "Plasma"};

	//Used to determine the number of elements in an array
        int numCasts = sizeof(casts)/sizeof(casts[-1]);
    
     	//variable to hold index value
        int randomIndex;
   
        do
        {

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
                    printf("Exiting back to the first room you found yourself in!\n");
                        break;
                 default:
                        printf("Wrong choice try again!\n");

          }
	}//end do loop
                while(options !=9);
       }//end userChoice_door15 method

int room37ShowOptions(int chosen) {
	int choice = 0;
	
	// show options and return user choice
	printf("Choose One (integers only) - %d Options Left or input zero or a negative number to leave\n", 5-chosen);
	puts("1. Hat      2. Upper      3. Lower      4. Boots      5. Hunger\n");
	scanf("%d", &choice);

	return choice;
}




int hpUpdate(int hp, int update)
{
	hp = hp + update;
	return hp;
}




void printMenu() 
{
    printf("Choose an option:\n");
    printf("1. Fight\n");
    printf("2. Change Weapon\n");
    printf("3. Check Bag\n");
    printf("4. Guard\n");
    printf("5. Run Away\n");
}

void specialRoom25(void){


    char message[] = "\n\nThe room darkens, shadows swallow colors. A clock ticks, filling the silence with anticipation. Darkness creeps in, shrinking the room. "
    "\nA lone candle flickers, its light dimming, fighting the darkness. The room is almost completely dark, the last light swallowed. "
    "\nThe candle's soft glow remains, but fades. Finally, the last light is extinguished. The room is left in absolute darkness, a void where it once was...";
    int i;

    for(i=0; message[i] != '\0'; i++){
        printf("%c",message[i]);
        fflush(stdout);
        usleep(60000);

    }//end of for
    sleep(2);
    char message2[] = "\nIn the absolute darkness, I know I must find a way out. After walking for what feels like an eternity, my foot brushes against something. "
    "\nI reach down and find a body, clad in a broken hazard suit. I check for any identification and find a tag: Riley. I wonder how Riley ended up here."
    "\nI search Riley's body and find a flashlight, inscribed with the words \"the weapon of the darkness\". Thankfully, he had some leftover batteries. "
    "\nRiley also had a gun, loaded with 6 rounds and 12 extra ammo. Whatever Riley faced must be up ahead or somewhere lurking in the darkness."
    "\nI grip the flashlight tighter, its beam cutting through the darkness. The gun feels heavy in my other hand. I know I must continue, must face whatever lies ahead. "
    "\nThe darkness feels oppressive, but I have Riley's flashlight, Riley's gun. I am not unarmed. And so, I press on, stepping carefully over Riley's body and moving deeper into the darkness. "
    "\nThe silence is deafening, the darkness absolute. But I am not alone. I have the light, I have the gun. I have hope. And sometimes, that's all you need to face the darkness.";
    int j;

    for(j=0; message2[j] != '\0';j++){
        printf("%c",message2[j]);
        fflush(stdout);
        usleep(60000);
    }//end of for

    sleep(3);
    char message3[] = "\nThe beam of my flashlight shatters the darkness, revealing two doors in the cave. One is an Aether door, glowing with an ethereal light, and the other is a red door, stark against the cave walls."
     "\nIt's odd to find doors in a cave of darkness, but I can't afford to question it now. Going back isn't an option, not with the labyrinth of 99 rooms behind me. I have to choose a door and keep moving forward."
     "\nAs I stand there, The Aether door continues to glow, its light pulsating in the darkness. It feels like it's calling out to me, inviting me to step through into the unknown. "
     "\nThe red door remains silent, its stark color a contrast against the cave of darkness walls. It offers no promises, no hints of what lies beyond."
     "\nI take a deep breath, steeling myself for the decision. I know I can’t stay here, stuck in indecision. I have to choose and face whatever lies beyond. "
     "\nBut which door? The inviting Aether door, or the silent red door? ";

    int k;

    for(k=0; message3[k] != '\0'; k++){
        printf("%c",message3[k]);
        fflush(stdout);
        usleep(60000);
    }//end of for

    int userInput;
    char term;

    while(1) {
        printf("\nAether Door select 1 or Red Door select 2: ");
        if(scanf("%d%c", &userInput, &term) != 2 || term != '\n') {

            printf("Please enter an integer.\n");
            while(getchar()!='\n'); // clear input buffer
        } else {
            if(userInput > 2 || userInput < 1) {
                printf("Please enter an integer.\n");
                continue;
            }
            else
              break; // valid integer entered
        }
    }
//    printf("\nAether Door select 1 or Red Door select 2: ");
//    scanf("%d",&userInput);
    if(userInput == 1)
        AetherDoor25();
    else
        RedDoor25();


}//end of specialRoom25

void RedDoor25(void){
    sleep(2);
    char message[] = "\n\nI choose the Red Door,as I step into this room it was so bright it felt like stepping outside for the first time. "
    "\nA sudden headache brings me to my knees, and I was plagued with visions of losing consciousness to the darkness. As I recovered, a figure approaches. "
    "\nI call out, and it responds, \"I have been watching you. You're in the void of eternal darkness. I can guide you to freedom if you listen to me\"."
    "\nIntrigued and desperate, I agree to follow the figure's guidance. \nIt hands me a letter that reads, \"You're walking down a path and come to two doors. "
    "The left door leads to a life of prosperity and happiness, and the right door leads to a life of misery and sorrow. Only one leads you out to the next room.\" "
    "After reading, the letter fades away.\nFollowing the figure's directions, I found myself before two doors. "
    "The left door seems to promise everlasting peace, while the right door has an ominous aura of death. "
    "\nI recall the riddle from the letter and begin to wonder which door will lead me out of this room and possibly out of this void? "
    "\nThe peaceful left door or the forbidding right door?";
    int i;

    for(i=0; message[i] != '\0'; i++){
        printf("%c",message[i]);
        fflush(stdout);
        usleep(60000);
    }//end of for

    int userInput;
    char term;

    while(1) {
        printf("\nDoor of life select 1 or Door of death select 2: ");
        if(scanf("%d%c", &userInput, &term) != 2 || term != '\n') {

            printf("Please enter an integer.\n");
            while(getchar()!='\n'); // clear input buffer
        } else {
            if(userInput > 2 || userInput < 1) {
                printf("Please enter an integer.\n");
                continue;
            }
            else
                break; // valid integer entered
        }
    }
    sleep(3);
    if(userInput == 1){

        char message2[] = "\nChoosing the door of prosperity seemed like the safer option, as I turned the knob and opened it, only to be met with a brick wall. "
         "\nIt was a stark reminder of predicament - and I was trapped in a void of darkness, where life and prosperity seemed out of reach.\nWith a sense of resignation, "
         "\nI realized that the only way forward was through the door of death. It was a daunting prospect, but I knew that sometimes, one must face their fears to find the way out. "
         "\nSo, I gathered the courage, as I turned towards the ominous door, ready to face whatever lay beyond. \nAfter all, in a place devoid of life, perhaps death was the only way out.";
        int j;
        for(j=0; message2[j] != '\0'; j++){
            printf("%c",message2[j]);
            fflush(stdout);
            usleep(60000);
        }//end of for
        miserySorrowDoor25(18);
    }
    else{miserySorrowDoor25(18);}

    return;
}//end of RedDoor25;

void miserySorrowDoor25(int Ammo){
    sleep(2);
    char message[] = "\n\nAs I turn the knob, the door swings open with a force that sends it extending far into the distance at an incredible speed. "
     "\nI find myself looking down a long, dark hallway. As I step forward, the hallway seems to darken even more. I flash my light to the left and right, "
     "\nonly to revealed that I was surrounded by the taken.\nMy heart pounds in my chest as I realize the gravity of my situation. I was trapped in a dark hallway with the taken closing in on. "
     "I have to make a decision quickly: do I run, or do I fight?\nRunning might get myself out of immediate danger, but there’s no guarantee of safety further down the hallway. "
     "Fighting, on the other hand, is risky. I was outnumbered, and I don't know how strong the taken are";
    int i;
    for(i=0; message[i] != '\0'; i++){
        printf("%c",message[i]);
        fflush(stdout);
        usleep(60000);
    }

    int userInput;
    char term;

    while(1) {
        printf("\n select 1 to run or select 2 to fight: ");
        if(scanf("%d%c", &userInput, &term) != 2 || term != '\n') {

            printf("Please enter an integer.\n");
            while(getchar()!='\n'); // clear input buffer
        } else {
            if(userInput > 2 || userInput < 1) {
                printf("Please enter an integer.\n");
                continue;
            }
            else
                break; // valid integer entered
        }
    }


    sleep(3);
    if(userInput == 1){
        char message2[] = "\nI recalled the inscription on the flashlight, \"the weapon of darkness\", I shine it towards the shadow figures. "
         "\nThey stagger, but it doesn't seem to affect them much. I needed to get past them someway, I decide to run, using the light to create an opening. "
         "\nAs I ran, one of the figures slashes my back and I fell to the floor. Their voices grow louder in my mind, and I felt a sense of despair."
         "\nJust when I thought it’s over, the figure from the previous room appears, shining a bright light that cleanses the hallway of darkness. "
         "\nThe light seems to heal my pain. The figure tells me, \"Don’t stop now, you need yourself\", before vanishing. "
         "\nI wasn't sure what it mean, but as I gotten back on my feet, I had to continue walking stay here for far longer darkness will take over."
         "\nI reached the door that says \"simply open\". There’s no second door this time. I open the only door and I found myself in a room of reflections as I step into the room of reflections. "
         "\nA signed says \"you might discover something about yourself that you never knew before\"...";
        int j;
        for(j=0; message2[j] != '\0'; j++){
            printf("%c",message2[j]);
            fflush(stdout);
            usleep(60000);
        }
        reflectionDoor25(Ammo);
    }else{
        char message3[] = "\nI recalled the inscription on the flashlight, \"the weapon of darkness\", so using the flashlight, I managed to stagger the shadow figures. "
         "\nHowever, it wasn't enough to stop them. In desperation, I fired my gun and to I was relief, the taken shattered. "
         "\nI quickly realized that the taken could only be affected if you shine the light on them first before shooting. "
         "\nWith this strategy, I managed to eliminate all seven of them, but at the cost of my ammo, leaving me with only nine bullets."
         "\nWith the immediate threat gone, I continued down the hallway, reaching a door with the inscription \"simply open\". "
         "\nThere was no second door this time. so I opened the only door, I found myself in a room of reflections. "
         "\nIt was as if I was looking into a mirror, but instead of my reflection, I saw different versions of myself, each one representing a different path, a different choice...";
        int k;
        for(k=0; message3[k] != '\0'; k++){
            printf("%c",message3[k]);
            fflush(stdout);
            usleep(60000);
        }//end of for

        reflectionDoor25(Ammo-9);
    }

}//end of miserySorrowDoor25

void reflectionDoor25(int Ammo){
    sleep(2);
    char message[] = "\n\nAs I continue to navigate through the labyrinth of my past, each reflection seems to echo with memories, some of which have faded into obscurity. "
      "\nI find myself drawn to one reflection, a mirror of a time when joy was my constant companion. Yet, it also serves as a stark reminder of the times I let my loved ones down, "
      "\nacting out in ways I now regret. This room, a museum of my past, is a stark reminder that my mind is a fortress from which there is no escape. "
      "\nEach reflection is like a chapter in the book of my life, some filled with happiness, others with regret. "
      "\nIt's like being trapped in a dream, a feverish imagination of what it was like to be awake, having never known sleep. "
      "\nIt's as if I’m caught in a paradox, yearning for the blissful ignorance of sleep, yet dreading the eternal slumber that awaits us all. This room of reflections is not just a prison, "
      "\nbut also a teacher. It holds up a mirror to my past, forcing me to confront my actions and learn from them  But rather than being a prison, "
      "\nthis room can also be seen as a catalyst for change. It's a place where I can confront my past, learn from my mistakes, and strive to be a better person. "
      "\nAs I continue walking threw my constant reminder of my past actions, "
      "\nI eventually found two doors in between those doors had a sign one says \" promises of enlightenment and self-discovery\" the other \"path shrouded in mystery, leading into the unknown\"."
      "\nThe door on the top left says \"LightHouse\" and the door on the top right says \"Sanctuary\", "
      "\nsurly both paths deals with the past and it represent a choice that each person must make for themselves, a decision that will shape their future. "
      "\nAnd in this room of reflections, that choice has never been more clear.";
    int i;
    for(i=0; message[i] != '\0'; i++){
        printf("%c",message[i]);
        fflush(stdout);
        usleep(60000);
    }

    int userInput;
    char term;

    while(1) {
        printf("\nLighthouse Door select 1 or Sanctuary Door select 2: ");
        if(scanf("%d%c", &userInput, &term) != 2 || term != '\n') {

            printf("Please enter an integer.\n");
            while(getchar()!='\n'); // clear input buffer
        } else {
            if(userInput > 2 || userInput < 1) {
                printf("Please enter an integer.\n");
                continue;
            }
            else
                break; // valid integer entered
        }
    }

    sleep(3);
    if(userInput == 1){
        char message2[] = "\nThe lighthouse door, a symbol of guidance and safe passage through life's stormy seas, seemed to be the correct choice. As I stepped through, "
        "\nI was instantly transported to an unknown island. In the distance, a lighthouse stood tall, its beacon cutting through the dense fog of darkness that blanketed the island. "
        "\nI believed that the lighthouse was my ticket out of this desolate place... ";
        int j;
        for(j=0; message2[j] != '\0'; j++){
            printf("%c",message2[j]);
            fflush(stdout);
            usleep(60000);

        }
        FinaleLighthouse25(Ammo);
    }else{
        char message3[] = "\nThe Sanctuary Door made absolute sense for a safe house, "
              "\nI want to get out of here quickly for I am losing myself every minute I stay here as I entered the door I got sucked into the depth of darkness. "
              "\nAs the darkness engulfs me, I feel a strange calmness. The fear that once consumed me is now replaced with a sense of determination. "
              "\nI realize that the darkness is not my enemy, but a part of me that I need to embrace. "
              "\nI close my eyes and let the darkness in, feeling it seep into my pores, filling every inch of my being. I am no longer fighting against it, but with it. "
              "\nI open my eyes, and to my surprise, I can see through the darkness. The taken that once terrified me now seem insignificant. I walk forward, each step echoing in the silence. "
              "\nI am not lost, but found. I am not weak, but strong. I am not a victim, but a survivor. The Sanctuary Door was not an end, but a beginning. "
              "\nA beginning of a journey into the unknown, a journey into myself. (Engulfed in the unforgiving darkness, your journey has met an untimely end. "
              "\nThe shadows that you once fought to keep at bay have now taken hold, a stark reminder of the formidable challenges you faced. This is \"The End\")...\n";
        int k;
        for(k=0; message3[k] != '\0'; k++){
            printf("%c",message3[k]);
            fflush(stdout);
            usleep(60000);

        }
      return;
    }
}//end of reflectionDoor25

void FinaleLighthouse25(int Ammo){
    sleep(2);
    char message[] = "\n\nThe lighthouse was a stretch, but there was no time for complaints. I had to keep moving. Along the way, I noticed text levitating near a boulder of rocks. "
       "\nThe text read \"explode\". I wasn't sure why until I accidentally raised my flashlight to see past the darkness. "
       "\nThe text shattered, causing an explosion that made the boulder fall off the island. The lighthouse, as bright as it was, shone where I was standing, eradicating the darkness. "
       "\nIt was then that I realized that to get past this mist, I must find more such texts for the lighthouse to guide me on the right track away from despair.\nThankfully, "
       "with the support of the lighthouse, the taken were immediately shattered. I came across a crate containing a flare gun and at that point, \nI knew this weapon is the strongest against the dark. "
       "It would have been a nice easy walk, however, many taken made it not so possible. I had many near-death experiences, but as long as I stuck with the light of the lighthouse, "
       "\nI knew I would be safe. I finally made it to the door of the lighthouse. As I entered, it seemed like an ordinary lighthouse, just like any other day. "
       "\nBut I heard a calling at the top of the light. I proceeded to walk up the stairs to see a bright door the only door in the searchlight room. It was odd, but I question to enter the door...";
    int i;

    for(i=0; message[i] != '\0'; i++){
        printf("%c",message[i]);
        fflush(stdout);
        usleep(60000);

    }//end of for

    sleep(2);
    char message2[] = "\nThe Final Door: Cabin in the Lake";
    int j;

    for(j=0; message2[j] != '\0'; j++){
        printf("%c",message2[j]);
        fflush(stdout);
        usleep(60000);

    }//end of for

    int userInput;
    char term;

    while(1) {
        printf("\nselect 1 to enter the cabin or select 2 to not enter the cabin: ");
        if(scanf("%d%c", &userInput, &term) != 2 || term != '\n') {

            printf("Please enter an integer.\n");
            while(getchar()!='\n'); // clear input buffer
        } else {
            if(userInput > 2 || userInput < 1) {
                printf("Please enter an integer.\n");
                continue;
            }
            else
                break; // valid integer entered
        }
    }

    if(userInput == 1){
        sleep(3);
        char message3[] = "\n\nI found myself in the cabin, the floor littered with letters that seemed to be manuscripts of events yet to unfold, or perhaps echoes of the past. "
          "\nAs I looked down, I saw a clone of myself being consumed by an encroaching darkness. Suddenly, the sound of televisions turning on filled the room. "
          "\nI turned to see that I was surrounded by screens, each repeating the same cryptic message, \"It’s not a lake, it’s an ocean\".\nThe words echoed in my mind, breaking my resolve. "
          "\nI fell to my knees, the darkness swallowing me whole. But then, I woke up. I was myself again, as if nothing had happened. Yet, the manuscripts were still scattered around, "
          "making the experience feel all too real.\nSuddenly, the cabin began to crumble, revealing the true master of the darkness. I tried to fend it off with my flashlight, but it had no effect. "
          "\nI was left dodging objects possessed by the void, unsure of what to do next. Then, I remembered the flare gun. It had damaged the master of darkness before. I knew what I had to do."
          "\nI fired the flare gun repeatedly, evading the flying objects, until a flash of light appeared. I realized then that this was all a dream, operating on shifting logic. "
          "\n\"It’s a beautiful place\", I told myself. I could rest here, sleep here, and forget about my work. This was my departure.\nBut as I settled into this thought, "
          "I felt a chill run down my spine. The darkness was not yet defeated. The battle was far from over. \nThis was not my departure, but merely the beginning of a new chapter. "
          "A chapter where I would have to face my fears, confront the darkness, and find my way back to the light.\n\n";
        int k;

        for(k=0; message3[k] != '\0'; k++){
            printf("%c",message3[k]);
            fflush(stdout);
            usleep(60000);

        }//end of for

    }else{

        char message3[] = "\n\nPerhaps it was a mistake, or perhaps it was fate. Unprepared to face what lies beyond the door, I find solace in the lighthouse's embrace. "
          "\nThe beacon of light, a symbol of safety, becomes my sanctuary. Freedom, once a tantalizing prospect, now seems like an elusive dream. "
          "\nThe thought of venturing out sends shivers down my spine, and I retreat further into my newfound home."
          "\nThe lighthouse, once a mere structure, now holds my hopes and fears. Its walls, my shield against the unknown; its light, my guiding star in the darkest nights. "
          "\nI've come to realize that maybe freedom isn't about breaking barriers, but about finding peace within them."
          "\nSo, I decide to stay, to quit while I'm ahead. For the lighthouse is no longer just a beacon, it's my home. "
          "\nIt's where I found a different kind of freedom, a freedom that comes from acceptance, from understanding that sometimes, "
          "the safest harbor is found not in the vastness of the sea, but in the warmth of a lighthouse.\nAnd so, I stay. Not because I'm afraid of what lies beyond, "
          "but because I've found something precious within. The lighthouse, is my freedom, and my home.\n\n";
        int k;

        for(k=0; message3[k] != '\0'; k++){
            printf("%c",message3[k]);
            fflush(stdout);
            usleep(60000);

        }//end of for

    }

}//end of Finalelighthouse25(End of the story)

void AetherDoor25(void){
    sleep(2);
    char message[] = "\n\nFeeling an inexplicable pull, I decided to step through the Aether Door. To my surprise, I found myself in an office, seemingly ordinary but eerily deserted. I turned to exit, only to realize that the door was nothing more than a deceptive wallpaper. Confused and slightly upset, I knew I had to figure out where I was."
         "\nThe office was compact, and soon I found myself standing in front of the Director’s office. With a sense of trepidation, I pushed the door open, hoping to find some answers. Instead, I found a man lying lifeless on the floor. His tag identified him as the Director of this office."
        "\nSuddenly, a phone rang, breaking the silence. I hesitated, then picked up. The call was from the Board. They informed me that I was now the Director. The Board was under attack, and they needed me to carry out certain tasks. Unsure but determined, I accepted the responsibility. I was given a Director’s gun, which felt strangely familiar in my hands, as if it was meant for me."
        "\nMy first task was to head to maintenance. As I navigated through the shape-shifting building, I came across a sector elevator with two buttons: one for maintenance and the other for the investigation sector. I found myself at a crossroads. Should I explore the unknown before diving into my task, or should I focus on the task at hand and head straight to maintenance?";
    int i;

    for(i=0; message[i] != '\0'; i++){
        printf("%c",message[i]);
        fflush(stdout);
        usleep(60000);

    }//end of for
    int userInput;
    char term;

    while(1) {
        printf("\nMaintenance Sector select 1 or Investigation Sector select 2: ");
        if(scanf("%d%c", &userInput, &term) != 2 || term != '\n') {

            printf("Please enter an integer.\n");
            while(getchar()!='\n'); // clear input buffer
        } else {
            if(userInput > 2 || userInput < 1) {
                printf("Please enter an integer.\n");
                continue;
            }
            else
                break; // valid integer entered
        }
    }


    if(userInput == 1)
        maintenanceSector25();
    else{
        sleep(3);
        char message2[] = "\n\nI decided to explore the Investigation Sector. I pressed the button and the elevator doors closed, only to open instantly at the location. A sudden headache hit me, and I was flooded with visions of myself battling against shadows from a parallel universe. Shaking off the disorientation, I began to question my decision to be here."
          "\nThe room I entered was a darker, more ominous replica of the previous office. It felt as if the light itself was too afraid to penetrate this darkness. Unseen entities moved around me, their whispers echoing in the silence. Suddenly, I was under attack. Invisible claws slashed at me, leaving me wounded and helpless."
         "\nAs I lay there, a chilling voice echoed, \"How could you leave us so unexpectedly? We were waiting… we needed you… I needed you…\" The accusation in the voice was palpable.(The darkness had claimed me,and I was no more\"The End\")\n";
        int j;

        for(j=0; message2[j] != '\0'; j++) {
            printf("%c", message2[j]);
            fflush(stdout);
            usleep(60000);
        }
     return;
    }

}//end of AetherDoor25
    
void maintenanceSector25(void){
    sleep(2);
    char message[] = "\n\nDeciding to trust the Board, I pressed the button and the elevator doors closed, whisking me away to my destination. My first task was to restore the generator that kept this unknown threat contained within the building. As I walked, I marveled at the sheer size of the facility, large enough to house a nuclear plant.\n"
                     "\n"
                     "My journey began with the coolant pumps, which were closer. Oddly, there were no stairs, forcing me to parkour down. Once there, I encountered hissing figures. With the Director’s gun in hand, I discovered its immense power as it easily dispatched these entities. The control systems indicated that the pumps needed cleaning, leading me into the pipes where I faced a gigantic, moving mold. After a relentless onslaught, I eradicated it and returned to activate the pumps.\n"
                     "\n"
                     "An elevator nearby opened, allowing me to reach the electrical station. It was in decent condition, only needing a power cell. After retrieving one from the main station and completing the task, I wondered if the Board would contact me again.\n"
                     "\n"
                     "Returning to the sector elevator, I noticed a new button labeled \"Research Sector\". It seemed to be a one-way trip, but curiosity got the better of me. I pressed the button, venturing into the research sector, eager to uncover the secrets it held.";
    int i;

    for(i=0; message[i] != '\0'; i++) {
        printf("%c", message[i]);
        fflush(stdout);
        usleep(60000);
    }
    researchSector25();
}//end of maintenanceSector25

void researchSector25(void){
    sleep(2);
    char message[] = "\n\nAs I ventured deeper into the research sector, I was met with a series of strange and fascinating sights. Laboratories filled with bizarre equipment, rooms dedicated to the study of unexplainable phenomena, and archives housing documents on subjects that defied logic.After looking around I found a card poster \"Ten Jacks Ace Six\" was not sure what this meant so I just continued exploring\n"
                     "\n"
                     "I came across a room labeled \'Thresholds and Portals\'. Inside, I found detailed studies on interdimensional travel and the manipulation of reality. It was clear that the researchers here were dealing with forces far beyond our understanding.\n"
                     "\n"
                     "Suddenly, a power of object the projector started filming as I turned around to see, I see two doors appear in the projector. They stood side by side, identical in every way. Each door was marked with a symbol - one had a circle inscribed with intricate patterns, the other bore a square filled with complex geometrical designs.\n"
                     "\n"
                     "I approached the doors, a sense of anticipation filling me. Behind these doors lay the answers to the mysteries of this place, the secrets that the research sector held. But which door should I choose? The circle or the square?";
    int i;

    for(i=0; message[i] != '\0'; i++) {
        printf("%c", message[i]);
        fflush(stdout);
        usleep(60000);
    }

    int userInput;
    char term;

    while(1) {
        printf("\nCircle Door select 1 or Square Door select 2: ");
        if(scanf("%d%c", &userInput, &term) != 2 || term != '\n') {

            printf("Please enter an integer.\n");
            while(getchar()!='\n'); // clear input buffer
        } else {
            if(userInput > 2 || userInput < 1) {
                printf("Please enter an integer.\n");
                continue;
            }
            else
                break; // valid integer entered
        }
    }

    if(userInput == 2){
        containmentSector25();
    }else{
        sleep(3);
        char message2[] = "\n\nChoosing the door marked with the circle, I stepped into what can only be described as an astral maze. As I ventured deeper, the door behind me morphed into a wall, erasing my only known exit. I was trapped.\n"
                         "\n"
                         "Hours turned into days as I searched for an exit, but the maze offered none. It was as if the labyrinth was alive, constantly shifting and changing its form. The once sprawling maze began to contract, transforming into a cubic prison. I was trapped in an eternal cell, a prisoner of the astral maze.\n"
                         "\n"
                         "The maze was an enigma, a mystery that seemed to have no solution. It was a riddle that would stay with me forever, a constant reminder of my eternal imprisonment. As the walls of my cubic prison closed in, I realized that this was my reality now. This was my eternity.\n"
                         "\n"
                         "In the silence of the cube, I heard the echo of my own thoughts, \"This is the end…\" A chilling reminder of my predicament. But even in the face of despair, I held on to a glimmer of hope. For every end is a new beginning, and every mystery, an opportunity for discovery.\n ";
        int j;

        for(j=0; message2[j] != '\0'; j++) {
            printf("%c", message2[j]);
            fflush(stdout);
            usleep(60000);
        }

    }


}//end of researchsector25

void containmentSector25(void){
    sleep(2);
    char message[] = "\n\nUpon choosing the square-marked door, I found myself in a room labeled \'Containment\'. The vastness of the sector was intimidating, and I couldn't help but wonder what secrets were being kept within its walls. As I ventured further, I reached level three where I encountered objects of power. These were ordinary items - glasses, a refrigerator, clocks - yet they radiated an uncanny energy. It was strange to see such commonplace items in containment, but their latent power was palpable.\n"
                     "\n"
                     "Proceeding to level four, I was met with objects corrupted by the hiss. They glowed an ominous red and despite their harmless appearances - an anchor, a controller, even a manuscript - they posed a significant threat. The manuscript was particularly intriguing, it told a tale of darkness, a narrative that seemed to echo the very situation I found myself in.On level five, I discovered a breached containment. The sight of the massive door was daunting, hinting at the magnitude of the threat contained within. As I stepped inside, I was met with an eerie silence, broken only by the echo of my own footsteps. In the center of the room stood a clock tower, its hands frozen in time. The ground around it was littered with lifeless bodies, a grim testament to the power of the entity I was facing. Despite its benign appearance, the clock tower proved to be a formidable adversary. After a fierce battle that tested my limits, I managed to cleanse the clock tower using a ritual. The ritual, a series of complex movements and incantations, seemed to resonate with the energy of the room, drawing out the dark energy from the clock tower. However, the room remained altered, a stark reminder of the battle that had taken place.\n"
                     "\n"
                     "The final level, level six, held a locked room that contained the most dangerous threat. The room was heavily fortified, with multiple security checkpoints leading to the main control room. As I navigated through the security measures, a sense of dread filled me. Peering through the glass of the control room, I was shocked to find my long-lost brother. But he was not the same - his eyes were vacant, his mind corrupted by the hiss. His once familiar features were now foreign, twisted by the dark influence of the hiss. It was a heartbreaking sight,  I had to figure out where it all begin that is when I realized it time to talk to the board. \n"
                     "\n"
                     "Returning to the director’s office, I picked up the ringing phone. The board spoke in a language I didn't know, yet somehow I understood. They mentioned the astral plane and a projector. Was it the same projector I used in the research sector? The realization hit me like a wave. With no time to waste, I returned to the sector elevator. Two new buttons had appeared the Foundation and the Astral Plane. I could explore a bit more, or I could end this now. ";
    int i;

    for(i=0; message[i] != '\0'; i++) {
        printf("%c", message[i]);
        fflush(stdout);
        usleep(60000);
    }

    int userInput;
    char term;

    while(1) {
        printf("\nFoundation select 1 or Astral Plane select 2: ");
        if(scanf("%d%c", &userInput, &term) != 2 || term != '\n') {

            printf("Please enter an integer.\n");
            while(getchar()!='\n'); // clear input buffer
        } else {
            if(userInput > 2 || userInput < 1) {
                printf("Please enter an integer.\n");
                continue;
            }
            else
                break; // valid integer entered
        }
    }

    if(userInput == 1){
        sleep(3);
        char message2[] = "\n\nFeeling a sense of adventure, I decided to explore a bit more. After all, it felt like I was nearing the end of my journey. "
        "\nI pressed the button for the foundation, but as the elevator doors opened, I was met with an unexpected sight. The exit was blocked by red, corrupted shapes. "
        "\nCuriosity piqued, I reached out to touch it, hoping to move it aside. However, it rebounded with such force that I was thrown back against the elevator wall. "
        "\nIt was clear that the foundation was not accessible, at least not yet. Perhaps there were still some mysteries that were meant to remain unsolved, some doors that were meant to stay closed. "
        "\nFor now, I had to go to the Astral plane.";
        int j;

        for(j=0; message2[j] != '\0'; j++) {
            printf("%c", message2[j]);
            fflush(stdout);
            usleep(60000);
        }
        FinaleAstralPlane25();
    }else{
        FinaleAstralPlane25();
    }


}//end of containmentSector25

void FinaleAstralPlane25(void){
    bool test;
    char answerList[4][50] = {"ten","jacks","ace","six"};
    char userGuess[4][50];

    test = guessGame25();

    if(test){
        sleep(2);
        char message2[] = "\n\nAfter several attempts, I finally guessed the correct number and a message appeared on its screen: \"Access to the astral plane granted.\" "
        "\nI was one step closer to unraveling the mysteries of this place.With the game completed and access to the astral plane granted, I was ready to continue my journey."
        "\nAs I stepped into the astral plane, the ground beneath me shattered into fragments, suspended in the air like a surreal jigsaw puzzle. I was in a realm where the laws of physics seemed to be rewritten, and I had to navigate this fragmented landscape.\n"
                         "\n"
                         "Looking around, I noticed that some fragments were larger than others, forming a sort of path through the chaos. I decided to leap from fragment to fragment, using them as stepping stones. Each jump was a leap of faith, but I was determined to traverse this broken terrain.\n"
                         "\n"
                         "As I progressed, I realized that the fragments responded to my thoughts, moving closer to form a bridge when I willed them to. Harnessing this newfound control, I shaped my path, guiding the fragments to create a walkway through the astral plane.\n"
                         "\n"
                         "Despite the initial shock and disorientation, I found a strange beauty in the chaos. The fragments of ground floated against a backdrop of swirling colors, painting a picture of a world untethered from reality.\n"
                         "\n"
                         "After what felt like an eternity, I reached the end of my fragmented path. Before me lay a solid platform, and on it, a door - a door to the unknown. With a deep breath, I stepped forward, ready to face whatever lay beyond."
                         "\nfound myself standing before it, puzzled. The lock was unlike anything I had seen before - it didn't require a key or a password. "
                         "\nInstead, it had four slots, each designed to hold a card name. I looked around, hoping to find some clues. "
                         "\nThe astral plane was full of mysteries, and this door was just another enigma waiting to be solved. "
                         "\nI knew I had to figure out the correct combination of pictures to unlock the door and continue my journey. "
                         "\nThe question was, where would I find these cards or have I came across them already, and what would they depict?"
                         "\nI only have one attempt...";
        int j;

        for(j=0; message2[j] != '\0'; j++) {
            printf("%c", message2[j]);
            fflush(stdout);
            usleep(60000);
        }

        printf("\nEnter the cards in order \"No Values numeric value such as 3 are accepted and no any Integers are accepted as well.\nThese slots only accepts it in a word such as three \"(Remember one attempt only):  ");
        for(int i = 0; i < 4; i++) {
            printf("\nEnter a Card: ");
            scanf("%s", userGuess[i]);
        }


        int searchForMatch = 1;
        for(int i = 0; i < 4; i++) {
            if(strcmp(userGuess[i], answerList[i]) != 0) {
                searchForMatch = 0;
                break;
            }
        }

        //determines secert ending
        if(searchForMatch) {
            char message3[] = "\n\nUpon entering the correct combination, the door opened, revealing a giant upside-down pyramid. It seemed to pulsate with energy, and I could hear what sounded like the Board’s voices emanating from within. Suddenly, everything around me shattered like glass, transforming into a red void. I felt myself falling into the unknown. Just when I thought I would be lost forever, I found myself standing before the Board, my brother standing in front of me.\nMy brother, once my closest ally, was now a stranger. The hiss had corrupted him, twisted his mind until he saw me as an enemy. I knew I had to stop him, but the thought of fighting my own brother was unbearable. The room around us shifted, walls moving and reshaping, forming a pyramid pointing towards the projector - the source of all this chaos."
             "\nI had to navigate through this shifting maze while fending off the hiss. I moved as quickly as I could, I had to parkour over obstacles while fighting off hiss that tried to slow me down. When I finally reached the top, I found myself face-to-face with my brother."
             "\nHe was yelling, \"I hate you\", over and over again. Each word was a dagger to my heart. I loved him, had always protected him, and now he was lost to me. I dodged his attacks, refusing to fight back. Then, a gunshot echoed through the room. I cleansed the projector, stopping the hiss from entering any further. The red faded away, and my brother collapsed to the ground."
             "\nI was alone, my heart heavy with grief. I had never expected any of this to happen. I knew I was not going anywhere. I picked up the gun and…"
             "\nBut instead of ending it all, I found myself walking back to the director’s office. It was where I belonged. It was a place that had shaped me, changed me, made me who I am. The loss of my brother taught me valuable lessons about power, responsibility, and sacrifice. I knew what I had to do next, what changes I needed to make. I didn't feel like going back. I was operating on the shifting logic of a dream, ready to face whatever came next."
             "\nThis was my story, a tale of love, loss, and sacrifice in the face of an unimaginable threat. It was a journey that took me from the mundane to the extraordinary, from the familiar to the unknown. It was a story of courage and determination, of facing fears and overcoming obstacles. It was a story of a bond between siblings, tested and strained, yet unbroken in spirit."
             "\nIn this story, I was not just a bystander, but an active participant. I was the one who stepped through the Aether Door, who faced the hiss, who navigated the shifting walls of the astral plane. I was the one who fought, who struggled, who persevered. I was the one who loved, who lost, and who ultimately made the ultimate sacrifice."
             "\nBut this was not just my story. It was also the story of my brother, of the Board, of the hiss. It was the story of the astral plane, of the shifting walls and the upside-down pyramid. It was the story of every object of power, every corrupted entity, every challenge I faced."
             "\nAnd though my story may have ended, the memories remain. The love for my brother, the battles fought, the mysteries unraveled - they are all a part of me now. They have shaped me, changed me, made me who I am. And for that, I am grateful."
             "\nSo, this was my story. But in many ways, it is also just the beginning. Because every end is a new beginning, every closing door opens a new one, and every story told gives birth to a new one. And so, even as my story ends, a new one begins.";
            int k;

            for(k=0; message3[k] != '\0'; k++) {
                printf("%c", message3[k]);
                fflush(stdout);
                usleep(60000);
            }

       return;
        } else {
            char message4[] = "\n\nUpon entering the correct combination, the door opened, revealing a giant upside-down pyramid. It seemed to pulsate with energy, and I could hear what sounded like the Board’s voices emanating from within. Suddenly, everything around me shattered like glass, transforming into a red void. I felt myself falling into the unknown. Just when I thought I would be lost forever, I found myself standing before the Board, my brother standing in front of me.\n"
                             "\n"
                             "My brother, once my closest ally, was now a stranger. The hiss had corrupted him, twisted his mind until he saw me as an enemy. I knew I had to stop him, but the thought of fighting my own brother was unbearable. The room around us shifted, walls moving and reshaping, forming a pyramid pointing towards the projector - the source of all this chaos.\n"
                             "\n"
                             "I had to navigate through this shifting maze while fending off the hiss. I moved as quickly as I could, I had to parkour over obstacles while fighting off hiss that tried to slow me down. When I finally reached the top, I found myself face-to-face with my brother.\n"
                             "\n"
                             "He was yelling, \"I hate you\", over and over again. Each word was a dagger to my heart. I loved him, had always protected him, and now he was lost to me. I dodged his attacks, refusing to fight back. Then, a gunshot echoed through the room. I cleansed the projector, stopping the hiss from entering any further. The red faded away, and my brother collapsed to the ground."
                             "\nI drop to the ground in tears I did not expected any of this to happened and I could not bear the pain of losing him my only family member left and so I joined him..."
                             "\nThis was my story of a journey I went in an extraordinary realm, a story of love, loss, and sacrifice. I had  faced unimaginable threats, navigated shifting realities, and made the ultimate sacrifice. "
                             "\nDespite the end, the memories and experiences I have gained shaped me, hinting at new beginnings and untold stories yet to unfold.";
            int z;

            for(z=0; message4[z] != '\0'; z++) {
                printf("%c", message4[z]);
                fflush(stdout);
                usleep(60000);
            }
            return;
        }


    }else{
        sleep(2);
        char message5[] = "\n\n The moment I entered the wrong number, the elevator jolted and began to descend at an alarming speed. I was trapped, with no way to stop the elevator or slow its descent. "
        "\nThe walls of the elevator seemed to close in on me as it plunged deeper into the unknown."
        "\nWith each passing second, the elevator moved faster, the hum of its machinery growing louder. "
        "\nI braced myself against the wall, the cold metal offering little comfort. The digital display above the door was a blur of numbers, ticking down faster than I could comprehend."
        "\nAs the realization of my predicament set in, a strange sense of calm washed over me. I was falling, plummeting into the depths of this mysterious place, and there was nothing I could do to stop it. "
        "\nI closed my eyes, accepting my fate, ready to face red abyss...(\"The End\")";
        int m;

        for(m=0; message5[m] != '\0'; m++) {
            printf("%c", message5[m]);
            fflush(stdout);
            usleep(60000);
        }
     return;

    }

}//end of FinaleAstralPlane

bool guessGame25(void){
    srand(time(0)); // Seed the random number generator
    int secretNumber = rand() % 14 + 1; // Generate a random number between 1 and 20
    int userGuess, attempts = 0;

    char message[] = "\n\nAs I pushed the button for Astral plane  suddenly a game appear restricting entry,so I decided to play along to get access to the Astral plane. "
      "\nIt seemed like a simple child's play game, but the stakes were high to save my brother. I had to guess the correct number to gain access to the astral plane. "
      "\nAccording to the tablet-like device, I had only seven attempts.";
    int i;

    for(i=0; message[i] != '\0'; i++) {
        printf("%c", message[i]);
        fflush(stdout);
        usleep(60000);
    }
    char term;

    while(attempts < 7) {
        printf("\nPlease enter an Integer such as 1: ");
        if(scanf("%d%c", &userGuess, &term) != 2 || term != '\n') {

            printf("Please enter an integer.\n");
            while(getchar()!='\n'); // clear input buffer
        }else {


            if (userGuess == secretNumber) {
                printf("\nAccess to the Astral plane granted.\n");
                return true;
            } else if (userGuess < secretNumber) {
                printf("\nToo low! Try again.\n");
            } else {
                printf("\nToo high! Try again.\n");
            }
        }

        attempts++;
    }

    return false;

}//end of guessGame25


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

int car(int num)
{
	printf("And you won a Chevy Stingray!\n");
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

int room23RanSet (int lowerLimit, int upperLimit)
{
  // Seed the random number generator with the current time
  srand (time (NULL));

  // Generate a random number within the specified range
  int randomNum = (rand () % (upperLimit - lowerLimit + 1)) + lowerLimit;

  return randomNum;
}

void loadRoom8(void)
{
  int maxChoices = 5; 
  int choicesMade = 0;
  
  char* actions[] = 
  {
    "A book with a shimmering cover catches your eye. Open it?\n(1. Yes, 2. No)",
    "You notice a dusty tome emitting a faint glow. Approach it? \n(1. Approach, 2. Ignore)",
    "A talking book offers you information but demands a riddle in return. Accept? \n(1. Accept, 2. Decline)",
    "A mysterious book whispers your name. Will you listen? \n(1. Listen, 2. Walk away)",
    "You find a magical pop-up book. Open it to reveal a hidden world. \n(1. Open, 2. Keep closed)"
  };

      while (choicesMade < maxChoices) {
          int actionIndex = rand() % 5;
          printf("You find yourself in an enchanted library. What would you like to do?\n");
          printf("%s\n", actions[actionIndex]);

          int userChoice;
          printf("Enter your choice: ");
          scanf("%d", &userChoice);

          printf("You chose: %d\n", userChoice);

          choicesMade++;

          printf("Do you want to continue exploring the library?\n(1. Yes, 2. No): ");
          scanf("%d", &userChoice);

          if (userChoice != 1) {
              break; 
          }
      }
      printf("Teleporting you back to the flooded room...\n");
    }
//**********************************************************************************************************************
int inputNumber(void){//takes input and if the input is invalid, returns 0
    int input;
    char temp[100];
    if (scanf("%d", &input) != 1) //input is 0 if the IF condition is met
        scanf("%s", temp);
    return input == -1 ? 0 : input; //-1 is a reserved number, not for user access.
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
     * RNG                                      //done
     * pull request before end of last class
     * */
    //variables
    const int SYSRESV = -1;                             //-1 is a reserved number, not for user access.
    int choice = SYSRESV;
    int counter = 0;
    int d20 = (rand() % 20) + 1;                        //used for rolling a d20 result
    int gameArray[] = {5,1,4,2,3};  //Hard values for gameshow
    int inputArray[5];                                  //used to hold gameshow player input
    bool winCondition = true;                           //used to store if the player won the gameshow

    //puts("************************************************************************************************************************\n");

    //code
    printf("Your name is %s\n", name);
    puts("************************************************************************************************************************"
         "You quickly enter what you think to be the next room and close the door behind you as to not let any more water in. As\n"
         "you look around, you notice this is a much smaller space than you had anticipated. There is a singular door with a\n"
         "large dial. Upon closer inspection, you see that you can use it to select from 5 different pictures.\n"
         "The first is a Lion, the second a dragon, the third a rabbit,\n"
         "fourth a snake, and the fifth a fin sticking out of water.\n"
         "The door is otherwise locked and there are no other exits.");

    do {
        puts("*********************************************************************************************************************\n"
             "What choice do you make? (#1-5)");
        choice = inputNumber();
        puts("*********************************************************************************************************************");
        if (choice == SYSRESV) choice = 0;
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
                puts("*********************************************************************************************************************");
                choice = SYSRESV;
                counter = 0;
                do {
                    if (counter == 0)
                        puts("What do you do?");
                    choice = inputNumber();
                    if (counter == 3 || choice == 1){//Stay in place
                        printf("*********************************************************************************************************************"
                               "The source of the footsteps enters the clearing, it is a lion. You dont see any\n"
                               "sense of malice in it's eyes and to your surprise, it greets you.\n"
                               "\"Hello child %s, this must seem strange but this is not the land you know. I must\n"
                               "apologize as you are not needed here yet. I shall be sending you home.\"\n"
                               "He breathes deeply upon you and your vision darkens and as you open your eyes you find\n "
                               "you are at home, in your bed. Was it a dream? You wonder this as you get out of bed\n"
                               "and a mothball falls from your sleeve... \n", name);
                        puts("*********************************************************************************************************************");
                        return 1; //exit head loop
                    }
                    else if (choice == 2){//run
                        puts("*********************************************************************************************************************"
                             "You sprint into the forrest. The thick branches hit against you as you run from\n"
                             "whatever was approaching. You start to hear rushing water but just as you notice, your\n"
                             "foot slips and you fall forward into an opening to an underground river. As you splash\n"
                             "into the freezing water and come up for air you look downriver and see a fork, one going\n"
                             "into open air, and the other into darkness. Sadly the current is too strong and you are\n"
                             "pulled into the dark. You only perceive a few seconds before you hit a hard floor...");
                        puts("*********************************************************************************************************************");
                        //returns to main loop
                    }
                    else {//wrong choice
                        counter++;
                        puts("The footsteps are getting closer...");
                    }
                }while(choice == SYSRESV);
                break;
            }
            case 2://the dragon
            {
                int hp = 10;
                puts("You select the Dragon and open the door. The dungeon continues as a hallway, with a closed door at the end of it.\n"
                     "You notice some of the stones are uneven and decide to proceed forward. Suddenly your perception shifts into\n"
                     "bullet time. You hear something, is that, a dice rolling?");
                if (d20 >= 15)
                    puts("Your perception slowly shifts back into real time as you notice there's holes in the walls.\n"
                         "And they're shooting arrows! You try your best to avoid them and you succeed making it to the door unscathed.");
                else {
                    puts("You come back to your senses and start hearing wooshing sounds. Suddenly you feel a sharp, terrible pain in\n"
                         "your side. You've been hit by a stray arrow and bolt for the door as best you can. You make it there, but\n"
                         "you're looking pretty bloodied.");
                    hp -= 4;
                    //printf("Health now at %d\n", hp); //Used for testing
                }
                puts("*********************************************************************************************************************\n"
                     "You're at the door now and you decide to open it. Inside you spy a red dragon which so far hasn't noticed you.\n"
                     "There is an archway behind it you could possibly escape from.\n"
                     "You can try to sneak past it or run past it, but it will be risky. What do you do?\n"
                     "1: Try to sneak past.\n"
                     "2: Try to run past.");
                choice = inputNumber();
                puts("*********************************************************************************************************************");
                if (choice == 1)//sneak
                {
                    puts("You try your best to sneak past and you hear the familiar sound of a plastic icosahedron.");
                    if (d20 >= 18) {//succeed sneaking
                        puts("You successfully sneak past and make it to the archway. In front of you, you see an open field. \n"
                             "You make your way away from the Dungeon and the Dragon. And try to forget about all that as you head for home.");
                        puts("*********************************************************************************************************************");
                        return 1;
                    } else {//fail sneaking
                        puts("The dragon's sense of smell is too strong and it notices you as you try to give it a wide berth.\n"
                             "It is immediately angered and breathes fire at you. You are not faste enough to get out of the way and\n"
                             "you are consumed");
                        hp -= 9;
                        if (hp < 1) {//if you fail and die
                            puts("You die on the spot, consumed in flames and failure.");
                            puts("*********************************************************************************************************************");
                            return SYSRESV;
                        } else {//if you fail and survive
                            puts("IT BURNS, but you're still alive. Barely. You sprint for the archway as it charges up another volley of flame.\n"
                                 "Just as you make it through the archway and turn the corner, the wall of flame shoots from the archway narrowly\n"
                                 "missing you. As you look out in front of you, you see an open field. \n"
                                 "You make your way away from the Dungeon and the Dragon. And try to forget about all that as you head for\n"
                                 "the nearest hospital.");
                            puts("*********************************************************************************************************************");
                            return 1;
                        }
                    }
                } else//dont sneak
                {
                    puts("You try to run past the dragon as fast as you can, The dragon  notices you as you try to give it a wide berth.\n"
                         "It is immediately angered and breathes fire at you. You are not faste enough to get out of the way and\n"
                         "you are consumed");
                    hp -= 9;
                    if (hp < 1) {//if you fail and die
                        puts("You die on the spot, consumed in flames and failure.");
                        puts("*********************************************************************************************************************");
                        return SYSRESV;
                    } else {//if you fail and survive
                        puts("IT BURNS, but you're still alive. Barely. You sprint for the archway as it charges up another volley of flame.\n"
                             "Just as you make it through the archway and turn the corner, the wall of flame shoots from the archway narrowly\n"
                             "missing you. As you look out in front of you, you see an open field. \n"
                             "You make your way away from the Dungeon and the Dragon. And try to forget about all that as you head for\n"
                             "the nearest hospital.");
                        puts("*********************************************************************************************************************");
                        return 1;
                    }
                }
                //break; //this may need to activate if escape isn't allowed
            }
            case 3://the rabbit
            {
                puts("You select the Rabbit and open the door. The rough stone brick of the previous rooms have stopped\n"
                     "and the next chamber seems to be like the inside of a dimly lit cave. You decide to venture further in and \n"
                     "after a minute of walking you are greeted by the sight of a skeleton lying on the floor, and as your\n"
                     "eyes look up you are treated with a truly horrific scene. There are numerous bodies strewn about, some\n"
                     "covered in blood, some of it... fresh. You realize whatever did this could possibly still be in\n"
                     "the cave. You hear a noise and quickly your eyes dart to the source. It's a white and red rabbit.\n"
                     "Could it be someone's pet? Why was it not also killed? As you wonder, it slowly approaches you.\n"
                     "*********************************************************************************************************************");
                counter = 0;
                do {
                    choice = SYSRESV;
                    puts("What do you do?\n"
                         "1: Let it approach you\n"
                         "2: Turn back");
                    choice = inputNumber();
                    if (counter == 2 || choice == 1)
                    {
                        puts("*********************************************************************************************************************\n"
                             "As the rabbit comes up to you, you notice something about it... The red was not part of\n"
                             "it's fur. Before you can react the rabbit springs up toward your neck and attacks you!\n"
                             "it is a monster of a caliper you cannot kill. It is too fast and too deadly, and has struck\n"
                             "a lethal injury. As you fall to the ground and your vision goes dark you see one last\n"
                             "horrifying detail. One of the bodies has a striking resemblance to your late parent...\n"
                             "*********************************************************************************************************************");
                        return SYSRESV;
                    }
                    else if (choice == 2)
                    {
                        puts("*********************************************************************************************************************\n"
                             "You are cautious about your movements, not trying anything sudden or turning your back\n"
                             "to it. You only take a few steps before you see the rabbit pick up speed. It's not running\n"
                             "yet but you bet you only have a split second before it will. You sprint for the door, but\n "
                             "all that's left is a doorway and the door to the flooded room. You get an idea but it could\n"
                             "be risky. you make it to the closed door and unlatch it to let it fly open shooting a wall\n"
                             "of water through it. it blasts the rabbit and begins flooding the cave. You are taken with\n"
                             "the current. As you tumble and slide through the deluge you see a few of the bodies surface,\n"
                             "carried by the water. Further down the cave you see a fork. The current is taking you and\n"
                             "the bodies in different directions and you could not be happier to separate from them.\n"
                             "After a few turns you see a small drop-off, which you fall over and hit a hard stony floor...\n"
                             "*********************************************************************************************************************");
                    }
                    else
                    {
                        if (counter < 2){
                            puts("the rabbit approaches...");
                            counter++;
                        }
                    }
                } while(choice == SYSRESV);
                break;
            }
            case 4://the snake
            {
                puts("You select the Snake and open the door. As the door behind you shuts and disappears you take\n"
                     "a step and to your surprise, you walk into the set of a game-show hosted by a gorgon. They beckon\n"
                     "you over and you stand behind a podium. They say \"Hello new guest! How would you like to win a\n"
                     "new ride!\" Without letting you answer an array of buttons pops up on your podium each with a\n"
                     "different number on it. \"You have to press them in the correct order to win lets see if you pass!\"");
                puts("*********************************************************************************************************************");
                puts("The buttons before you are labeled 1-5, press them in any order hitting return between each one");
                for (int i = 0; i < 5; i++){
                    inputArray[i] = inputNumber();
                }
                for (int i = 0; i < 5; i++){
                    if (inputArray[i] != gameArray[i]){
                        winCondition = false;
                        break;
                    }
                }
                puts("*********************************************************************************************************************");
                if (winCondition){//if you win the gameshow
                    puts("\"Congratulationsss! You jussst won yourself a brand new ride!\" A curtain rises and shows a\n"
                         "live view of your house as a car is parked in front of it. The host then says\"And there you\n"
                         "have it folksss! We'll ssssssssssee you next Thrusday when we'll have a ssssurprissse guest!\"\n"
                         "The lights go dark and a door opens on the other side of the room. As you walk through you exit\n"
                         "from a large building in a neighborhood you recognize. Time to go home, but it'd sure be nice\n"
                         "if you had your car right about now...");
                    puts("*********************************************************************************************************************");

                    return 1;
                }
                else {//if you lose the gameshow
                    puts("\"Oooh sssssorry, looksss like today is your unlucky day! Time for the dunk tank!\" You see\n"
                         "them reach for a rope and right as they pull it, a trapdoor falls from underneath you sending\n"
                         "you into a small river that drops off into a dark room with a hard floor...");
                    puts("*********************************************************************************************************************");
                }
                break;
            }
            case 5://the fin
            {   puts("You select the Fin in Water and step through the door. As you take your first step, you instantly\n"
                     "realize there's no solid ground beneath you and you fall into water. Now that you're out you can see\n"
                     "your surroundings. You've stepped off a large boat and have fallen into ocean water. But that's not\n"
                     "the worst thing, you realized why the picture from the nob had a fin, there's one circling you...\n"
                     "You duck your head underwater to view your assailant and see it's a shark about 7 feet long.\n"
                     "Maybe you can take him?");
                do{
                    puts("*********************************************************************************************************************");
                    puts("You can try to:\n"
                         "1: Fight\n"
                         "2: Swim away");
                    choice = inputNumber();
                    puts("*********************************************************************************************************************");
                    if (choice == 1) {//fight
                        puts("You ready yourself for a fight, the shark makes one more circle before it comes at you.\n"
                             "It attempts to bite you but you're able to punch it's snout out of the way and jab at it's\n"
                             "gills. The shark, tries again but fails to break your guard. Realizing this is no meal, it\n"
                             "gives up and leaves. Sadly the boat you were on is also long gone and you're in open water.\n"
                             "You look down and realized it's not too deep. There seems to be an underwater building.\n"
                             "Having no better options, you decide to try looking into it. You get a few meters down and\n"
                             "are suddenly sucked down by a current into the building. Light fades, and you land on a\n"
                             "hard stone floor...\n"
                             "*********************************************************************************************************************");
                    } else if (choice == 2) {//run
                        puts("You try to run but the shark attacks you since you are not ready.\n"
                             "You lose the fight and are never heard from again.\n"
                             "*********************************************************************************************************************");
                        return SYSRESV;
                    } else if (counter == 2) {//die
                        puts("You spent too much time deciding and the shark attacks you when you are not ready.\n"
                             "You lose the fight and are never heard from again.\n"
                             "*********************************************************************************************************************");
                        return SYSRESV;
                    } else { //wrong choice
                        puts("The shark is getting closer...");
                        counter++;
                    }
                } while (choice == SYSRESV);
                break;
            }
            default: //fail to chose level 1
            {
                choice = SYSRESV;
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
                         "*********************************************************************************************************************");
                    return SYSRESV;
                }
            }
        }
    } while (choice == 0);
    return 0;
}
//**********************************************************************************************************************


void myRoomThirtyOne(int num)
{
   if(num == 1)
{
   printf("You enter the first gate which you find it leading you into a dark forest were you encounter elves\n");
}
   else if(num == 2)
 {
    int roomRandomNumber = rand() ;
    printf("You enter the second gate were it leads you into a cave were you find  %d  pieces of gold\n", rand());
  }
    else if(num == 3)
 {
     printf("You entered the third gate were you encounter a portal that transports you into another world\n");
  }
      else if(num == 4)
  {
      printf("You entered the fourth gate were it takes you down a room and you find found a hoard of orcs\n");
   }
      else
   {
      printf("You entered the fifth gate were you find yourself into a battle between orcs and elves\n");
   }
}
int giftSel(int c)
{
        //adjusts the index to get the right gift
        if(c>=1 && c<=5)
        {
                return c-1;
        }
        else
        {
                return -1;
        }

}

void choose_gods(int *choices, int maxChoices) {
    printf("Choose your gods for their boons:\n1. Zeus\n2. Poseidon\n3. Athena\n4. Ares\n5. Apollo\n");

    int choiceCount = 0;

    while(choiceCount < maxChoices) {
        printf("Choice %d: ", choiceCount + 1);
        scanf("%d", &choices[choiceCount]);

        if(choices[choiceCount] < 1 || choices[choiceCount] > 5) {
            printf("Invalid choice. Please select a number between 1 and 5.\n");
            continue; 
        }

        choiceCount++; 
    }
}

void apply_boons(int *choices, int numChoices) {
    for(int i = 0; i < numChoices; i++) {
        if(choices[i] >=1 && choices[i] <= 5){
            random_event(choices[i]);
        } 
    }
}

void random_event(int godChoice) {
    // Seed the random number generator with the current time
	int x = rand() % 10 + 1;

    const char *gods[6] = {"none", "Zeus", "Poseidon", "Athena", "Ares", "Hermes"};
    printf("You received a boon from %s.\n", gods[godChoice]);

    switch(x) {
        case 1: printf("All your damage causes chain lightning.\n"); break;
        case 2: printf("Your attacks knockback enemies with a tidal effect.\n"); break;
        case 3: printf("A holy shield will protect you.\n"); break;
        case 4: printf("Your damage has spiked with a blade rift.\n"); break;
        case 5: printf("You can now dash twice with the wind of Hermes.\n"); break;
		case 6: printf("Your dash makes you sturdy and invunerable.\n"); break;
		case 7: printf("The god punishes you with bleed effect for choosing the wrong path.\n"); break;
		case 8: printf("You deal more damage but also take a small portion of the damage.\n"); break;
		case 9: printf("Your dash deals CRITICAL DAMAGE.\n"); break;
		case 10: printf("This god dislikes you, you don't get any boon.\n"); break;
    }
}

void room47_conclusion() {
    printf("Empowered by the gods' boons, you feel ready for new adventures. As you exit Room 47 ...\n");
}

void room44(void){
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
                                        printf("The man in the middle says good game and thanks you for playing and points you towards the stairs explaining it's the exit.\n");                                        printf("\nNow especially done with these people, you go up the stairs and through a door that almost blinds you with a bright light as you\n");
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
                        printf("Suddenty, you hear loud thuds and an unfamiliar bestial roar muffled behind the bulkhead door to your right.\n");
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
                                printf("Before you could even open your eyes, you feel its presence over you and hear it's haunting cry one last time...\nbut then..\n\n.");
                                separator();
                        }
                        break;
        }
}
void separator(void){
        printf("===================================================================================================================================\n");
}

// Room 12 Function
void printMessage(int result)
{
	switch(result)
	{
		case 0:
			puts("You lose...");
			puts("You are now being returned to the dark room... Goodbye!");
			puts(".");
			puts(".");
			puts(".");
			puts(" ");
			break;

		case 1:
			puts("You win!");
			puts("You are now being returned to the dark room... Goodbye!");
			puts(".");
                        puts(".");
                        puts(".");
			puts(" ");
			break;
	}
}
