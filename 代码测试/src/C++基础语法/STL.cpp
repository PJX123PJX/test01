#include "STL.h"


void string1::test01()
{
	//string();//����һ���յ��ַ���  
	//string(const string& str);//ʹ��һ��string�����ʼ����һ��string����
	//string(const char* s);//ʹ���ַ���s��ʼ��
	//string(int n, char c);//ʹ��n���ַ�c��ʼ�� 

	string str1;
	string str2(str1);
	char as[10] = { 'd','y' };
	string str3(as);
	string str4(5, 's');
}

void string1::test02()
{
	//string& operator=(const char* s);//char*�����ַ��� ��ֵ����ǰ���ַ���
	//string& operator=(const string &s);//���ַ���s������ǰ���ַ���
	//string& assign(const char *s);//���ַ���s������ǰ���ַ���
	//string& assign(const char *s, int n);//���ַ���s��ǰn���ַ�������ǰ���ַ���
	//string& assign(const string &s);//���ַ���s������ǰ�ַ���
	//string& assign(int n, char c);//��n���ַ�c������ǰ�ַ���
	//string& assign(const string &s, int start, int n);//��s��start��ʼn���ַ���ֵ���ַ���

	string str1 = "qwer";
	const char* char1 = str1.c_str();
	string str2 = char1;
	string str3 = str2;
	string str4; str4.assign(char1);
	string str5; str5.assign(char1, 2);
	string str6; str6.assign(str5);
	string str7; str7.assign(5,'j');
	string str8; str6.assign(str5,2,3);
}

void string1::test03()
{
	//char& operator[](int n);//ͨ��[]��ʽȡ�ַ�
	//char& at(int n);//ͨ��at������ȡ�ַ�

	string str1 = "qwer";
	char ch1 = str1[0];
	char ch2 = str1.at(0);
}

void string1::test04()
{
	//string& operator+=(const string& str);//����+=������
	//string& operator+=(const char* str);//����+=������
	//string& operator+=(const char c);//����+=������
	//string& append(const char *s);//���ַ���s���ӵ���ǰ�ַ�����β
	//string& append(const char *s, int n);//���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
	//string& append(const string &s);//ͬoperator+=()
	//string& append(const string &s, int pos, int n);//���ַ���s�д�pos��ʼ��n���ַ����ӵ���ǰ�ַ�����β
	//string& append(int n, char c);//�ڵ�ǰ�ַ�����β���n���ַ�c
}

void string1::test05()
{
	//int find(const string& str, int pos = 0) const; //����str��һ�γ���λ��,��pos��ʼ����
	//int find(const char* s, int pos = 0) const;  //����s��һ�γ���λ��,��pos��ʼ����
	//int find(const char* s, int pos, int n) const;  //��posλ�ò���s��ǰn���ַ���һ��λ��
	//int find(const char c, int pos = 0) const;  //�����ַ�c��һ�γ���λ��
	//int rfind(const string& str, int pos = npos) const;//����str���һ��λ��,��pos��ʼ����
	//int rfind(const char* s, int pos = npos) const;//����s���һ�γ���λ��,��pos��ʼ����
	//int rfind(const char* s, int pos, int n) const;//��pos����s��ǰn���ַ����һ��λ��
	//int rfind(const char c, int pos = 0) const; //�����ַ�c���һ�γ���λ��
	//string& replace(int pos, int n, const string& str); //�滻��pos��ʼn���ַ�Ϊ�ַ���str
	//string& replace(int pos, int n, const char* s); //�滻��pos��ʼ��n���ַ�Ϊ�ַ���s
	
}

void string1::test06()
{
	/*
	compare������>ʱ���� 1��<ʱ���� -1��==ʱ���� 0��
	�Ƚ����ִ�Сд���Ƚ�ʱ�ο��ֵ�˳����Խǰ���ԽС��
	��д��A��Сд��aС��
	*/
	//int compare(const string &s) const;//���ַ���s�Ƚ�
	//int compare(const char *s) const;//���ַ���s�Ƚ�

}

void string1::test07()
{
	//string substr(int pos = 0, int n = npos) const;//������pos��ʼ��n���ַ���ɵ��ַ���

}

void string1::test08()
{
	//string& insert(int pos, const char* s); //�����ַ���
	//string& insert(int pos, const string& str); //�����ַ���
	//string& insert(int pos, int n, char c);//��ָ��λ�ò���n���ַ�c
	//string& erase(int pos, int n = npos);//ɾ����Pos��ʼ��n���ַ� 

}

void string1::test09()
{
	//string ת char*
	string str = "it";
	const char* cstr = str.c_str();
	//char* ת string 
	char ds = 'y';
	char* s = &ds;
	string str1(s);

}