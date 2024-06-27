/*
* �ؼ����룺Handler��ָ�����ϼ���handleRequest()���ж��Ƿ���ʣ��������򴫵ݸ��ϼ���
*/

//ְ����ģʽ��ʹ��������л��ᴦ�����󣬴Ӷ���������ķ����ߺͽ�����֮ǰ����Ϲ�ϵ������Щ��������һ��������������������������ֱ����һ����������Ϊֹ��
//ְ�����ϵĴ����߸��������󣬿ͻ�ֻ��Ҫ�������͵�ְ�����ϼ��ɣ������������Ĵ���ϸ�ں�����Ĵ��ݣ�����ְ����������ķ����ߺ�����Ĵ����߽����ˡ�
#include <iostream>
using namespace std;

enum RequestLevel
{
	Level_One = 0,
	Level_Two,
	Level_Three,
	Level_Num
};

//�������ߣ�Handler����ɫ���ṩְ������ͳһ�ӿڡ�
class Leader
{
public:
	Leader(Leader* leader) :m_leader(leader) {}
	virtual ~Leader() {}
	virtual void handleRequest(RequestLevel level) = 0;
protected:
	Leader* m_leader;
};

//���崦���ߣ�Concrete Handler����ɫ
class Monitor :public Leader   //����1
{
public:
	Monitor(Leader* leader) :Leader(leader) {}
	void handleRequest(RequestLevel level)
	{
		if (level < Level_Two)
		{
			cout << "Mointor handle request : " << level << endl;
		}
		else
		{
			m_leader->handleRequest(level);
		}
	}
};

//���崦���ߣ�Concrete Handler����ɫ
class Captain :public Leader    //����2
{
public:
	Captain(Leader* leader) :Leader(leader) {}
	void handleRequest(RequestLevel level)
	{
		if (level < Level_Three)
		{
			cout << "Captain handle request : " << level << endl;
		}
		else
		{
			m_leader->handleRequest(level);
		}
	}
};

//���崦���ߣ�Concrete Handler����ɫ
class General :public Leader   //����3
{
public:
	General(Leader* leader) :Leader(leader) {}
	void handleRequest(RequestLevel level)
	{
		cout << "General handle request : " << level << endl;
	}
};

int main()
{
	Leader* general = new General(nullptr);
	Leader* captain = new Captain(general);
	Leader* monitor = new Monitor(captain);
	monitor->handleRequest(Level_One);

	delete monitor;
	monitor = nullptr;
	delete captain;
	captain = nullptr;
	delete general;
	general = nullptr;
	return 0;
}
