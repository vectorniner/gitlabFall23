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
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>

// Function prototype
void separateFunction();
void room38Feature();
int main(int argc, char *argv[]) {
    int choice = 0;
    char name[30] = "bob";

    srand(time(NULL));

    printf("Please enter your name: ");
    scanf("%s", name);

    printf("Hello %s welcome to the RPG Game!\n", name);

    while (choice != 99) {
        puts("You find yourself in a dark room and you are not sure how you got here.");
        puts("As you look around you see the room has 55 doors, each labeled with a number.");
        puts("The room starts filling with water, and you must choose a door to open or you will likely drown.");
        puts("You may quit anytime by selecting option 99.");
        puts("What door do you choose?");
        scanf("%d", &choice);

        switch (choice) {
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

                        case 38: // Modified for room 38
                        {
                               puts("Welcome to room 38!");
                               room38Feature();
                               // Additional functionality for room 38
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
                                puts("You have escaped.\n");
                                break;
                        }
                        default:
                        {
                                 puts("Invalid choice.\n");
                        }
                        }
                        }

                                puts("Game Over\n");
                                return EXIT_SUCCESS;
                        }


// Function definition for Room 38 feature
void room38Feature() {
    int userChoice;
    const char *menu[] = {
        "Explore the mysterious artifact.",
        "Talk to the ancient wizard.",
        "Inspect the strange markings on the wall.",
        "Search for hidden passages.",
        "Leave the room."
    };

    do {
        printf("Room 38 Feature Menu:\n");
        for (int i = 0; i < 5; ++i) {
            printf("%d: %s\n", i + 1, menu[i]);
        }
        printf("Enter your choice (1-5): ");
        scanf("%d", &userChoice);

        switch (userChoice) {
            case 1:
                printf("You discover a glowing artifact with unknown powers.\n");
                break;
            case 2:
                printf("The ancient wizard reveals secrets of the room's history.\n");
                break;
            case 3:
                printf("Upon closer inspection, the markings seem to be a cryptic message.\n");
                break;
            case 4:
                printf("You search for hidden passages but find none.\n");
                break;
            case 5:
                printf("You decide to leave Room 38.\n");
                break;
            default:
                printf("Invalid choice. Please choose again.\n");
        }
    } while (userChoice != 5);
}













































