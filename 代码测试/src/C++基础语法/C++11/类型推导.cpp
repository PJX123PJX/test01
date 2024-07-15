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
	//当类型不为引用时，auto 的推导结果将不保留表达式的 const 属性；
	//当类型为引用时，auto 的推导结果将保留表达式的 const 属性。
	int  x = 0;
	const auto n = x;  //n 为 const int ，auto 被推导为 int
	auto f = n;      //f 为 const int，auto 被推导为 int（const 属性被抛弃）
	const auto &r1 = x;  //r1 为 const int& 类型，auto 被推导为 int
	auto &r2 = r1;  //r1 为 const int& 类型，auto 被推导为 const int 类型




}
