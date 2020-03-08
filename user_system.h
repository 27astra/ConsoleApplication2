#include <stdio.h>
#include <stdlib.h>
#include "ticket_system.h"
#include "read_data_from_library.h"

//�ýṹ�����鴢���û���Ϣ
//user_list[100]����"read_data_from_library.h"����

//����Ϊ��������

//==================================================================
//��������query_user_by_info
//���ܣ���ѯĳ���ֶκ�ĳ����Ϣ���û�
//���������info_value	��Ϣ��ֵ
//				filed_name	�ֶ���
//����ֵ������user*
//				��δ�ҵ��򷵻�NULLָ��
//				�ҵ��򷵻ؽṹ�������ͷָ�루����������ܲ�ֹһ����
//==================================================================
user* query_user_by_info();

//==================================================================
//��������sign_in
//���ܣ���ͨ�û���¼У�麯��
//���������user_name	�û���
//					user_passport	����
//����ֵ������int
//				��֤��ȷ����0
//				������󷵻�1
//				�û��������ڷ���2
//==================================================================
int sign_in(char* user_name, char* user_passport);

//==================================================================
//��������administrator_verify
//���ܣ�����Ա��¼У�麯��
//���������user_name	�û���
//					user_passport	����
//����ֵ������int
//				��֤��ȷ����0
//				������󷵻�1
//				�û��������ڷ���2
//				�ǹ���ԱȨ�޷���3
//==================================================================
int administrator_verify(char* user_name, char* user_passport);

//==================================================================
//��������query_info_by_uesr
//���ܣ���ѯĳ���û�����Ϣ���������ֶ�������ָ���ֶΣ�����ָ���ֶ���ȫ������ȫ����Ϣ
//���������user_name(�������)	�û���
//					field_name��ѡ�������  �ֶ���
//					�˺�����Ҫ��������
//����ֵ������char*
//			���û�ָ���ֶ�,�򷵻ض�Ӧ�ֶε��ַ���
//          ���û�δָ���ֶΣ��������¸�ʽ"name:XX \t age:XX������������"���ַ���;
//==================================================================
char* query_info_by_uesr();

// ����Ϊ��������������Ϊ����ʵ��

user* query_user_by_info()
{
	printf("query_user_by_info�����ѵ���");
	return 0;
}

int sign_in(char* user_name, char* user_passport)
{
	printf("sign_in�����ѵ���");
	return 0;
}

int administrator_verify(char* user_name, char* user_passport)
{
	printf("administrator_verify�����ѵ���");
	return 0;
}

char* query_info_by_uesr()
{
	printf("query_info_by_uesr�����ѵ���");
	return 0;
}