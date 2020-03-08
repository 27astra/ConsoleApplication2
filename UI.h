#include <stdio.h>
#include "user_system.h"
#include "ticket_system.h"

/*以下为函数声明*/

// 用户登录界面函数
void sign_in_screen();

// 用户注册界面函数
void regist_screen();

//	管理员登录界面函数
void administrator_sign_in_screen();

//	管理员后台界面函数
//  后台管理可以增删改查用户或用户数据
void administrator_screen();

//	购票界面函数 
// 可以查询航班，购买票，按规则筛选票，推荐路线等
void ticket_screen();

//	主界面函数
void main_screen();

/* 以上为函数声明，以下为函数实现*/

void main_screen()
{
	int j;
	printf("#===================================================#\n");
	printf("#               欢迎进入机票管理系统                #\n");
	printf("#                   1、登录系统                     #\n");
	printf("#                   2、新用户注册                   #\n");
	printf("#                   3、管理员登录                   #\n");
	printf("#                   0、退出                         #\n");
	printf("#===================================================#\n");
	printf("请在1-3(其它字符表示退出)中选择以回车键结束：\n\n");
	scanf_s("%d", &j);
	switch (j)
	{
	case 1:
		system("cls");
		sign_in_screen();	//进入机票系统
		break;
	case 2:
		system("cls");
		regist_screen();	//进入用户注册系统
		break;
	case 3:
		system("cls"); 
		administrator_sign_in_screen();	//进入管理后台
		break;
	default:
		exit(0);
	}
}

void administrator_screen()
{
	int j;
	printf("#===================================================#\n");
	printf("#               欢迎进入后台管理系统                #\n");
	printf("#                   1、登录系统                     #\n");
	printf("#                   0、退出                         #\n");
	printf("#===================================================#\n");
	printf("请在1-3中选择以回车键结束：\n\n");
	scanf_s("%d", &j);
	switch (j)
	{
	case 1:
		system("cls");
		administrator_sign_in_screen();	//进入管理员登录界面
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
	printf("#               欢迎进入后台管理系统                #\n");
	printf("#===================================================#\n");
	printf("请输入管理员账号并按回车确认：\n");
	scanf_s("%s", user_name,10);
	printf("请输入管理员密码并按回车确认：\n");
	scanf_s("%s", user_passport,12);
	//验证通过则跳转到下一个UI界面，反之提示退出或重试
	if (administrator_verify(user_name, user_passport) == 0)
	{
		administrator_screen(); 
	}
	else
	{
		int i;
		printf("管理员账号或密码错误，重试请输入1，返回上一层请输入其它数字：\n");
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
	printf("sign_in_screen已调用");
}

void regist_screen()
{
	printf("regist_screen已调用");
}

void ticket_screen()
{
	printf(" ★----------------您好，欢迎进入自动化飞机订票系统！---★\n");
	printf("================================================================================\n");
	printf(" **-------- ----☆ 1. 浏 览 航 班 信  息 ☆----- ------------------**\n\n" " **-------- ☆  2. 查  找  航  班  信  息  -☆-------- ------------**\n\n" " **-------- ---☆  3.对航班按航班票价排序---☆-----------------------**\n\n" " **-------- ------☆  4. 订 票 信 息-☆-------- -----------------**\n\n" " **-------- ----------☆  0.退出  -☆-------- ---------------------**\n\n" " **-------- ---------------☆  ☆-------- -------------------------**\n\n" " **-------- -----------------☆ -------- --------------------------**\n\n" " **-------- ---------------☆ ☆-------- --------------------------**\n\n");
	printf("================================================================================\n");
}