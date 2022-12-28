#pragma once
#include "products.h"

enum SHAPE_TYPE
{
	CIRCLE,
	SQUARE,
	RECTANGLE
};

class Shape
{
public:
	virtual void draw() = 0;
};

class Circle :public Shape
{
public:
	Circle() { draw(); }
	void draw();
};

class Square :public Shape
{
public:
	Square() { draw(); }
	void draw();
};

class Rectangle :public Shape
{
public:
	Rectangle() { draw(); }
	void draw();
};
