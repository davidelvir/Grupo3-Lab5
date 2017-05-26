#include "Usuario.h"
#include <string>
#include <iostream>
using namespace std;

Usuario::Usuario(){

}

Usuario::Usuario(string user,string password,string nombre,int edad,string id, int numero){

  this->user = user;
  this->password = password;
  this->nombre = nombre;
  Usuario::setEdad(edad);
  this->id = id;
  Usuario::setNumero(numero);
}

void Usuario::setUser(string pUser){
  user = pUser;
}
void Usuario::setPassword(string pPassword){
  password = pPassword;
}
void Usuario::setNombre(string pNombre){
  nombre = pNombre;
}
void Usuario::setEdad(int pEdad){
	while(pEdad<18){
		cout<<"La edad no puede ser menor a 18. Ingrese otro valor";
		cin>>pEdad;
	}
  edad = pEdad;
}
void Usuario::setID(string pID){
  id = pID;
}
void Usuario::setNumero(int pNumero){
	while(pNumero<9000000){
		cout<<"El numero debe ser de al menos 8 digitos. Ingrese otro valor: ";
		cin>>pNumero;
	}
  numero = pNumero;
}
string Usuario::getUser(){
  return user;
}
string Usuario::getPassword(){
  return password;
}
string Usuario::getNombre(){
  return nombre;
}
int Usuario::getEdad(){
  return edad;
}
string Usuario::getID(){
  return id;
}
int Usuario::getNumero(){
  return numero;
}
