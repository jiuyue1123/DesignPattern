#include<iostream>
using namespace std;
#include"Factory.h"
int main()
{
	auto factory_Producer = new FactoryProucter();
	auto factory1 = factory_Producer->CreateFactory(COLOR);
	auto cf_1 = factory1->getColor(RED);
	auto cf_2 = factory1->getColor(GREEN);
	auto cf_3 = factory1->getColor(BLUE);
	auto factory2 = factory_Producer->CreateFactory(SHAPE);
	auto sf_1 = factory2->getShape(CIRCLE);
	auto sf_2 = factory2->getShape(SQUARE);
	auto sf_3 = factory2->getShape(RECTANGLE);
	return 0;
}