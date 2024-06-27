//����ʽ����lock���̰߳�ȫ
#include<mutex>
std::mutex mt;

class Singleton1
{
public:
	static Singleton1* getInstance();
private:
	Singleton1() {}                                    //���캯��˽��
	Singleton1(const Singleton1&) = delete;            //��ȷ�ܾ�
	Singleton1& operator=(const Singleton1&) = delete; //��ȷ�ܾ�

	static Singleton1* m_pSingleton1;

};
Singleton1* Singleton1::m_pSingleton1 = nullptr;

Singleton1* Singleton1::getInstance()
{
	if (m_pSingleton1 == nullptr)
	{
		mt.lock();
		m_pSingleton1 = new Singleton1();
		mt.unlock();
	}
	return m_pSingleton1;
}
