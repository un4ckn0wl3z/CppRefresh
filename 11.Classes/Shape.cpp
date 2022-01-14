#include "Shape.h"

Shape::Shape(double length) {
	this->height = length;
	this->width = length;
}

Shape::Shape(double height, double width) {
	this->height = height;
	this->width = width;
}


Shape::~Shape() = default;

void Shape::SetHeight(double height) {
	this->height = height;
}

double Shape::GetHeight() {
	return this->height;
}


void Shape::SetWidth(double width) {
	this->width = width;
}

double Shape::GetWidth() {
	return this->width;
}

int Shape::GetNumOfShapes() {
	return numOfShapes;
}

double Shape::Area() {
	return this->height * this->width;
}

int Shape::numOfShapes = 0;