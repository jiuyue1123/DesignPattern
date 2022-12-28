#pragma once
#include"Products.h"

class AbstractFactory
{
public:
	virtual Shape* getShape(SHAPE_TYPE shape_type) = 0;
	virtual Color* getColor(COLOR_TYPE color_type) = 0;
};
class ColorFcatory:public AbstractFactory
{
public:
	ColorFcatory() = default;
	~ColorFcatory() {};
	Shape* getShape(SHAPE_TYPE shape_type);
	Color* getColor(COLOR_TYPE color_type);
};

class ShapeFactory :public AbstractFactory
{
public:
	ShapeFactory() = default;
	~ShapeFactory() {};
	Shape* getShape(SHAPE_TYPE shape_type);
	Color* getColor(COLOR_TYPE color_type);
};

class FactoryProucter
{
public:
	FactoryProucter() = default;
	~FactoryProucter() {}
	AbstractFactory* CreateFactory(FACTORY_TYPE factory_type);
};