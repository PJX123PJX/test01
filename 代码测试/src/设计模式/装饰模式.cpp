/*
* �ؼ����룺1��Component ��䵱�����ɫ����Ӧ�þ���ʵ�֡� 2�����������úͼ̳� Component �࣬������չ����д���෽����
*/

//װ��ģʽ����̬�ظ�һ���������һЩ����Ĺ��ܣ�����ͨ������һ����װ����Ҳ����װ����������ʵ�Ķ��������ӹ�����˵��װ����ģʽ���������������
//
//�������ο���ʹ��װ��ģʽ��
//��Ҫ��չһ����Ĺ��ܣ����һ������Ӹ���ְ��
//��Ҫ��̬�ĸ�һ��������ӹ��ܣ���Щ���ܿ����ٶ�̬�ĳ�����
//��Ҫ������һЩ�������ܵ�������϶������ķǳ������Ĺ��ܣ��Ӷ�ʹ�̳й�ϵ��Ĳ���ʵ��
//�����ܲ�����������ķ�����������ʱ��һ������ǣ������д�����������չ��Ϊ֧��ÿһ����Ͻ��������������࣬ʹ��������Ŀ�ʱ�ը��������
//��һ�������������Ϊ�ඨ�屻���أ����ඨ�岻�������������ࡣ
#include <iostream>
using namespace std;

//���󹹼���Component����ɫ������һ������ӿڣ��Թ淶׼�����ո������εĶ���
class Component
{
public:
	virtual ~Component() {}

	virtual void configuration() = 0;
};

//���幹����Concrete Component����ɫ������һ����Ҫ���ո������ε��ࡣ
class Car : public Component
{
public:
	void configuration() override
	{
		cout << "A Car" << endl;
	}
};

//װ�Σ�Decorator����ɫ������һ��������Component�������ʵ������ʵ��һ������󹹼��ӿ�һ�µĽӿڡ�
class DecorateCar : public Component
{
public:
	DecorateCar(Component* car) : m_pCar(car) {}

	void configuration() override
	{
		m_pCar->configuration();
	}

private:
	Component* m_pCar;
};

//����װ�Σ�Concrete Decorator����ɫ�������������������ϸ��ӵ����Ρ�
class DecorateLED : public DecorateCar
{
public:
	DecorateLED(Component* car) : DecorateCar(car) {}

	void configuration() override
	{
		DecorateCar::configuration();
		addLED();
	}

private:
	void addLED()
	{
		cout << "Install LED" << endl;
	}

};

//����װ�Σ�Concrete Decorator����ɫ�������������������ϸ��ӵ����Ρ�
class DecoratePC : public DecorateCar
{
public:
	DecoratePC(Component* car) : DecorateCar(car) {}

	void configuration() override
	{
		DecorateCar::configuration();
		addPC();
	}

private:
	void addPC()
	{
		cout << "Install PC" << endl;
	}
};

//����װ�Σ�Concrete Decorator����ɫ�������������������ϸ��ӵ����Ρ�
class DecorateEPB : public DecorateCar
{
public:
	DecorateEPB(Component* car) : DecorateCar(car) {}

	void configuration() override
	{
		DecorateCar::configuration();
		addEPB();
	}

private:
	void addEPB()
	{
		cout << "Install Electrical Park Brake" << endl;
	}
};

//int main()
//{
//	Car* car = new Car;
//	DecorateLED* ledCar = new DecorateLED(car);
//	DecoratePC* pcCar = new DecoratePC(ledCar);
//	DecorateEPB* epbCar = new DecorateEPB(pcCar);
//
//	epbCar->configuration();
//
//	delete epbCar;
//	epbCar = nullptr;
//
//	delete pcCar;
//	pcCar = nullptr;
//
//	delete ledCar;
//	ledCar = nullptr;
//
//	delete car;
//	car = nullptr;
//
//	return 0;
//}
