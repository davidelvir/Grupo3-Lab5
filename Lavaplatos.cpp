#include "Lavaplatos.h"
#include <iostream>
#include <string>

Lavaplatos::Lavaplatos(){

}
Lavaplatos::Lavaplatos(string user,string password,string nombre,int edad,string id,int numero,int contratacion,double sueldo):Personal(user,password,nombre,edad,id,numero,contratacion,sueldo){
	this->motivacion = 20;
}

bool Lavaplatos::renunciar(){

	if(motivacion<=25){
		return true;
	}
	else{
		return false;
	}
}
bool Lavaplatos::aumento(){
	if(motivacion>=100){
		return true;
	}else{
		return false;
	}
}