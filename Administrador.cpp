#include "Administrador.h"
#include <string>

using namespace std;

Administrador::Administrador(){

}

Administrador::Administrador(int empcontratados, int empdespedidos){
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