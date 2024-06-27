/*
* �ؼ����룺�ڳ�����ʵ��ͨ�ýӿڣ�ϸ�ڱ仯������ʵ�֡�
*/

//ģ��ģʽ������һ�������е��㷨�ĹǼܣ�����һЩ�����ӳٵ������С�ģ�巽��ʹ��������Բ��ı�һ���㷨�Ľṹ�����ض�����㷨��ĳЩ�ض����衣
//�����������ͬ�ķ����������߼���ͬ��ֻ��ϸ�����в���ʱ�����Կ���ʹ��ģ��ģʽ�������ʵ���Ͽ��Խ���ͬ�ĺ����㷨���Ϊģ�巽���������ʵ��ϸ��������ʵ�֡�
//ȱ�� : ÿһ����ͬ��ʵ�ֶ���Ҫһ��������ʵ�֣�������ĸ������ӣ�ʹ��ϵͳ�����Ӵ�

#include <iostream>
using namespace std;

class Computer
{
public:
	void product()
	{
		installCpu();
		installRam();
		installGraphicsCard();
	}

protected:
	virtual	void installCpu() = 0;
	virtual void installRam() = 0;
	virtual void installGraphicsCard() = 0;

};

class ComputerA : public Computer
{
protected:
	void installCpu() override
	{
		cout << "ComputerA install Inter Core i5" << endl;
	}

	void installRam() override
	{
		cout << "ComputerA install 2G Ram" << endl;
	}

	void installGraphicsCard() override
	{
		cout << "ComputerA install Gtx940 GraphicsCard" << endl;
	}
};

class ComputerB : public Computer
{
protected:
	void installCpu() override
	{
		cout << "ComputerB install Inter Core i7" << endl;
	}

	void installRam() override
	{
		cout << "ComputerB install 4G Ram" << endl;
	}

	void installGraphicsCard() override
	{
		cout << "ComputerB install Gtx960 GraphicsCard" << endl;
	}
};

//int main()
//{
//	ComputerB* c1 = new ComputerB();
//	c1->product();
//
//	delete c1;
//	c1 = nullptr;
//
//	return 0;
//}

