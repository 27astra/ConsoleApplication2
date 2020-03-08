#include <stdio.h>
#include "user_system.h"
#include "ticket_system.h"

/*����Ϊ��������*/

// �û���¼���溯��
void sign_in_screen();

// �û�ע����溯��
void regist_screen();

//	����Ա��¼���溯��
void administrator_sign_in_screen();

//	����Ա��̨���溯��
//  ��̨���������ɾ�Ĳ��û����û�����
void administrator_screen();

//	��Ʊ���溯�� 
// ���Բ�ѯ���࣬����Ʊ��������ɸѡƱ���Ƽ�·�ߵ�
void ticket_screen();

//	�����溯��
void main_screen();

/* ����Ϊ��������������Ϊ����ʵ��*/

void main_screen()
{
	int j;
	printf("#===================================================#\n");
	printf("#               ��ӭ�����Ʊ����ϵͳ                #\n");
	printf("#                   1����¼ϵͳ                     #\n");
	printf("#                   2�����û�ע��                   #\n");
	printf("#                   3������Ա��¼                   #\n");
	printf("#                   0���˳�                         #\n");
	printf("#===================================================#\n");
	printf("����1-3(�����ַ���ʾ�˳�)��ѡ���Իس���������\n\n");
	scanf_s("%d", &j);
	switch (j)
	{
	case 1:
		system("cls");
		sign_in_screen();	//�����Ʊϵͳ
		break;
	case 2:
		system("cls");
		regist_screen();	//�����û�ע��ϵͳ
		break;
	case 3:
		system("cls"); 
		administrator_sign_in_screen();	//��������̨
		break;
	default:
		exit(0);
	}
}

void administrator_screen()
{
	int j;
	printf("#===================================================#\n");
	printf("#               ��ӭ�����̨����ϵͳ                #\n");
	printf("#                   1����¼ϵͳ                     #\n");
	printf("#                   0���˳�                         #\n");
	printf("#===================================================#\n");
	printf("����1-3��ѡ���Իس���������\n\n");
	scanf_s("%d", &j);
	switch (j)
	{
	case 1:
		system("cls");
		administrator_sign_in_screen();	//�������Ա��¼����
		break;
	case 0:
		system("cls");
		break;
	}
}

void administrator_sign_in_screen()
{
	char user_name[10];
	char user_passport[12];

	printf("#===================================================#\n");
	printf("#               ��ӭ�����̨����ϵͳ                #\n");
	printf("#===================================================#\n");
	printf("���������Ա�˺Ų����س�ȷ�ϣ�\n");
	scanf_s("%s", user_name,10);
	printf("���������Ա���벢���س�ȷ�ϣ�\n");
	scanf_s("%s", user_passport,12);
	//��֤ͨ������ת����һ��UI���棬��֮��ʾ�˳�������
	if (administrator_verify(user_name, user_passport) == 0)
	{
		administrator_screen(); 
	}
	else
	{
		int i;
		printf("����Ա�˺Ż������������������1��������һ���������������֣�\n");
		scanf_s("%d", &i);
		switch (i)
		{
		case 1:
			administrator_sign_in_screen();
		default:
			main_screen();
		}
	}
}

void sign_in_screen()
{
	printf("sign_in_screen�ѵ���");
}

void regist_screen()
{
	printf("regist_screen�ѵ���");
}

void ticket_screen()
{
	printf(" ��----------------���ã���ӭ�����Զ����ɻ���Ʊϵͳ��---��\n");
	printf("================================================================================\n");
	printf(" **-------- ----�� 1. � �� �� �� ��  Ϣ ��----- ------------------**\n\n" " **-------- ��  2. ��  ��  ��  ��  ��  Ϣ  -��-------- ------------**\n\n" " **-------- ---��  3.�Ժ��ఴ����Ʊ������---��-----------------------**\n\n" " **-------- ------��  4. �� Ʊ �� Ϣ-��-------- -----------------**\n\n" " **-------- ----------��  0.�˳�  -��-------- ---------------------**\n\n" " **-------- ---------------��  ��-------- -------------------------**\n\n" " **-------- -----------------�� -------- --------------------------**\n\n" " **-------- ---------------�� ��-------- --------------------------**\n\n");
	printf("================================================================================\n");
}