#include<stdio.h> 
#include<stdlib.h>
#include<time.h>
void seat(char seating[10][10]){
    int ROW,COL,i;
    seating[0][0]='\\';
    for(i=1;i<=9;i++){
        seating[i][0]='0'+10-i;
        seating[0][i]='0'+i;
    }
    for(ROW=0;ROW<10;ROW++){
        for(COL=0;COL<10;COL++){
            printf("%c",seating[ROW][COL]);
        }
        printf("\n");
    }
}
int main(){
	int password,times=0,i,j,ROW,COL,seats,attempt,usable=1;
	char word,respond;
	char seating[10][10];
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
	
	do{
		printf("Enter Password: ");
		scanf("%d",&password);
		if(password!=2024){
			times++;	
			printf("error %d times\n",times);
		}
		if(times==3){
			return 0;
		} 
	}while(password!=2024); 
	printf("Password Correct! Welcome!");

	system("pause");
	system("cls");

	for(ROW=1;ROW<=9;ROW++){
        for(COL=1;COL<=9;COL++){
            seating[ROW][COL]='-';
        }
    }
    srand(time(NULL));										
    for(i=1;i<=10;i++){
    	if(seating[ROW][COL]=='*'){
    		i=i-1;
    		continue;
		}
		else{
			seating[rand()%9+1][rand()%9+1]='*';
		}
    }

	while(1){
	printf("+=+=+=+=+=[BookingSystem]=+=+=+=+=+\n");
	printf("|  a. Available seats             |\n");
	printf("|  b. Arrange for you             |\n");
	printf("|  c. Choose by yourself          |\n");
	printf("|  d. Exit                        |\n");
	printf("+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+\n");

	fflush(stdin);
	
	printf("please enter word(a, b, c or d): ");
	scanf("%c",&word);
	
	if(word=='A'||word=='a'){
  	  system("cls");								
  	  for(ROW=0;ROW<10;ROW++){
		    for(COL=0;COL<10;COL++){
		        if(seating[ROW][COL]=='@'){
				seating[ROW][COL]='*';
				}
			}
		}
	seat(seating);
	system("pause");							
	system("cls");								
	}

	else if(word=='B'||word=='b'){
            system("cls");					
            while(1){
            	printf("How many seats you need(1~4)?\n");
	            fflush(stdin);
	            scanf("%d",&seats);							
	            if(seats>=1&&seats<=4){
	                if(seats<=3){
	                    while(1){
	                        int row=rand()%9+1;
	                        int col=rand()%(10-seats);
	                        for(i=col;i<col+seats;i++){
	                            if(seating[row][i]=='*'){
	                                usable=0;
	                                break;
	                            }
	                        }
	                        if(usable){
	                            for(i=col;i<col+seats;i++){
	                                seating[row][i]='@';
	                            }
	                            break;
	                        }
	                    }
	                }
					else{
	                    int found=0;
	                    for(attempt=0;attempt<100;attempt++){
	                        int row=rand()%9+1;
	                        int col=rand()%(10-seats);
	                        int usable=1;
	                        for(i=col;i<col+seats;i++){
	                            if(seating[row][i]=='*'){
	                                usable=0;
	                                break;
	                            }
	                        }
	                        if(usable){
	                            for(i=col;i<col+seats;i++){
	                                seating[row][i]='@';
	                            }
	                            found=1;
	                            break;
	                        }
	                    }
	                    if(!found){
	                        while(1){
	                            int row=rand()%9+1;
	                            int col=rand()%9+1;
	                            int usable=1;
	                            for(i=0;i<2;i++){
	                                for(j=col;j<col+2;j++){
	                                    if(seating[row+i][j]=='*'){
	                                        usable=0;
	                                        break;
	                                    }
	                                }
	                                if(!usable)break;
	                            }
	                            if(usable){
	                                for(i=0;i<2;i++){
	                                    for(j=col;j<col+2;j++){
	                                        seating[row+i][j]='@';
	                                    }
	                                }
	                                break;
	                            }
	                        }
	                    }
	                }
	            }
	            seat(seating);
	            printf("satisfied with this seat??");
	            scanf(" %c",&respond);
                fflush(stdin);
                if(respond=='y'||respond=='Y'){
                    system("cls");
                    break;
                }
				else if(respond=='n'||respond=='N'){
                    system("cls");
                    printf("Please enter again\n");
                    for(ROW=0;ROW<10;ROW++){
                    	for(COL=0;COL<10;COL++){
                    		if(seating[ROW][COL]=='@'){
		                    	seating[ROW][COL]='-';
							}
						}
					}
                    continue;
                }
                else{
                	printf("Error,please enter again");
                	continue;
				}
			}
            for(ROW=0;ROW<10;ROW++){
	            for(COL=0;COL<10;COL++){
	                if(seating[ROW][COL]=='@'){
					seating[ROW][COL]='*';
					}
				}
			}
            system("pause");
            system("cls");
        }
       
	else if(word=='C'||word=='c'){
            system("cls");
            seat(seating);
            while(1){
                printf("Please enter the seat you choose(ROW-COL)\n");
                if(scanf("%d-%d",&ROW,&COL)!=2){
                    printf("Invalid input, please enter again\n");
                    fflush(stdin);
                    continue;
                }
                fflush(stdin);
                if(ROW>=1&&ROW<=9&&COL>=1&&COL<=9){
                    if(seating[10-ROW][COL]=='-'){
                        seating[10-ROW][COL]='@';
                        printf("Keep choicing? (y/n)\n");
                        scanf("%c",&respond);
                        fflush(stdin);
                        if(respond=='y'||respond=='Y'){
                            continue;
                        }
						else if(respond=='n'||respond=='N'){
                            seat(seating);
                            for(ROW=0;ROW<10;ROW++){
	           	 				for(COL=0;COL<10;COL++){
					                if(seating[ROW][COL]=='@'){
									seating[ROW][COL]='*';
									}
								}
							}
                            system("pause");
                            break;
                        }
						else{
                            printf("Please enter again\n");
                        }
                    }
					else{
                        printf("Invalid seat or seat has been selected, please enter again\n");
                    }
                }
				else{
                    printf("Invalid seat or seat has been selected, please enter again\n");
                }
            }
            system("cls");
        } 
		
	else if(word=='D'||word=='d'){
            printf("Continue? (y/n)\n");
            while(1){
                scanf(" %c",&respond);
                fflush(stdin);
                if(respond=='y'||respond=='Y'){
                    system("cls");
                    break;
                }else if(respond=='n'||respond=='N'){
                    system("cls");
                    return 0;
                }
            }
        }
		else{
            printf("Error, please enter a,b,c or d\n");
            system("pause");
            system("cls");
        }   
	}
}
//這次的作業真的超級難，我這次有上網搜尋方式解決這次的作業，不然感覺起來我會做不出來XD 
