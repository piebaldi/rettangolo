/// \file rectangle.cpp
///	\brief class Rectangle: implementation of the functions
///
///	Details.
///

#include<iostream>
#include "Rectangle.h"

/// @brief default constructor 
Rectangle::Rectangle() {

	cout << "Rectangle - constructor - default" << endl;

	width = 0;
	length = 0;

}

/// @brief constructor 
/// @param w width in pixels
/// @param h length in pixels
Rectangle::Rectangle(int w, int l) {

	width = 0;
	length = 0;

	cout << "Rectangle - constructor" << endl;

	if (w <= 0)
		cout << "WARNING: Rectangle - constructor: width should be > 0" << endl;
	else
		width = w;

	if (l <= 0)
		cout << "WARNING: Rectangle - constructor: length should be > 0" << endl;
	else
		length = l;



}

/// @brief destructor 
Rectangle::~Rectangle() {

	cout << "Rectangle - destructor" << endl;

}

/// @brief copy constructor 

Rectangle::Rectangle(const Rectangle &r) {

	cout << "Rectangle - copy constructor" << endl;
	
	width = r.width;
	length = r.length;

}


/// @brief set width of the object
/// @param w width in pixels
void Rectangle::SetWidth(int w) {

	if (w < 0) {
		cout << "WARNING: Rectangle - SetWidth: width should be > 0" << endl;
		return;
	}
	if (w > 0) {
		cout << "Rectangle -Setwidth: width is ok" << endl;
		return;
	}
	width = w;
	
}

/// @brief set length of the object
/// @param l length in pixels
void Rectangle::SetLength(int l) {

	if (l < 0) {
		cout << "WARNING: Rectangle - SetLength: length should be > 0" << endl;
		return;
	}
	if (l > 0) {
		cout << "Rectangle -Setwidth: length is ok" << endl;
		return;
	}
	length = l;

}

/// @brief calculate the perimeter of the rectangle 
/// @param w width in pixels
/// @param l length in pixels 
float Rectangle::GetPerimeter() {
	return 2 * (width + length);
}

/// @brief set width and length of the object
/// @param w width in pixels
/// @param l length in pixels
void Rectangle::SetDim(int w, int l) {

	SetWidth(w);
	SetLength(w);
}


/// @brief set width of the object
/// @param w width in pixels
float Rectangle::GetWidth() {

	
	return width;


}

/// @brief set length of the object
/// @param l length in pixels
float Rectangle::GetLength() {

	return length;
}

float Rectangle::GetArea() {

	return width * length;

}

/// @brief set width and length of the object
/// @param w width in pixels
/// @param l length in pixels
void Rectangle::GetDim(int& w, int& l) {

	w = width;
	l = length;
	return;
	
}


/// @brief overload of operator=
/// @param w width in pixels
/// @param l length in pixels
Rectangle& Rectangle::operator=(const Rectangle &r) {
	cout << "Rectangle - overload operator" << endl;

	width = r.width;
	length = r.length;

	return *this;

}


bool Rectangle::operator==(const Rectangle& r) {

	if (r.width == width && r.length == length)
		return true;

	return false;
}
