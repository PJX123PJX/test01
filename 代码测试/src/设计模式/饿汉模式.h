//����ʽ���̰߳�ȫ��ע��һ��Ҫ�ں��ʵĵط�ȥdelete��
class Singleton0
{
public:
	static Singleton0* getInstance();
private:
	Singleton0() {}                                    //���캯��˽��
	Singleton0(const Singleton0&) = delete;            //��ȷ�ܾ�
	Singleton0& operator=(const Singleton0&) = delete; //��ȷ�ܾ�

	static Singleton0* m_pSingleton0;
};

Singleton0* Singleton0::m_pSingleton0 = new Singleton0();

Singleton0* Singleton0::getInstance()
{
	return m_pSingleton0;
}
