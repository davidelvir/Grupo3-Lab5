#ifndef PERSONAL_H
#define PERSONAL_H

#include "Personal.h"
#include <string>
#include <iostream>

using namespace std;

class Chef : public Personal{
	public:
		string platillo;
		int rating;

		Chef();
		Chef(string,int,int,double,string,string,string,int,string,int);

		



};

#endif