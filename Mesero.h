#include "Personal.h"
#include <string>

#pragma once
using namespace std;

class Mesero : public Personal{
	private:
		string listaplat;

	public:
		Mesero();
		Mesero(string,string,string,int,string,int,string);
		string getListaplat();
		void setListaplat();

};
