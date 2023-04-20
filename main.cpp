#include<iostream>

#include "Rectangle.h"

int main() {

	Rectangle rectA(10, 5);
	Rectangle rectB = rectA;
	Rectangle rectC, rectD;

	rectC = rectB;

	rectD.SetDim(1, 1);

	if (rectC == rectB)
		cout << "rectC has the same size of rectB " << endl;
	else
		cout << "rectC has not the same size of rectB " << endl;


	return 0;

}