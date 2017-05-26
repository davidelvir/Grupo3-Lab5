#include "Cliente.h"
#include <string>
#include <iostream>

using namespace std;

Cliente::Cliente(){

}

Cliente::Cliente(string dir,int rating,string user,string password,string nombre,int edad, string id,int numero):Usuario(user,password,nombre,edad,id,numero){

  this->direccion = dir;
  this->rating = rating;

}
void Cliente::setDireccion(string direccion){

	this->direccion = direccion;
}

void Cliente::setRating(int pRating){
	while(pRating<1 || pRating >5){
		cout<<"El rating debe estar entre 1 y 5. Ingreselo de nuevo: ";
		cin>>rating;
	}
	rating = pRating;
}
