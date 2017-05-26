#include "Administrador.h"
#include <string>

using namespace std;

Administrador::Administrador(){

}

Administrador::Administrador(string user, string password, string nombre, int edad, string id, int numero, int empcontratados, int empdespedidos):Usuario(user,password,nombre,edad,id,numero){
	this -> empcontratados = empcontratados;
	this -> empdespedidos = empdespedidos;
}

int Administrador::getEmpcontrat.ados(){
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