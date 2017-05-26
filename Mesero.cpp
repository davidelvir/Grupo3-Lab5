#include "Mesero.h"
#include <string>

using namespace std;

Mesero::Mesero(){

}

Mesero::Mesero(string user, string password, string nombre, int edad, string id, int numero, string listaplat):Usuario(user,password,nombre,edad,id,numero){
	this -> listaplat = listaplat;
}

string Mesero::getListaplat(){
	return listaplat;
}

void Mesero::setListaplat(string listaplat){
	this -> listaplat = listaplat;
}