#include <stdio.h>

int main(){
	int rooms[4]; // ���� ��, �߰� ��, ū ��, ��ü �л�  
	
	int k;
	for(k = 0; k < 4; k++){
		scanf("%d", &rooms[k]); //�Է� 
	}
	
	int cantMinus; //�� ���� �ο����� �л� ���� �� ������ 1�� �Ǵ� �� ���� 
	
	int i;
	for(i = 2; i >= 0; i--){ //ū �� -> �߰� �� -> ���� �� ��ȯ for�� 
		cantMinus = 0; //�� ���� �ʱ�ȭ 
		do{
			if(0 > (rooms[3]-rooms[i])){ //�� ���� �ο����� �л����� ������ ���� ������ �̵�  
				cantMinus = 1; //�� ���� Ȱ��ȭ 
			} else { //���� �ο�  < �л� ��  
				rooms[3]-=rooms[i]; //���� �ο���ŭ �л� �� ���� 
			}
		}while(cantMinus != 1); //�� ���� Ȱ��ȭ�� �ݺ� ���� 
	}
	
	if(rooms[3] > 0){ //�л� ���� ���������� 
		printf("0\n"); //0 ��� 
		return 0;
	} else {
		printf("1\n"); //�л� ���� 0�̸� 
		return 1; //�����ϹǷ� 1 ���  
	}
}
