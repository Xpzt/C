#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

struct S 
{
	char name[20];
	int age;
	double score;
};
int main()
{
	//struct S s = { "����", 20, 55.6 };
	struct S tmp = { 0 };


	//д
	//FILE* pf = fopen("test.txt", "wb");

	//��
	FILE* pf = fopen("test.txt", "rb");
	if (pf == NULL)
	{
		return 0;
	}

	////�����Ƶ���ʽд�ļ�
	//fwrite(&s, sizeof(struct S), 1, pf);

	//�����Ƶ���ʽ���ļ�
	fread(&tmp, sizeof(struct S), 1, pf);
	printf("%s %d %lf\n", tmp.name, tmp.age, tmp.score);

	fclose(pf);
	pf = NULL;
	return 0;
}