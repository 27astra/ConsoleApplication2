#include <stdio.h>
#include "read_data_from_library.h"
#pragma once

//�ýṹ�����鴢��ɻ���Ϣ
//user_plane[100]����"read_data_from_library.h"����

//��������6�����У����ڽӾ����ʾ������֮��ľ���

//ͨ������Ų�ѯĳ�ܺ������Ϣ
void query_plane_by_num(char plane_id[]);

//�����·��

//�����Ż�·��

//��ʾ���к�����Ϣ
void print_planes()
{
	for (int i = 0; i < plane_num; i++)
	{
		printf("�����:%s\t�ɻ��ͺ�:%s\t����������:%s\tĿ�ĵ�����:%s\t���ʱ��:%s\t����ʱ��:%s\t�۸�:%d\tʣ��Ʊ��:%d\t\n", plane_list[i].num, plane_list[i].model, plane_list[i].starting_point, plane_list[i].destination, plane_list[i].start_time, plane_list[i].end_time, plane_list[i].price, plane_list[i].count);
	}
}

//�����ΪXX���еĺ���
void query_plane_by_starting_point(char start_point[])
{
	int count = 0;
	for (int i = 0; i < plane_num; i++)
	{
		if (strcmp(start_point,plane_list[i].starting_point)==0)
		{
			printf("�����:%s\t�ɻ��ͺ�:%s\t����������:%s\tĿ�ĵ�����:%s\t���ʱ��:%s\t����ʱ��:%s\t�۸�:%d\tʣ��Ʊ��:%d\t\n", plane_list[i].num, plane_list[i].model, plane_list[i].starting_point, plane_list[i].destination, plane_list[i].start_time, plane_list[i].end_time, plane_list[i].price, plane_list[i].count);
		}
	}
	if (count ==0)
	{
		printf("���ҽ��Ϊ��");
	}
	printf("#===================================================#\n");
}

//���յ�ΪXX���еĺ���
void query_plane_destination(char destination[])
{
	int count = 0;
	for (int i = 0; i < plane_num; i++)
	{
		if (strcmp(destination, plane_list[i].destination) == 0)
		{
			printf("�����:%s\t�ɻ��ͺ�:%s\t����������:%s\tĿ�ĵ�����:%s\t���ʱ��:%s\t����ʱ��:%s\t�۸�:%d\tʣ��Ʊ��:%d\t\n", plane_list[i].num, plane_list[i].model, plane_list[i].starting_point, plane_list[i].destination, plane_list[i].start_time, plane_list[i].end_time, plane_list[i].price, plane_list[i].count);
		}
	}
	if (count == 0)
	{
		printf("���ҽ��Ϊ��");
	}
	printf("#===================================================#\n");
}


