/*
* �ؼ����룺���캯����˽�еģ�����ͨ����ֵ���㣬��������ȷ�ʽʵ��������
*/

//����ʽһ��ʵ�֣����̰߳�ȫ��getInstance���ص�ʵ��ָ����Ҫdelete
class Singleton
{
public:
	static Singleton* getInstance();
	~Singleton() {}

private:
	Singleton() {}	                                     //���캯��˽��
	Singleton(const Singleton& obj) = delete;            //��ȷ�ܾ� ��������
	Singleton& operator=(const Singleton& obj) = delete; //��ȷ�ܾ� ��ֵ����

	static Singleton* m_pSingleton;
};

Singleton* Singleton::m_pSingleton = nullptr;

Singleton* Singleton::getInstance()
{
	if (m_pSingleton == nullptr)
	{
		m_pSingleton = new Singleton;
	}
	return m_pSingleton;
}
