#include "Lavaplatos.h"
#include <iostream>
#include <string>

Lavaplatos::Lavaplatos(){

}
Lavaplatos::Lavaplatos(int contratacion,double sueldo,string user,string password,string nombre,int edad,string id,int numero):Personal(contratacion,sueldo,user,password,nombre,edad,id,numero){
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