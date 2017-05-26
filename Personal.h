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
		Personal(string,string,string,int,string,int, int, double);
		int getAniocont();
		void setAniocont(int);
		double getSueldo();
		void setSueldo(double);
	
};