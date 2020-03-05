#include <stdio.h>
#include <stdlib.h>
#include "ticket_system.h"
#include "read_data_from_library.h"

user user_list[100];

//以下为函数声明

//==================================================================
//函数名：modify_user_message
//功能：修改用户的某个字段信息
//输入参数：user_nmae	用户名
//				filed_name	字段名
//				new_value	修改后的值
//返回值：类型int
//          返回0表示修改成功；
//          返回1表示修改失败（用户名不存在）;
//          返回2表示修改失败（字段名不存在）；
//          返回3表示修改失败（修改值不合法）。
//==================================================================
int modify_user_message();

//==================================================================
//函数名：delet_user
//功能：删除某个用户信息
//输入参数：user_nmae	用户名
//返回值：类型int
//          返回0表示修改成功；
//          返回1表示修改失败（用户名不存在）;
//==================================================================
int delet_user();

int query_message_by_uesr();

int query_user_by_message();

int sign_in();

int administrator_verify(char* user_name, char* user_passport);

int regist();


// 以上为函数声明，以下为函数实现
int modify_user_message()
{
	printf("modify_user_message函数已调用");
	return 0;
}

int delet_user()
{
	printf("delet_user函数已调用");
	return 0;
}

int query_message_by_uesr()
{
	printf("query_message_by_uesr函数已调用");
	return 0;
}

int query_user_by_message()
{
	printf("query_user_by_message函数已调用");
	return 0;
}

int sign_in()
{
	printf("sign_in函数已调用");
	return 0;
}

int administrator_verify(char* user_name, char* user_passport)
{
	printf("administrator_verify函数已调用");
	return 0;
}

int regist()
{
	printf("regist函数已调用");
	return 0;
}