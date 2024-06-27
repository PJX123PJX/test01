//饿汉式：线程安全，注意一定要在合适的地方去delete它
class Singleton0
{
public:
	static Singleton0* getInstance();
private:
	Singleton0() {}                                    //构造函数私有
	Singleton0(const Singleton0&) = delete;            //明确拒绝
	Singleton0& operator=(const Singleton0&) = delete; //明确拒绝

	static Singleton0* m_pSingleton0;
};

Singleton0* Singleton0::m_pSingleton0 = new Singleton0();

Singleton0* Singleton0::getInstance()
{
	return m_pSingleton0;
}
