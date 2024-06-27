/*
* �ؼ����룺�������̳л��������еĶ���ʵ����Ҫ��Ŀ��ӿڡ�

* ����ʾ���У���������֮ǰ����һ��˫�˶��У��µ�����Ҫ��ʹ��ջ�Ͷ�������ɡ�
	˫�˶��п�����ͷβɾ��������Ԫ�ء���ջ��һ���Ƚ���������ݽṹ���������ʱ��ӵ�ջ�Ķ�����ɾ������ʱ��ɾ   ��ջ���������ݡ����������ȫ���Խ�һ�����е�˫�˶��������һ��ջ��
*/

//������ģʽ���Խ�һ����Ľӿ�ת���ɿͻ���ϣ������һ���ӿڣ�ʹ��ԭ�����ڽӿڲ����ݶ�������һ��������Щ�������һ������ͨ�׵Ľ����ǵ������Ѿ�����һЩ�࣬
//����Щ�಻�������µ����󣬴�ʱ�Ϳ��Կ����Ƿ��ܽ����е�������ɿ���������������ࡣ����������Ҫ�̳л��������е��࣬ʵ����Ҫ��Ŀ��ӿڡ�
//
//ȱ�㣺�����ʹ��������������ϵͳ�ǳ����ң�����������а��ա����磬�����������õ��� A �ӿڣ���ʵ�ڲ���������� B �ӿڵ�ʵ�֣�
//      һ��ϵͳ���̫��������������������һ�����ѡ����������Ǻ��б�Ҫ�����Բ�ʹ��������������ֱ�Ӷ�ϵͳ�����ع���

#include <iostream>
using namespace std;

//˫�˶��У� ��������
class Deque
{
public:
	void push_back(int x)
	{
		cout << "Deque push_back:" << x << endl;
	}
	void push_front(int x)
	{
		cout << "Deque push_front:" << x << endl;
	}
	void pop_back()
	{
		cout << "Deque pop_back" << endl;
	}
	void pop_front()
	{
		cout << "Deque pop_front" << endl;
	}
};

//˳���࣬����Ŀ����
class Sequence
{
public:
	virtual void push(int x) = 0;
	virtual void pop() = 0;
};

//ջ,����ȳ�, ������
class Stack :public Sequence
{
public:
	//��Ԫ����ӵ���ջ�Ķ�����
	void push(int x) override
	{
		m_deque.push_front(x);
	}
	//�Ӷ�ջ��ɾ������Ԫ��
	void pop() override
	{
		m_deque.pop_front();
	}
private:
	Deque m_deque;
};

//���У��Ƚ��ȳ���������
class Queue :public Sequence
{
public:
	//��Ԫ����ӵ�����β��
	void push(int x) override
	{
		m_deque.push_back(x);
	}
	//�Ӷ�����ɾ������Ԫ��
	void pop() override
	{
		m_deque.pop_front();
	}
private:
	Deque m_deque;
};
