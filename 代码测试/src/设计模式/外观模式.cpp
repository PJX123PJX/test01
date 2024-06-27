/*
* �ؼ����룺�ͻ���ϵͳ֮���һ����۲㣬��۲㴦��ϵͳ�ĵ��ù�ϵ��������ϵ�ȡ�
*����ʵ���Ե��Ե���������Ϊ�����ͻ���ֻ���ĵ��Կ����ġ��ػ��Ĺ��̣�������Ҫ�˽�����ڲ���ϵͳ���������̡�
*/

//���ģʽ��
//Ϊ��ϵͳ�е�һ��ӿڶ���һ��һ�µĽ��棻
//���ģʽ�ṩһ���߲�Ľӿڣ�����ӿ�ʹ����һ��ϵͳ�������ױ�ʹ�ã�
//���ڸ��ӵ�ϵͳ��ϵͳΪ�ͻ����ṩһ���򵥵Ľӿڣ��Ѹ����ʵ�ֹ��̷�װ�������ͻ��˲���Ҫ����ϵͳ�ڲ���ϸ�ڡ�
//
//�������ν��鿼�����ģʽ��
//
//��Ƴ��ڽ׶Σ�Ӧ����ʶ�Ľ���ͬ����룬�����֮�佨�����ģʽ��
//�����׶Σ���ϵͳԽ��Խ���ӣ�ʹ�����ģʽ�ṩһ���򵥵ĵ��ýӿڡ�
//һ��ϵͳ�����Ѿ��ǳ�����ά������չ�����ְ����˷ǳ���Ҫ�Ĺ��ܣ�����Ϊ�俪��һ������࣬ʹ����ϵͳ���Է�������佻����
//
//�ŵ㣺
//ʵ������ϵͳ��ͻ���֮�������Ϲ�ϵ��
//�ͻ�����������ϵͳ����������˿ͻ�������Ҫ����Ķ������ݣ�ʹ����ϵͳʹ���������������ס�
//���õĻ�������Ʋ�Σ����ں���ά�����ӵ����ס�

#include <iostream>
using namespace std;

//����ؼ��࣬�ṩ�ӿ�
class Control
{
public:
	virtual void start() = 0;
	virtual void shutdown() = 0;
};

//�ӿؼ��� ����
class Host : public Control
{
public:
	void start() override
	{
		cout << "Host start" << endl;
	}
	void shutdown() override
	{
		cout << "Host shutdown" << endl;
	}
};

//�ӿؼ��� ��ʾ��
class LCDDisplay : public Control
{
public:
	void start() override
	{
		cout << "LCD Display start" << endl;
	}
	void shutdown() override
	{
		cout << "LCD Display shutdonw" << endl;
	}
};

//�ӿؼ��� �ⲿ�豸
class Peripheral : public Control
{
public:
	void start() override
	{
		cout << "Peripheral start" << endl;
	}
	void shutdown() override
	{
		cout << "Peripheral shutdown" << endl;
	}
};

class Computer
{
public:
	void start()
	{
		m_host.start();
		m_display.start();
		m_peripheral.start();
		cout << "Computer start" << endl;
	}
	void shutdown()
	{
		m_host.shutdown();
		m_display.shutdown();
		m_peripheral.shutdown();
		cout << "Computer shutdown" << endl;
	}
private:
	Host   m_host;
	LCDDisplay m_display;
	Peripheral   m_peripheral;
};

//int main()
//{
//	Computer computer;
//	computer.start();
//
//	//do something
//
//	computer.shutdown();
//
//	return 0;
//}
