/*
* 关键代码：构造函数是私有的，不能通过赋值运算，拷贝构造等方式实例化对象。
*/

//懒汉式一般实现：非线程安全，getInstance返回的实例指针需要delete
class Singleton
{
public:
	static Singleton* getInstance();
	~Singleton() {}

private:
	Singleton() {}	                                     //构造函数私有
	Singleton(const Singleton& obj) = delete;            //明确拒绝 拷贝构造
	Singleton& operator=(const Singleton& obj) = delete; //明确拒绝 赋值运算

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
