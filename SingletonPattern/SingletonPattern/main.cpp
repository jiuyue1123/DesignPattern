#include<iostream>
using namespace std;
#include"SingleObject.h"

int main()
{
	//���캯�����ɼ�
	//auto object = new SingleObject();
	auto object1 = SingleObject::CreateInstance();
	auto object2 = SingleObject::CreateInstance();
	if (object1 == object2)
		cout << "��ͬһ������" << endl;

	return 0;
}