//gpoppe room 55
//ctalebi 46
//MattLira room25


#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>

//Start of RED Door Series25
void specialRoom25();
void AetherDoor25();
void RedDoor25();
void miserySorrowDoor25(int Ammo);
void reflectionDoor25(int Ammo);
void FinaleLighthouse25(int Ammo);
//End of RED Door Series

//start of Aether Door Series25
//specialRoom25
void maintenanceSector25();
void researchSector25();
void containmentSector25();
bool guessGame25();
void FinaleAstralPlane25();
//end of Aether Door Series

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
		}//end of switch
	}//end of while
	puts("Game Over");
	return EXIT_SUCCESS;


}//end of main
 


void specialRoom25(){


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

void RedDoor25(){
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

void AetherDoor25(){
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

void maintenanceSector25(){
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

void researchSector25(){
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

void containmentSector25(){
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

void FinaleAstralPlane25(){
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

bool guessGame25(){
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











































