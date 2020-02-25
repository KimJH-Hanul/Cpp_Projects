#include <stdio.h>

#define FALSE -1
#define TRUE 1

int isSame(int* arr, int start, int end){	//�ߺ� �˻� 
	int a;
	for(a = start; a <= end; a++){
		int b;
		for(b = start; b <= end; b++){
			if(arr[a] == arr[b]){
				return 1;
			}
		}
	} 
	return 0;
}

int main(){
	int student, pairs;
	int isPossible = FALSE;
	scanf("%d %d", &student, &pairs);
	
	int arrays[pairs][2];
	int cards[student+1];
	
	int std;
	int pr;
	
	int num;
	for(num = 1; num <= student; num++){
		cards[num] = num; //������� ���޵Ǿ��ٴ� �Ͽ� ī�� ���� 
	}
	
	for(pr = 0; pr < pairs; pr++){
		scanf("%d %d", &arrays[pr][0], &arrays[pr][1]);
		//(X, Y)���� ������ ����, X > Y�� �Ǿ�� ��, ��ȯ�ϸ� ��� �� 
		cards[arrays[pr][0]]++; //X�� �� Ŀ���ϴ� �� 
		cards[arrays[pr][1]]--; //Y�� �� �۾ƾ��ϴ� �� 
	}	
	
	int stack = 0;
	for(stack = 1; stack <= student; stack++){
		//���� ī��� 1���� �ִ� �л��� ���� ���޵�. 
		if( (cards[stack] <= 0 || cards[stack] > student) || isSame(cards, 1, student) == TRUE ){ //���� ī�� ������ ��� ��� , �ߺ� ī�尡 �ִ� ��� 
			printf("\n-1\n"); //�Ұ��� �迭 
			return -1; 
		} else {
			isPossible = TRUE; //���� 
		}
	}

 	if(isPossible == TRUE){ //������ ��� 
		int c;
		printf("\n");
		for(c = 1; c <= student; c++){
			printf("%d ", cards[c]); //���� ��� 
		}
		printf("\n");
		return 1; 
	}
}
