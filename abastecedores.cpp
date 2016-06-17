#include "robot.h"
#include "abastecedores.h"
#include <string>
#include <sstream>
#include <iostream>
using std::string;
using std::stringstream;

Abastecedores::Abastecedores(string serie, string material, double amperios, double precio):Robot(serie, material, amperios, precio){
	
}

string Abastecedores::toString()const{
	stringstream ss;
	ss << "Abastecedores: " << Robot::toString();
	return ss.str();
}