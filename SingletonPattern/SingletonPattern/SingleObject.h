#pragma once
class SingleObject
{
public:
	static SingleObject* CreateInstance();
	void Message();
	void printCount();
private:
	int count;
	SingleObject();
	static SingleObject* Instance;
	~SingleObject();
};




