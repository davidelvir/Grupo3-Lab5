#include "Chef.h"
#include <iostream>
#include <string>

using namespace std;

Chef::Chef(){

}
Chef::Chef(string platillo,int rating,int contratacion,double sueldo,string user,string password,string nombre,int edad,string id,int numero):Personal(user,password,nombre,edad,id,numero,contratacion,sueldo){
	this->platillo = paltillo;
	this->rating = rating;

}