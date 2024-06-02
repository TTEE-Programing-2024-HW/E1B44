#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int a = 0, b = 0, c = 0, i = 0, p = 0;
	double agv = 0;
	char m, f, l[10];
	typedef struct 
	{	
		char name[9];
		char id[12];
		int mat;
		int tel;
		int eng;
		}man;
	man k[10]={
	{"王電機","000001",37,65,79}
	,{"吳資工","000002",57,78,52}
	,{"周機材","000003",45,75,24}
	,{"杜化工","000004",27,84,68}
	,{"林工設","000005",62,64,65} 
	,{"裡生育","000006",54,45,43}
	,{"無依阿","000007",04,12,34}
	,{"安ㄟ屋","000008",71,54,34}
	,{"批喔五","000009",24,23,65}
	,{"ㄤ低而","000010",78,95,56}
	};
	printf("POV:\n");
	printf("當你發現程式設計實驗期末考的考題超簡單\n\n我的內心:\n\n");
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
	printf("      |                  |      /		我的表情: \n");
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
	
	printf("請輸入密碼: ");
	do{
		scanf("%d", &a);
		if(a != 2024 && i == 2){
			printf("密碼錯誤3次%c\n", '\a');
			return 0;
		}
		else if(a != 2024 && i != 2){
			printf("密碼錯誤%d次 請重新輸入\n", i+1);
		}
		else if(a == 2024){
			printf("密碼正確! 歡迎!\n");
			break;
		}
		i++;
	}while(a != 2024);
	system("PAUSE");
	fflush(stdin);
	system("CLS");
	do{
		printf("---------[Grade System]---------\n");
		printf("|  a. Enter student grades     |\n");
		printf("|  b. Display student grades   |\n");
		printf("|  c. Search student grades    |\n");
		printf("|  d. Grade ranking            |\n");
		printf("|  e. Exit system              |\n");
		printf("--------------------------------\n");
		printf("請輸入你的選項 : ");
		scanf("%c", &m);
		system("PAUSE");
		system("CLS");
		b = m;
		if(b == 97 || b == 65){
		fflush(stdin);
			printf("請輸入一個數(5 ~ 10) : ");
			scanf("%d", &c);
			printf("姓  名    ID    數學     物理    英文\n");
			for(i = 0; i < c; i++){
				printf("%s  %s    %d    %d	%d\n",k[i].name,k[i].id,k[i].mat,k[i].tel,k[i].eng);
			}
			system("PAUSE");
			system("CLS");
		}
		if(b == 98 || b == 66){
			printf("姓  名    ID    數學     物理    英文   平均\n");
			for(i = 0; i < 10; i++){
				agv = (k[i].mat + k[i].tel + k[i].eng)/3;
				printf("%s  %s    %d    %d	%d   %.1f\n",k[i].name,k[i].id,k[i].mat,k[i].tel,k[i].eng,agv);
			}
			system("PAUSE");
			system("CLS");
		
		}
		if(b == 99 || b == 67){
			printf("請輸入名子 : ");
			scanf("%s", &l);
			for(i = 0; i < 10; i++){
				if(strcmp(l , k[i].name) == 0)
				printf("%s  %s    %d    %d	%d   %.1f\n",k[i].name,k[i].id,k[i].mat,k[i].tel,k[i].eng,agv);
				p++;
			}
			if(p == 0){
				printf("沒有這個人");
			}
		}
		if(b == 101 || b == 69){
			printf("確定要離開嗎?(y/n)\n");
			scanf("%c", &f);
			b = f;
		}
		if(b == 121 || b == 86){
			break;
		}
	}while(b != 121 || b != 86);	
}
