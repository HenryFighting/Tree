#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Person 
{
public:
	Person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}

	string m_name;
	int m_age;
};
void test()
{
	Person p1("aaa", 10);
	Person p2("bbb", 20);

	vector<Person>v;
	v.push_back(p1);
	v.push_back(p2);
	//±éÀú
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "ÐÕÃû  " << (*it).m_name<<"ÄêÁä    " <<(*it).m_age<< endl;
	}
}
int mian()
{
	test();
	return 0;
}