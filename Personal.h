#include "Usuario.h"
#include <string>

#pragma once
using namespace std;

class Personal : public Usuario{
	private:
		int aniocont;
		double sueldo;

	public:
		Personal();
		Personal(int, double);
		int getAniocont();
		void setAniocont(int);
		double getSueldo();
		void setSueldo(double);
	
};