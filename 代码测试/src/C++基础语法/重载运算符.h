#pragma once
#include<iostream>
using namespace std;

class A
{
public:
	A(int d) :data(d) {}

	//一般运算符 + - * / %
	A operator+(A&a) { return A(data + a.data); }
	friend A operator-(A&a1, A&a2) { return A(a1.data - a2.data); }

	//关系运算符 == != < > <= >=
	bool operator == (const A& a) { return data == a.data; }

	//逻辑运算符 || && ！
	bool operator || (const A&a) { return data == 1 || a.data == 1; }

	//单目运算符 + - (正负的意思，放在对象前面)
	A& operator + () { data += 10;  return *this; }

	//自增减运算符 ++ -- (包括前置和后置)  //为什么返回值不用引用，因为不可以返回局部变量
	A& operator ++ () { data += 20;  return *this; }//前置++
	A operator ++ (int) { return A(999); }//后置++

	//位操作运算符 | & ^ << >> ~
	A operator | (const A&) {}
	A operator << (int i);
	A operator ~ () {}

	//赋值运算符 += -= *= /= %= &= |= ^= <<= >>=
	A& operator += (const A&) {}
	A& operator >>= (int i) {}

	//内存运算符重载 new delete 
	void *operator new(size_t size) {}
	void *operator new(size_t size, int i) {}
	void *operator new[](size_t size) {}
		void operator delete(void*p) {}
	void operator delete(void*p, int i, int j) {}
	void operator delete[](void* p) {}

		//特殊运算符 = 等等
		A& operator = (const A&) {}

private:
	int data;
};

int mainsa()
{
	A a1(1), a2(2), a3(3);
	a1 = a2 + a3;//	a1 = a2.operator+(a3);
	+a1;
	a2 = a1++;
	++a1;

	bool bol = a1.operator||(a2);

	return 0;
}

