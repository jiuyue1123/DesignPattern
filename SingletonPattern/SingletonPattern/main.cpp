#include<iostream>
using namespace std;
#include"SingleObject.h"

int main()
{
	//构造函数不可见
	//auto object = new SingleObject();
	auto object1 = SingleObject::CreateInstance();
	auto object2 = SingleObject::CreateInstance();
	if (object1 == object2)
		cout << "是同一个对象" << endl;

	return 0;
}