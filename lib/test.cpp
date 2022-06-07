#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <time.h>
#include "lib.h"  // "" == local lib 
using namespace lib;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
char userinput [200000000];
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