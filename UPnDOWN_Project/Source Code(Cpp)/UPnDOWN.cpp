/* �� ������Ʈ��(������) 2019�� 03�� 10��, ���� KimJH-Hanul(Github)�� ������ ������Ʈ�Դϴ�.
   �� ������Ʈ�� ���� ������ ����� UPnDOWN.cpp�� �ִ� ���� ���� 
   What is this Project?(KR).md�� �������ּ���.*/ 

#include <stdio.h>
#include <windows.h>//Sleep()
#include <stdlib.h>//rand() ,srand()
#include <time.h>//time()

int main(){
	
	char Pname[] = "";
	
	printf("����������������������������������������������������������������������\n"); 
	printf("     U P  &  D O W N  G A M E !     \n\n");
	printf("        made by KimJH-Hanul         \n");
	printf("����������������������������������������������������������������������\n\n\n");
	Sleep(2000);
	
	printf("First, What your name? (Please type your name.)\nMy name is : ");
	scanf("%s", &Pname);//�̸� �Է�  
	Sleep(2000);
	
	printf("\n\nHello! %s, let's play the game!",Pname);
	Sleep(2000);
	
	printf("\n\nI will randomly choose a number from 1 to 10...\n\n");
	int ranNum = 0;
	srand((unsigned)time(NULL));//�ߺ� ���� ������ ���� �ð� ������ ���� ��� 
	ranNum = rand()% 10 + 1; //���� ���� (������ 0+1 ~ (10-1)+1) 
	//printf("%d", ranNum);
	Sleep(3000);
	
	printf("Okey! I'm done!\n\n");
	Sleep(2000);
	
	printf("Then, Just guess what number I've chosen!");
	Sleep(2000);
	
	printf("\n\nHow many chance you want? (1-5)\n");
	printf("I want.. : ");
	int chance = 0;//��ȸ ���� �ʱ�ȭ 
	scanf("%d", &chance);//���ϴ� ��ȸ �� �Է� 
	while(1){
		if(chance <= 5 && chance > 0){//����ڰ� �Է��� ��ȸ ���� 1~5���� �Ǻ� 
			printf("\nOk!\n"); 
			break;//���� �� �ݺ��� Ż�� �� ��� ���� 
		}
		printf("\nI want.. : ");
		scanf("%d", &chance);//�ƴ� �� �ٽ� �Է� 
	}
	
	bool right = 0;
	while(1){
		if(chance == 0){
			printf("\nYou Failed..\n");
			right = 0;//���� false 
			break;
		}
		printf("\nNow, answer the right answer!!\n");
		printf("right anser is..(chance : %d) : ",chance);
		int answer = 0;//���� ���� �ʱ�ȭ 
		scanf("%d", &answer);//���� �Է�
		if(answer > ranNum){
			printf("\nDOWN!!\n");
			chance--;
		}
		if(answer < ranNum){
			printf("\nUP!!\n");
			chance--;
		}
		if(answer == ranNum){
			printf("\nWow.. you are right!\n");
			right = 1;//���� true 
			break;
		}
	}
	
	if(right == 1){ //���� �к� 
			printf("����������������������������\n");
			printf("  You Win! :)\n");
			printf("����������������������������\n");
		}
	else if(right == 0){
			printf("������������������������������\n");
			printf("  You Lose..:(\n");
			printf("������������������������������\n");
		}
	return 0;
}
