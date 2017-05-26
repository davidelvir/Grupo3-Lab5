#ifndef LAVAPLATOS_H
#define LAVAPLATOS_H
#include <string>

using namespace std;

class Lavapaltos : public Personal{
public:
	int motivacion;
	Lavaplatos();
	Lavaplatos(int,double,string,string,string,int,string,int);
	bool renunciar();
	bool aumento();
};

#endif