#include <stdio.h>
#include <stdlib.h>
#include "ticket_system.h"
#include "read_data_from_library.h"

//用结构体数组储存用户信息
//user_list[100]已在"read_data_from_library.h"定义

//以下为函数声明

//==================================================================
//函数名：query_user_by_info
//功能：查询某个字段含某个信息的用户
//输入参数：info_value	信息的值
//				filed_name	字段名
//返回值：类型user*
//				若未找到则返回NULL指针
//				找到则返回结构体数组的头指针（搜索结果可能不止一条）
//==================================================================
user* query_user_by_info();

//==================================================================
//函数名：sign_in
//功能：普通用户登录校验函数
//输入参数：user_name	用户名
//					user_passport	密码
//返回值：类型int
//				验证正确返回0
//				密码错误返回1
//				用户名不存在返回2
//==================================================================
int sign_in(char* user_name, char* user_passport);

//==================================================================
//函数名：administrator_verify
//功能：管理员登录校验函数
//输入参数：user_name	用户名
//					user_passport	密码
//返回值：类型int
//				验证正确返回0
//				密码错误返回1
//				用户名不存在返回2
//				非管理员权限返回3
//==================================================================
int administrator_verify(char* user_name, char* user_passport);

//==================================================================
//函数名：query_info_by_uesr
//功能：查询某个用户的信息，可输入字段名返回指定字段，若无指定字段则全部返回全部信息
//输入参数：user_name(必填参数)	用户名
//					field_name（选填参数）  字段名
//					此函数需要不定参数
//返回值：类型char*
//			若用户指定字段,则返回对应字段的字符串
//          若用户未指定字段，返回如下格式"name:XX \t age:XX······"的字符串;
//==================================================================
char* query_info_by_uesr();

// 以上为函数声明，以下为函数实现

user* query_user_by_info()
{
	printf("query_user_by_info函数已调用");
	return 0;
}

int sign_in(char* user_name, char* user_passport)
{
	printf("sign_in函数已调用");
	return 0;
}

int administrator_verify(char* user_name, char* user_passport)
{
	printf("administrator_verify函数已调用");
	return 0;
}

char* query_info_by_uesr()
{
	printf("query_info_by_uesr函数已调用");
	return 0;
}