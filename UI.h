#include <stdio.h>
#include "user_system.h"
#include "ticket_system.h"
#include<windows.h>

/*����Ϊ��������*/

// �û���¼���溯��
void sign_in_screen();

// �û�ע����溯��
void regist_screen();

//	����Ա��¼���溯��
void administrator_sign_in_screen();

//	����Ա��̨���溯��
// ����Ա��̨���������ɾ�Ĳ��û����û�����
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
	printf("����1-3(�����ַ���ʾ�˳�)��ѡ���Իس���������\n");
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
	printf("#               ��ӭ�����̨����ϵͳ                   #\n");
	printf("#                   1����ѯ�û�                       #\n");
	printf("#                   2����ѯ�û���Ϣ                   #\n");
	printf("#                   3���޸��û���Ϣ                   #\n");
	printf("#                   4��ɾ���û���Ϣ                   #\n");
	printf("#                   5��������ҳ                   #\n");
	printf("#                   0���˳�����                   #\n");
	printf("#===================================================#\n");
	printf("����0-5��ѡ���Իس���������\n");
	scanf_s("%d", &j);

	switch (j)
	{
	case 1:
		while (1)
		{
			printf("#===================================================#\n");
			char field_name[15];
			char field_value[19];
			printf("������Ҫ��ѯ���ֶ��������س�ȷ�ϣ�\n");
			scanf_s("%s", field_name, 15);
			printf("������Ҫ��ѯ���ֶ�ֵ�����س�ȷ�ϣ�\n");
			scanf_s("%s", field_value, 19);
			user_result* result = query_user_by_info(field_value, field_name);
			if (result == NULL)
			{
				printf("\n�ֶ���������!\n");
				printf("#===================================================#\n");
			}
			else
			{
				if (result->result_num == 0)
				{
					printf("��ѯ���Ϊ��");
				}
				else
				{
					printf("#===================================================#\n");
					printf("��ѯ������£�\n");
					for (int i = 0; i < result->result_num; i++)
					{
						printf("name:%s\tage:%d\tsex:%d\tid_number:%s\tpassport:%s\tpower:%d\n", result->result[i]->name, result->result[i]->age, result->result[i]->sex, result->result[i]->id_number, result->result[i]->passport, result->result[i]->power);
						printf("#===================================================#\n");
					}
				}
			}
			printf("������ѯ������1�����س�ȷ��,���ع���Ա��ҳ�����������ַ���\n");
			int flag = 0;
			scanf_s(" %d", &flag);
			if (flag!=1)
			{
				break;
			}
		}
		break;

	case 2:
		printf("#===================================================#\n");
		while (1)
		{
			char field_name[15];
			char user_name[10];
			printf("������Ҫ��ѯ���û��������س�ȷ��:\n");
			scanf_s(" %s", user_name, 10);
			printf("������Ҫ��ѯ���ֶ��������س�ȷ��(����all��ʾ��ʾȫ����Ϣ):\n");
			scanf_s(" %s", field_name, 15);
			char* result = NULL;

			if (strcmp(field_name,"all")==0)
			{
				result = query_info_by_uesr(1, user_name);
			}
			else
			{
				result = query_info_by_uesr(2, user_name, field_name);
			}
			printf("#===================================================#\n");
			if (result == NULL)
			{
				printf("��ѯ���Ϊ�գ�\n");
			}
			else
			{
				printf("��ѯ�������:\n%s\n", result);
			}
			printf("������ѯ������1�����س�ȷ��,���ع���Ա��ҳ�����������ַ���\n");
			int flag = 0;
			scanf_s(" %d", &flag);
			if (flag != 1)
			{
				break;
			}
		}
		break;

	case 3:
		printf("#===================================================#\n");
		while (1)
		{
			char user_name[10];
			char field_name[12];
			char new_value[19];
			printf("������Ҫ�޸ĵ��û��������س�ȷ��:\n");
			scanf_s(" %s", user_name, 10);
			printf("������Ҫ�޸ĵ��ֶ��������س�ȷ��:\n");
			scanf_s(" %s", field_name, 12);
			printf("�������ֶε���ֵ�����س�ȷ��:\n");
			scanf_s(" %s", new_value, 19);
			int flag = modify_user_message(user_name, field_name, new_value);
			printf("#===================================================#\n");
			if (flag)
			{
				printf("�޸�ʧ�ܣ�\n");
			}
			else
			{
				printf("�޸ĳɹ���\n");
			}
			printf("�����޸�������1�����س�ȷ��,���ع���Ա��ҳ�����������ַ���\n");
			int flag2 = 0;
			scanf_s(" %d", &flag2);
			if (flag2 != 1)
			{
				break;
			}
		}
		break;

	case 4:
		printf("#===================================================#\n");
		while (1)
		{
			char user_name[10];
			printf("������Ҫɾ�����û��������س�ȷ��:\n");
			scanf_s(" %s", user_name, 10);
			printf("#===================================================#\n");
			char flag[5];
			printf("��ȷ���Ƿ�Ҫɾ�����û���ȷ�������롰Yes����yes�������س�ȷ��\n");
			scanf_s(" %s", flag, 5);
			int result = 0;
			if ( (strcmp(flag,"yes")==0) || (strcmp(flag, "Yes") == 0) )
			{
				result = delet_user(user_name);
			}
			if (result)
			{
				printf("ɾ���û�ʧ��\n");
			}
			else
			{
				printf("ɾ���û��ɹ�\n");
			}
			printf("����ɾ��������1�����س�ȷ��,���ع���Ա��ҳ�����������ַ���\n");
			int flag2 = 0;
			scanf_s(" %d", &flag2);
			if (flag2 != 1)
			{
				break;
			}
		}
		break;
	case 5:
		system("cls");
		main_screen();
		break;
	case 0:
		exit(0);
	}
	system("cls");
	administrator_screen();
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
		system("cls");
		administrator_screen(); 
	}
	else
	{
		int i;
		printf("����Ա�˺Ż������������������1��������ҳ�������������֣�\n");
		scanf_s("%d", &i);
		switch (i)
		{
		case 1:
			system("cls");
			administrator_sign_in_screen();
		default:
			system("cls");
			main_screen();
		}
	}
}

void sign_in_screen()
{
	char user[10];
	char passWord[12];
	printf("#===================================================#\n");
	printf("#               ��ӭ�����¼����                #\n");
	printf("#===================================================#\n");
	printf("�������û��������س�ȷ�ϣ�\n");
	scanf_s("%s", user, 10);
	printf("���������벢���س�ȷ�ϣ�\n");
	scanf_s("%s", passWord,12);

	int ret = sign_in(user, passWord);

	if (0 == ret)
	{
		printf("��¼�ɹ�");
		system("cls");
		ticket_screen();
	}

	else if (1 == ret)
	{
		printf("������󣬣���y�������룬�������˳�����");
		char in;
		scanf_s("%c", &in,1);
		if ('y' != in && 'Y' != in)
		{
			system("cls");
			sign_in_screen();
		}
		else
		{
			exit(0);
		}
	}
	else
	{
		printf("�û��������ڣ�������y�������룬�������˳�����\n");
		char in;
		scanf_s(" %c", &in,1);
		if ('y' != in && 'Y' != in)
		{
			system("cls");
			sign_in_screen();
		}
		else
		{
			exit(0);
		}
	}
}

void regist_screen()
{
	printf("#===================================================#\n");
	printf("#               ��ӭ����ע�����                #\n");
	printf("#===================================================#\n");
	char username[10]="", pass1[12]="", pass2[12]="", id_number[19];
	int age, sex, power;

	printf("�������û��������س�ȷ�ϣ�\n");
	scanf_s("%s", username,10);
	printf("���������䲢���س�ȷ�ϣ�\n");
	scanf_s("%d", &age);

	do 
	{
		printf("�������Ա�(1�����У�0����Ů)�����س�ȷ�ϣ�\n");
		scanf_s(" %d", &sex);
		if (0 == sex || 1 == sex)
		{
			break;
		}
		printf("�����Ϲ淶������������");
	} while (1);

	printf("���������֤���벢���س�ȷ�ϣ�\n");
	scanf_s(" %s", id_number,19);

	do 
	{
		printf("��������ݱ�ʶ��(1��ʶ����ԱȨ��,0��ʾ��ͨ�û�)��\n");
		scanf_s("%d", &power);
		if (0 == power)
		{
			break;
		}
		else if (1 == power)
		{
			int ret;
			do 
			{
				printf("����֤����Ա��\n");
				char user_name_[10], pass_[12];
				printf("���������Ա�˺Ų����س�ȷ�ϣ�\n");
				scanf_s(" %s", user_name_,10);
				printf("���������Ա���벢���س�ȷ�ϣ�\n");
				scanf_s(" %s", pass_,12);
				ret = administrator_verify(user_name_, pass_);
				if (ret != 0)
				{
					printf("��֤ʧ�ܣ�\n");
					printf("������֤��Y����������֤�����������ַ��˳����򣩣�\n");
					char in;
					scanf_s("%c", &in,1);
					if ('y' != in && 'Y' != in)
					{
						exit(0);
					}
				}
			} while (ret);
			break;
		}
		printf("�����Ϲ淶������������");
	} while (1);
	printf("#===================================================#\n");
	do 
	{
		printf("���������벢���س�ȷ�ϣ�\n");
		scanf_s(" %s", pass1,12);
		printf("���ٴ��������벢���س�ȷ�ϣ�\n");
		scanf_s("%s", pass2,12);
	} while (strcmp(pass1, pass2) != 0);
	if (!regist(username, age, sex, id_number, pass1, power))
	{
		printf("ע��ɹ�");
	}
	else {
		printf("ע��ʧ��");
	}
	//printf("regist_screen�ѵ���");
}

void ticket_screen()
{
	printf(" ��----------------���ã���ӭ�����Զ����ɻ���Ʊϵͳ��---��\n");
	printf("================================================================================\n");
	printf(" **-------- ----�� 1. � �� �� �� ��  Ϣ ��----- ------------------**\n\n" " **-------- ��  2. ��  ��  ��  ��  ��  Ϣ  -��-------- ------------**\n\n" " **-------- ---��  3.�Ժ��ఴ����Ʊ������---��-----------------------**\n\n" " **-------- ------��  4. �� Ʊ �� Ϣ-��-------- -----------------**\n\n" " **-------- ----------��  0.�˳�  -��-------- ---------------------**\n\n" " **-------- ---------------��  ��-------- -------------------------**\n\n" " **-------- -----------------�� -------- --------------------------**\n\n" " **-------- ---------------�� ��-------- --------------------------**\n\n");
	printf("================================================================================\n");
	printf("����1-4(�����ַ���ʾ�˳�)��ѡ���Իس���������\n");
	int j;
	scanf_s("%d", &j);
	switch (j)
	{
		case 1:
			printf("#===================================================#\n");
			print_planes();
			int flag = 0;
			printf("������Ʊ������1�����س�ȷ�ϣ����������ַ����ض�Ʊҳ��");
			scanf_s(" %d", &flag);
			if (flag==1)
			{
				printf("#===================================================#\n");
				char plane_id[10];
				int num = 0;
				printf("������Ҫ�����Ʊ�ĺ���Ų����س�ȷ��:\n");
				scanf_s(" %s", plane_id);
				printf("������Ҫ�����Ʊ�����������س�ȷ��:\t");
				scanf_s(" %d", &num);
				int result = buy_ticket(plane_id,num);
				switch (result)
				{
				case 1 :
					printf("��Ʊ���㣬����ʧ��\n");
					break;
				case 2:
					printf("�����������󣬹���ʧ��\n");
					break;
				case 3:
					printf("δ֪���󣬹���ʧ��");
					break;
				case 0:
					printf("����ɹ���3��󷵻ع�Ʊ��ҳ......");
					Sleep(3);
					system("cls");
					ticket_screen();
					break;
				}
			}
			else
			{
				system("cls");
				ticket_screen();
			}
			break;

		case 2:
			system("cls");
			//��  ��  ��  ��  ��  Ϣ
			break;
		case 3:
			system("cls");
			//�Ժ��ఴ����Ʊ������
			break;
		case 4:
			system("cls");
			//�� Ʊ �� Ϣ
			break;
		case 0:
			system("cls");
			return;
			break;
		default:
			exit(0);
	}
}
