#pragma once
#include <iostream>
#include<string>
#include<vector>
using namespace std;

/*
auto
*/
namespace autoUse
{
	//�����Ͳ�Ϊ����ʱ��auto ���Ƶ���������������ʽ�� const ���ԣ�
	//������Ϊ����ʱ��auto ���Ƶ�������������ʽ�� const ���ԡ�
	int  x = 0;
	const auto n = x;  //n Ϊ const int ��auto ���Ƶ�Ϊ int
	auto f = n;      //f Ϊ const int��auto ���Ƶ�Ϊ int��const ���Ա�������
	const auto &r1 = x;  //r1 Ϊ const int& ���ͣ�auto ���Ƶ�Ϊ int
	auto &r2 = r1;  //r1 Ϊ const int& ���ͣ�auto ���Ƶ�Ϊ const int ����




}
