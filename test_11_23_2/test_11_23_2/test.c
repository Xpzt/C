#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

void menu()
{
	printf("**************************************\n");
	printf("********* 1.add      2.del     *******\n");
	printf("********* 3.seach    4.modify  *******\n");
	printf("********* 5.show     6.sort    *******\n");
	printf("**************  0.exit  **************\n");
	printf("**************************************\n");
	printf("**************************************\n");
	printf("\n");

}

int main()
{
	int input = 0;
	//����ͨѶ¼
	struct Contact con;
	//ͨѶ¼��ʼ��
	InitContact(&con);
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			//����
			AddContact(&con);
			break;
		case DEL:
			//ɾ��
			DelContact(&con);
			break;
		case SEARCH:
			//����
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			//�޸�
			break;
		case SHOW:
			//��ʾ
			ShowConstact(&con);
			break;
		case SORT:
			//����
			SortContact(&con);
			break;
		case EXIT:
			//�˳�
			printf("�˳�\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
	return 0;
}