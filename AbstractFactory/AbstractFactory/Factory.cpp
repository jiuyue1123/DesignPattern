#include "Factory.h"

Shape* ColorFcatory::getShape(SHAPE_TYPE shape_type)
{
	return nullptr;
}

Color* ColorFcatory::getColor(COLOR_TYPE color_type)
{
	switch (color_type)
	{
	case RED:
		return new Red();
	case GREEN:
		return new Green();
	case BLUE:
		return new Blue();
	default:
		return nullptr;
	}
}

Shape* ShapeFactory::getShape(SHAPE_TYPE shape_type)
{
	switch (shape_type)
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

Color* ShapeFactory::getColor(COLOR_TYPE color_type)
{
	return nullptr;
}

AbstractFactory* FactoryProucter::CreateFactory(FACTORY_TYPE factory_type)
{
	switch (factory_type)
	{
	case SHAPE:
		return new ShapeFactory();
	case COLOR:
		return new ColorFcatory();
	default:
		return nullptr;
	}
}
