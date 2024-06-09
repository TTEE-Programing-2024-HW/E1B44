#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int a = 0, b = 0, c = 0, i = 0, k = 0, j = 0, l = 0, p = 0, q = 0;
	char f, m;
	printf("\n");
	printf("\n\n");
	printf("             ________\n");
	printf("            /  .    / \n");
	printf("           /       / \n");
	printf("          /       / \n");
	printf("         /       / \n");
	printf("        /  .    / \n");
	printf("　　　 /       /           /\\ \n");
	printf("      |     /\\/           / / \n");
	printf("      |    |             / / \n");
	printf("      |    |            / / \n");
	printf("      |    \\           / / \n");
	printf("      |     \\_________/  | \n");
	printf("      |                  | \n");
	printf("      |                  |　    #@) \n");
	printf("      |                  |      /	\n");
	printf("      |    #@)            \\    / \n");
	printf("      |     /              \\  /  　　　_______________  \n");
	printf("      |    /                \\/       /                \\ \n");
	printf("      | / /                  \\      /                  \\ \n");
	printf("      |/ /                    \\    /           .     . / \n");
	printf("      /\\/                      \\  /        -----------/ \n");
	printf("     / /\\                       \\/                 | \n");
	printf("    / /  \\                      |                  | \n");
	printf("    |/    \\                     |                   \\ \n");
	printf("           \\                    |       \\　　　　 /　| \n");
	printf("            \\                   |        \\  　   /　 | \n");
	printf("             \\                  |         \\     /　　| \n");
	printf("             |                  |          \\   /　　　\\ \n");
	printf("             |                  |           @#@        | \n");
	printf("             |                  \\                      | \n");

	system("PAUSE");
	system("CLS");
	
		printf("Please enter the password: ");
	do{
		scanf("%d", &a);
		if(a != 2024 && i < 2){
			printf("Wrong password %d times\n", i+1);
			printf("Please enter the password again: ");
		}
		if(i == 2){
			printf("Password wrong to many time!");
			printf("%c", '\a');
			return 0;
		}
		i++;
	}while(a != 2024);
	fflush(stdin);
	do{
		a = 0, b = 0, c = 0, i = 0, k = 0, j = 0, l = 0, p = 0, q = 0;
		fflush(stdin);
		printf("----------------------------------\n");
		printf("|  a. Draw a right triangle      |\n");
		printf("|  b. Show multiplication table  |\n");
		printf("|  c. END                        |\n");
		printf("----------------------------------\n");
		printf("Please enter your choise: ");
		scanf("%c", &f);
		b = f;
		

		system("CLS");
		
		
		
		if(b == 65 || b == 97){
			do{
				fflush(stdin);
				printf("Please enter a word(a~n): ");
				scanf("%c", &m);
				k = m;
				if(k >= 97 && k <= 110){
					l = k - 96;
					for(i = l; i > 0; i--){
						for(j = 1; j < i; j++){
							printf(" ");
						}
						for(q = j; q <= l; q++){
							printf("%c", 96 + q);
						}
						printf("\n");
					}
				}
				else
					printf("Wrong answer!!!Please enter again!\n");
			}while(k < 97 || k > 110);
			system("PAUSE");
			system("CLS");
		}
		
		if(b == 66 || b == 98){
			fflush(stdin);
			do{
				printf("Please enter a number: ");
				scanf("%d", &k);
				if(k >= 1 && k <= 9){
					for(i = 1; i <= k; i++){
						for(j = 1; j <= k; j++){
							printf("%2d*%d=%2d ", i, j, i*j);
						}
						printf("\n");
					}
				}
				else
					printf("Wrong answer!!!Please enter again!\n");
			}while(k < 1 || k > 9);
			system("PAUSE");
			system("CLS");
		}
		
		if(b == 67 || b == 99){
			fflush(stdin);
			do{
			printf("Continue? (y/n) ");
			scanf("%c", &f);
			c = f;
			if(c == 89 || c == 121){
				fflush(stdin);
				break;
			}
			if(c == 78 || c == 110){
				printf("Goodbye~");
				return 0;
			}
			if(c != 89 || c != 121 || c != 78 || c != 110){
				printf("Wrong answer!!! Please try again\n");
				fflush(stdin);
			}
			
			}while(c != 89 || c != 121);
			system("CLS");
		}
		
	}while(b != 78 || b != 110);
} 
//這次的作業我花最的時間的是A的那裏，因為身邊沒有紙筆所以只能頻空想數據，但是有時候會因為在打程式或想一些事情而忘記 
