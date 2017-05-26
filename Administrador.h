#include "Personal.h"
#include <string>

#pragma once
using namespace std;

class Administrador : public Personal {
	private:
		int empcontratados;
		int empdespedidos;

	public:
		Administrador();
		Administrador(string,string,string,int,string,int,int, int);
		int getEmpcontratados();
		void setEmpcontratados(int);
		int Empdespedidos();
		void Empdespedidos(int);
	
};