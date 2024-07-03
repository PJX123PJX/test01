//STL六大组件：容器 算法 迭代器 仿函数 适配器 空间配置器
//容器： 序列式 关联式
#pragma once
#include <iostream>
#include<string>
#include<vector>
using namespace std;

namespace string1
{
//String和C风格字符串对比
//1.Char*是一个指针，String是一个类 string封装了char*，管理这个字符串，是一个char*型的容器。
//2.String封装了很多实用的成员方法 查找find，拷贝copy，删除delete 替换replace，插入insert
//3.不用考虑内存释放和越界 string管理char*所分配的内存。

	//String构造
	void test01();
	//string基本赋值操作
	void test02();
	//string存取字符操作
	void test03();
	//string拼接操作
	void test04();
	//string查找和替换
	void test05();
	//string比较操作
	void test06();
	//string子串
	void test07();
	//string插入和删除操作
	void test08();
	//string和c-style字符串转换
	void test09();



}

