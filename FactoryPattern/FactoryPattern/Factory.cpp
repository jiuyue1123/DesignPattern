#include "Factory.h"

Shape* Factory::getShape(SHAPE_TYPE type)
{
	switch (type)
	{
	case CIRCLE:
		return new Circle();
	case SQUARE:
		return new Square();
	case RECTANGLE:
		return new Rectangle();
	default:
		return nullptr;
	}
}
