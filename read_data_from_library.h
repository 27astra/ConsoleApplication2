#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <winsock.h>
//#include <mysql.h>

typedef struct user
{
	char name[10];	//����
	int age;		//����
	int sex;		//�Ա�1�������ԣ�0����Ů�ԣ�
	char id_number[18];	//18λ���֤��
	char passport[12];	//�12λ����
	int power;	//��ݱ�ʶ��1��ʶ����ԱȨ��,0��ʾ��ͨ�û���
	struct user* next;
}user;
