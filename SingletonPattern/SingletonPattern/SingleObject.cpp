#include "SingleObject.h"
#include<iostream>
using namespace std;

SingleObject* SingleObject::CreateInstance()
{
	if (!Instance)
		Instance = new SingleObject();
	return Instance;
}

void SingleObject::Message()
{
	++count;
	cout << "Hello World" << endl;
}

void SingleObject::printCount()
{
	cout << "Count:" << count << endl;
}

SingleObject::SingleObject() :count(0)
{
	Message();
}

SingleObject::~SingleObject()
{
	if (Instance)
		delete Instance;
}
SingleObject* SingleObject::Instance = nullptr;


