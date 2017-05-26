#include "Personal.h"
#include <string>
#include <vector>
#pragma once
using namespace std;

class Mesero : public Personal{
	private:
		vector<string> listaplat;

	public:
		Mesero();
		Mesero(string,string,string,int,string,int,int,double, vector<string>*);
		//string getListaplat();
		void setListaplat(string);

		void eliminarplat(int);

		void eliminartodos();

};
