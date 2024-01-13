#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

//vector容器
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
	//第一种遍历方式
	while (pBegin != pEnd)
	{
		cout << *pBegin << endl;
		pBegin++;
	}
	//第二种遍历方式
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << endl;
	}
	//第三种遍历方式
	for_each(v.begin(), v.end(), MyPrint);

}

int main()
{
	test();
	return 0;
}