#include <stdio.h>
#include "read_data_from_library.h"
#pragma once

//用结构体数组储存飞机信息
//user_plane[100]已在"read_data_from_library.h"定义

//至少设置6个城市，用邻接矩阵表示两城市之间的距离

//通过航班号查询某架航班的信息
void query_plane_by_num(char plane_id[]);

//查最短路线

//查最优惠路线

//显示所有航班信息
void print_planes()
{
	for (int i = 0; i < plane_num; i++)
	{
		printf("航班号:%s\t飞机型号:%s\t出发地名称:%s\t目的地名称:%s\t起飞时间:%s\t降落时间:%s\t价格:%d\t剩余票量:%d\t\n", plane_list[i].num, plane_list[i].model, plane_list[i].starting_point, plane_list[i].destination, plane_list[i].start_time, plane_list[i].end_time, plane_list[i].price, plane_list[i].count);
	}
}

//查起点为XX城市的航班
void query_plane_by_starting_point(char start_point[])
{
	int count = 0;
	for (int i = 0; i < plane_num; i++)
	{
		if (strcmp(start_point,plane_list[i].starting_point)==0)
		{
			printf("航班号:%s\t飞机型号:%s\t出发地名称:%s\t目的地名称:%s\t起飞时间:%s\t降落时间:%s\t价格:%d\t剩余票量:%d\t\n", plane_list[i].num, plane_list[i].model, plane_list[i].starting_point, plane_list[i].destination, plane_list[i].start_time, plane_list[i].end_time, plane_list[i].price, plane_list[i].count);
		}
	}
	if (count ==0)
	{
		printf("查找结果为空");
	}
	printf("#===================================================#\n");
}

//查终点为XX城市的航班
void query_plane_destination(char destination[])
{
	int count = 0;
	for (int i = 0; i < plane_num; i++)
	{
		if (strcmp(destination, plane_list[i].destination) == 0)
		{
			printf("航班号:%s\t飞机型号:%s\t出发地名称:%s\t目的地名称:%s\t起飞时间:%s\t降落时间:%s\t价格:%d\t剩余票量:%d\t\n", plane_list[i].num, plane_list[i].model, plane_list[i].starting_point, plane_list[i].destination, plane_list[i].start_time, plane_list[i].end_time, plane_list[i].price, plane_list[i].count);
		}
	}
	if (count == 0)
	{
		printf("查找结果为空");
	}
	printf("#===================================================#\n");
}


