#include "Mesero.h"
#include <string>

using namespace std;

Mesero::Mesero(){

}

Mesero::Mesero(string listaplat){
	this -> listaplat = listaplat;
}

string Mesero::getListaplat(){
	return listaplat;
}

void Mesero::setListaplat(string listaplat){
	this -> listaplat = listaplat;
}