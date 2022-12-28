#pragma once
enum FACTORY_TYPE
{
	SHAPE,
	COLOR
};
enum SHAPE_TYPE
{
	CIRCLE,
	SQUARE,
	RECTANGLE
};
enum COLOR_TYPE
{
	RED,
	GREEN,
	BLUE
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

class Rectangle :public Shape
{
public:
	Rectangle() { draw(); }
	void draw();
};

class Square :public Shape
{
public:
	Square() { draw(); }
	void draw();
};

class Color
{
	virtual void fill() = 0;
};

class Red :public Color
{
public:
	Red() { fill(); }
	void fill();
};

class Green :public Color
{
public:
	Green() { fill(); }
	void fill();
};

class Blue :public Color
{
public:
	Blue() { fill(); }
	void fill();
};