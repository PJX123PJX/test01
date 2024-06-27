//懒汉式：加lock，线程安全
#include<mutex>
std::mutex mt;

class Singleton1
{
public:
	static Singleton1* getInstance();
private:
	Singleton1() {}                                    //构造函数私有
	Singleton1(const Singleton1&) = delete;            //明确拒绝
	Singleton1& operator=(const Singleton1&) = delete; //明确拒绝

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
