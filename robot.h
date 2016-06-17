#pragma once
#include <iostream>
#include <string>

class Robot
{
	string serie;
	string material;
	double amperios;
	double precio;
public:
	Robot(string, string, double, double);
	string toString()const;
	~Robot();
	string getSerie();
	string getMaterial();
	double getAmperios();
	double getPrecio();
	void setSerie(string);
	void setMarterial(string);
	void setAmperios(double);
	void setPrecio(double);
};