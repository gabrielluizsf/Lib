#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <time.h>
#include "../lib/lib.h"  // "" == local lib 

#define ISIZE   100      // arbitrarily large

using namespace lib;
 
   char userinput[ISIZE+1] = "";
int main(int argc, char** argv) {
	while(1){
	printf(" =>");
    gets(userinput);
    if(strcmp(userinput,"version")==0){
			     system("cls");
			     printf("\n\nMy First LIB\n\nCopyright (c) 2021 Gabriel Luiz\n\nMIT License\n\n");
			     version();
                   printf("\n\n===================================================================================\n");
                       printf("\nMy Creator is  https://github.com/GabrielLuizSF \n\n");
                             printf("===================================================================================\n");
			
		}  else if(strcmp(userinput,"")==0){
			system("cls");
			printf("void not available \n");
		}else{
			system("cls");
	   	printf("\n[bot]??????\n\n\n[ERROR not available  %s ]\n\n\n",userinput);
	   }
		
		
	}

           
	return 0;
}