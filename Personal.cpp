#include "Personal.h"
#include <string>

using namespace std;

Personal::Personal(){

}

Personal::Personal(string user, string password, string nombre, int edad, string id, int numero, int aniocont, double sueldo):Usuario(user,password,nombre,edad,id,numero){
	this -> aniocont = aniocont;
	this -> sueldo = sueldo;
}

int Personal::getAniocont(){
	return aniocont;
}

void Personal::setAniocont(int aniocont){
	this -> aniocont = aniocont;
}

double Personal::getSueldo(){
	return sueldo;
}

void Personal::setSueldo(double sueldo){
	this -> sueldo = sueldo;
}