#pragma once
#include <iostream>
#include <functional> 

void adcHurt()
{
	std::cout << "Adc Hurt" << std::endl;
}

void apcHurt()
{
	std::cout << "Apc Hurt" << std::endl;
}

//������ɫ�࣬ ʹ�ô�ͳ�ĺ���ָ��
class Soldier
{
public:
	typedef void(*Function)();
	Soldier(Function fun) : m_fun(fun)
	{
	}
	void attack()
	{
		m_fun();
	}
private:
	Function m_fun;
};

//������ɫ�࣬ ʹ��std::function<>
class Mage
{
public:
	typedef std::function<void()> Function;

	Mage(Function fun) : m_fun(fun)
	{
	}
	void attack()
	{
		m_fun();
	}
private:
	Function m_fun;
};

int main3()
{
	Soldier* soldier = new Soldier(apcHurt);
	soldier->attack();
	delete soldier;
	soldier = nullptr;
	return 0;
}
