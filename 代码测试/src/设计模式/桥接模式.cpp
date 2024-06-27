/*
* �ؼ����룺����ʵ����������������������ʵ�ࡣ
* ����ʾ���У�������App�������ֻ�����������ʵ�ָ���App�͸����ֻ��������Žӡ�
*/

//�Ž�ģʽ�������󲿷���ʵ�ֲ��ַ��룬ʹ���Ƕ����Զ����任��
//
//�������ο���ʹ���Ž�ģʽ��
//��һ�������ж���仯���ص�ʱ�򣬿��������ڳ����ʵ�֣������Ǿ����ʵ�֡�
//������仯�����ڶ������乲��ʱ�����ǽ��ⲿ�ֱ仯�Ĳ��ֳ�������پۺ� / �ϳɽ�����
//��һ������Ķ���仯���ؿ��Զ�̬�仯��ʱ��
//
//�ŵ㣺
//��ʵ�ֳ����������ʵ�ֳ���ʹ�ö���ľ���ʵ�������ڳ���������������תԭ��
//���õĿ���չ�ԡ�
//�ɶ�̬���л�ʵ�֡��Ž�ģʽʵ���˳����ʵ�ֵķ��룬��ʵ���Ž�ģʽʱ���Ϳ���ʵ�ֶ�̬��ѡ������ʵ�֡�
#include <iostream>
using namespace std;

//����App�࣬�ṩ�ӿ�
class App
{
public:
	virtual ~App() { cout << "~App()" << endl; }
	virtual void run() = 0;
};

//�����Appʵ����
class GameApp :public App
{
public:
	void run()
	{
		cout << "GameApp Running" << endl;
	}
};

//�����Appʵ����
class TranslateApp :public App
{
public:
	void run()
	{
		cout << "TranslateApp Running" << endl;
	}
};

//�����ֻ��࣬�ṩ�ӿ�
class MobilePhone
{
public:
	virtual ~MobilePhone() { cout << "~MobilePhone()" << endl; }
	virtual void appRun(App* app) = 0;  //ʵ��App���ֻ����Ž�
};

//������ֻ�ʵ����
class XiaoMi :public MobilePhone
{
public:
	void appRun(App* app)
	{
		cout << "XiaoMi: ";
		app->run();
	}
};

//������ֻ�ʵ����
class HuaWei :public MobilePhone
{
public:
	void appRun(App* app)
	{
		cout << "HuaWei: ";
		app->run();
	}
};

//int main()
//{
//	App* gameApp = new GameApp;
//	App* translateApp = new TranslateApp;
//	MobilePhone* mi = new XiaoMi;
//	MobilePhone* hua = new HuaWei;
//	mi->appRun(gameApp);
//	mi->appRun(translateApp);
//	hua->appRun(gameApp);
//	hua->appRun(translateApp);
//
//	delete hua;
//	hua = nullptr;
//	delete mi;
//	mi = nullptr;
//	delete gameApp;
//	gameApp = nullptr;
//	delete translateApp;
//	translateApp = nullptr;
//
//	return 0;
//}

