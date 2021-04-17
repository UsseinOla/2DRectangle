#pragma once

#include "Point2D.h"

class Rectangle 
{
public:

//Methods for constructor a Rectangle with initial size and coordinate 
	Rectangle(float Width, float Height, float X, float Y);
	Rectangle(Point2D& pOne, Point2D& pTow);

	//copy construcor 
	Rectangle(const Rectangle& copy);

	//Assigment operator 
	Rectangle& operator =(const Rectangle& rhs);



	//Method in the class that allows us to check for collision between axis-aligned Rectangle
    
	bool checkCollision(Rectangle& a);
	
	//Method for testing collision/intersaction with 2D point
	bool checkCollision(Point2D& );

	//Method for printing the coordinates of the rectangle for testing purposes
	void printCoordinates();

	//Overloaded operators
	bool operator ==(const Rectangle& rhs);
	bool operator !=(const Rectangle& rhs);


private:
	float width;
	float height;

	Point2D bottomLeft;
	Point2D bottomRight;
	Point2D topLeft;
	Point2D topRight;









};