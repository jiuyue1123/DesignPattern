#include"Factory.h"
#include<iostream>
using namespace std;
int main()
{
	auto Factory1 = new Factory();
	auto Shape1 = Factory1->getShape(CIRCLE);
	auto Shape2 = Factory1->getShape(SQUARE);
	auto Shape3 = Factory1->getShape(RECTANGLE);
	return 0;
}