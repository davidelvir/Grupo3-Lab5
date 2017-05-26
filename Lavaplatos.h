#ifndef LAVAPLATOS_H
#define LAVAPLATOS_H
#include <string>
#include "Personal.h"
using namespace std;

class Lavaplatos : public Personal{
public:
	int motivacion;
	Lavaplatos();
	Lavaplatos(string,string,string,int,string,int,int,double);
	bool renunciar();
	bool aumento();
};

#endif