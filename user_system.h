#include <stdio.h>
#include <stdlib.h>
#include "ticket_system.h"
#include "read_data_from_library.h"

user user_list[100];

//����Ϊ��������

//==================================================================
//��������modify_user_message
//���ܣ��޸��û���ĳ���ֶ���Ϣ
//���������user_nmae	�û���
//				filed_name	�ֶ���
//				new_value	�޸ĺ��ֵ
//����ֵ������int
//          ����0��ʾ�޸ĳɹ���
//          ����1��ʾ�޸�ʧ�ܣ��û��������ڣ�;
//          ����2��ʾ�޸�ʧ�ܣ��ֶ��������ڣ���
//          ����3��ʾ�޸�ʧ�ܣ��޸�ֵ���Ϸ�����
//==================================================================
int modify_user_message();

//==================================================================
//��������delet_user
//���ܣ�ɾ��ĳ���û���Ϣ
//���������user_nmae	�û���
//����ֵ������int
//          ����0��ʾ�޸ĳɹ���
//          ����1��ʾ�޸�ʧ�ܣ��û��������ڣ�;
//==================================================================
int delet_user();

int query_message_by_uesr();

int query_user_by_message();

int sign_in();

int administrator_verify(char* user_name, char* user_passport);

int regist();


// ����Ϊ��������������Ϊ����ʵ��
int modify_user_message()
{
	printf("modify_user_message�����ѵ���");
	return 0;
}

int delet_user()
{
	printf("delet_user�����ѵ���");
	return 0;
}

int query_message_by_uesr()
{
	printf("query_message_by_uesr�����ѵ���");
	return 0;
}

int query_user_by_message()
{
	printf("query_user_by_message�����ѵ���");
	return 0;
}

int sign_in()
{
	printf("sign_in�����ѵ���");
	return 0;
}

int administrator_verify(char* user_name, char* user_passport)
{
	printf("administrator_verify�����ѵ���");
	return 0;
}

int regist()
{
	printf("regist�����ѵ���");
	return 0;
}