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
	{"���q��","000001",37,65,79}
	,{"�d��u","000002",57,78,52}
	,{"�P����","000003",45,75,24}
	,{"���Ƥu","000004",27,84,68}
	,{"�L�u�]","000005",62,64,65} 
	,{"�̥ͨ|","000006",54,45,43}
	,{"�L�̪�","000007",04,12,34}
	,{"�w����","000008",71,54,34}
	,{"��᤭","000009",24,23,65}
	,{"���C��","000010",78,95,56}
	};
	printf("POV:\n");
	printf("��A�o�{�{���]�p��������Ҫ����D�W²��\n\n�ڪ�����:\n\n");
	printf("             ________\n");
	printf("            /  .    / \n");
	printf("           /       / \n");
	printf("          /       / \n");
	printf("         /       / \n");
	printf("        /  .    / \n");
	printf("�@�@�@ /       /           /\\ \n");
	printf("      |     /\\/           / / \n");
	printf("      |    |             / / \n");
	printf("      |    |            / / \n");
	printf("      |    \\           / / \n");
	printf("      |     \\_________/  | \n");
	printf("      |                  | \n");
	printf("      |                  |�@    #@) \n");
	printf("      |                  |      /		�ڪ���: \n");
	printf("      |    #@)            \\    / \n");
	printf("      |     /              \\  /  �@�@�@_______________  \n");
	printf("      |    /                \\/       /                \\ \n");
	printf("      | / /                  \\      /                  \\ \n");
	printf("      |/ /                    \\    /           .     . / \n");
	printf("      /\\/                      \\  /        -----------/ \n");
	printf("     / /\\                       \\/                 | \n");
	printf("    / /  \\                      |                  | \n");
	printf("    |/    \\                     |                   \\ \n");
	printf("           \\                    |       \\�@�@�@�@ /�@| \n");
	printf("            \\                   |        \\  �@   /�@ | \n");
	printf("             \\                  |         \\     /�@�@| \n");
	printf("             |                  |          \\   /�@�@�@\\ \n");
	printf("             |                  |           @#@        | \n");
	printf("             |                  \\                      | \n");

	system("PAUSE");
	system("CLS");
	
	printf("�п�J�K�X: ");
	do{
		scanf("%d", &a);
		if(a != 2024 && i == 2){
			printf("�K�X���~3��%c\n", '\a');
			return 0;
		}
		else if(a != 2024 && i != 2){
			printf("�K�X���~%d�� �Э��s��J\n", i+1);
		}
		else if(a == 2024){
			printf("�K�X���T! �w��!\n");
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
		printf("�п�J�A���ﶵ : ");
		scanf("%c", &m);
		system("PAUSE");
		system("CLS");
		b = m;
		if(b == 97 || b == 65){
		fflush(stdin);
			printf("�п�J�@�Ӽ�(5 ~ 10) : ");
			scanf("%d", &c);
			printf("�m  �W    ID    �ƾ�     ���z    �^��\n");
			for(i = 0; i < c; i++){
				printf("%s  %s    %d    %d	%d\n",k[i].name,k[i].id,k[i].mat,k[i].tel,k[i].eng);
			}
			system("PAUSE");
			system("CLS");
		}
		if(b == 98 || b == 66){
			printf("�m  �W    ID    �ƾ�     ���z    �^��   ����\n");
			for(i = 0; i < 10; i++){
				agv = (k[i].mat + k[i].tel + k[i].eng)/3;
				printf("%s  %s    %d    %d	%d   %.1f\n",k[i].name,k[i].id,k[i].mat,k[i].tel,k[i].eng,agv);
			}
			system("PAUSE");
			system("CLS");
		
		}
		if(b == 99 || b == 67){
			printf("�п�J�W�l : ");
			scanf("%s", &l);
			for(i = 0; i < 10; i++){
				if(strcmp(l , k[i].name) == 0)
				printf("%s  %s    %d    %d	%d   %.1f\n",k[i].name,k[i].id,k[i].mat,k[i].tel,k[i].eng,agv);
				p++;
			}
			if(p == 0){
				printf("�S���o�ӤH");
			}
		}
		if(b == 101 || b == 69){
			printf("�T�w�n���}��?(y/n)\n");
			scanf("%c", &f);
			b = f;
		}
		if(b == 121 || b == 86){
			break;
		}
	}while(b != 121 || b != 86);	
}
