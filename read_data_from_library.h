#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <winsock.h>
//#include <mysql.h>

typedef struct user
{
	char name[10];	//姓名
	int age;		//年龄
	int sex;		//性别（1代表男性，0代表女性）
	char id_number[18];	//18位身份证号
	char passport[12];	//最长12位密码
	int power;	//身份标识（1标识管理员权限,0表示普通用户）
	struct user* next;
}user;
