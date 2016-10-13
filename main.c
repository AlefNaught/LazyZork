#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include "Commands.h"

int main(void){
	/* 
	WHAT: The main function.
	DOES: Your mom LOL
	*/

	char *cName;
	char *usrCmd;
	int cAge;
	void lvl_ousFactory(void);
	void plyCmds(void);
	void Help(void);
	int cmdCmp();

	printf("What's your name?: ");
		cName = malloc((128) * sizeof(char)); // allocating memory of cName
			if(cName == NULL){
		return 1;
	}

		scanf("%127s", cName);
		printf("How old are you %s?: ", cName);
		scanf("%i", &cAge); //address of cAge
		printf("%s is %i years old.\n", cName, cAge);

	//end of character creation.
	lvl_ousFactory();
	Help();
	//Look();
	//plyCmds();

	while (1){

		usrCmd = malloc((32) * sizeof(char));

		scanf("%s", usrCmd);

		if(cmdCmp(usrCmd, "quit")){
			break;
		}
		else if(cmdCmp(usrCmd, "help")){
			Help();
		}
		else{
			puts("Unknown Command\n");
		}
	}



	return 0;
	

}//end main


void Help(void){

	char *plystdCmds[] = {"help ", "look ", "goto ", "enter ", "desc ", "take ", "drop ", "leave\n"};	

	puts("Commands below.\n");
	for(int i = 0; i < 8; i++){
		puts(plystdCmds[i]);
	}
}


 void plyCmds(void){
 	

 		
	} //end plyCmds


void lvl_ousFactory(void){

	//Move this shit to another file.


	puts("\nYou're standing in an open field.");
	puts("\nThere is a large abandoned industrial building to your left.");
	puts("\nAhead of you is nothing but dead grass leading to decaying forest.\n");



	} //end lvl_ousFactory

	int cmdCmp(char *plyInp, char *plyHelp){

		//what the user input is the same as what we're comparing it to.

		return strcmp(plyInp, plyHelp) == 0;


}
