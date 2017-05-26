#include "Administrador.h"
#include <string>

using namespace std;

Administrador::Administrador(){

}

Administrador::Administrador(string user, string password, string nombre, int edad, string id, int numero, int aniocont, double sueldo, int empcontratados, int empdespedidos):Personal(user,password,nombre,edad,id,numero,aniocont,sueldo){
	this -> empcontratados = empcontratados;
	this -> empdespedidos = empdespedidos;
}

int Administrador::getEmpcontratados(){
	return empcontratados;
}

void Administrador::setEmpcontratados(int empcontratados){
	this -> empcontratados = empcontratados;
}

int Administrador::getEmpdespedidos(){
	return empdespedidos;
}

void Administrador::setEmpdespedidos(int empdespedidos){
	this -> empdespedidos = empdespedidos;
}