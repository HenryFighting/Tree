#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

//vector����
void MyPrint(int val)
{
	cout << val << endl;
}

void test()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	vector<int>::iterator pBegin = v.begin();
	vector<int>::iterator pEnd = v.end();
	//��һ�ֱ�����ʽ
	while (pBegin != pEnd)
	{
		cout << *pBegin << endl;
		pBegin++;
	}
	//�ڶ��ֱ�����ʽ
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << endl;
	}
	//�����ֱ�����ʽ
	for_each(v.begin(), v.end(), MyPrint);

}

int main()
{
	test();
	return 0;
}