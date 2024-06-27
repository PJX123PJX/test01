/*
* �ؼ����룺һ������������Ҫ���ʵĶ���(Ŀ����)��һ���Ǵ������,����������������ʵ��ͬһ���ӿ�,�ȷ��ʴ������ٷ�������Ҫ���ʵĶ���
*/

//����ģʽ��Ϊ���������ṩһ�ִ����Կ����������ķ��ʡ�
//��ĳЩ����£�һ�������ʺϻ��߲���ֱ��������һ�����󣬶������������ڿͻ��˺�Ŀ�����֮�����н����á�
//
//�ŵ㣺
//ְ����������ʵ�Ľ�ɫֻ����ʵ��ʵ�ʵ�ҵ���߼������ù��������Ǳ�ְ�������ͨ�����ڵĴ�����ɾ�������������������������
//�����������ڿͻ��˺�Ŀ�����֮�����н�����ã������ͱ�����Ŀ�����
//��չ�Ժá�

#include <iostream>
using namespace std;

class Gril
{
public:
	Gril(const string& name = "gril") :m_string(name) {}
	string getName()
	{
		return m_string;
	}
private:
	string m_string;
};

class Profession
{
public:
	virtual ~Profession() {}
	virtual void profess() = 0;
};

class YoungMan : public Profession
{
public:
	YoungMan(const Gril& gril) :m_gril(gril) {}
	void profess()
	{
		cout << "Young man love " << m_gril.getName().data() << endl;
	}

private:
	Gril m_gril;
};

class ManProxy : public Profession
{
public:
	ManProxy(const Gril& gril) :m_pMan(new YoungMan(gril)) {}
	~ManProxy()
	{
		delete m_pMan;
		m_pMan = nullptr;
	}
	void profess()
	{
		m_pMan->profess();
	}
private:
	YoungMan* m_pMan;
};

//int main(int argc, char *argv[])
//{
//	Gril gril("heihei");
//	ManProxy* proxy = new ManProxy(gril);
//	proxy->profess();
//
//	delete proxy;
//	proxy = nullptr;
//	return 0;
//}
