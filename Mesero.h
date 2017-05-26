#include "Personal.h"
#include <string>

#pragma once
using namespace std;

class Mesero : public Personal{
	private:
		vector<string> listaplat;

	public:
		Mesero();
		Mesero(string,string,string,int,string,int,int,double, vector<string>*);
		string getListaplat();
		void setListaplat();

		void eliminarplat();

		void eliminartodos();

};
