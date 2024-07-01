#pragma once
#include<iostream>
using namespace std;

class A
{
public:
	A(int d) :data(d) {}

	//һ������� + - * / %
	A operator+(A&a) { return A(data + a.data); }
	friend A operator-(A&a1, A&a2) { return A(a1.data - a2.data); }

	//��ϵ����� == != < > <= >=
	bool operator == (const A& a) { return data == a.data; }

	//�߼������ || && ��
	bool operator || (const A&a) { return data == 1 || a.data == 1; }

	//��Ŀ����� + - (��������˼�����ڶ���ǰ��)
	A& operator + () { data += 10;  return *this; }

	//����������� ++ -- (����ǰ�úͺ���)  //Ϊʲô����ֵ�������ã���Ϊ�����Է��ؾֲ�����
	A& operator ++ () { data += 20;  return *this; }//ǰ��++
	A operator ++ (int) { return A(999); }//����++

	//λ��������� | & ^ << >> ~
	A operator | (const A&) {}
	A operator << (int i);
	A operator ~ () {}

	//��ֵ����� += -= *= /= %= &= |= ^= <<= >>=
	A& operator += (const A&) {}
	A& operator >>= (int i) {}

	//�ڴ���������� new delete 
	void *operator new(size_t size) {}
	void *operator new(size_t size, int i) {}
	void *operator new[](size_t size) {}
		void operator delete(void*p) {}
	void operator delete(void*p, int i, int j) {}
	void operator delete[](void* p) {}

		//��������� = �ȵ�
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

