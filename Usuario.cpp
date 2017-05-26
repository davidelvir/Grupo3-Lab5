#include "Ususario.h"
#include <string>

using namespace std;

Usuario::Usuario(){

}

Usuario::Usuario(string user,string password,string nombre,int edad,string id, int numero){

  this->user = user;
  this->password = password;
  this->nombre = nombre;
  this->edad = edad;
  this->id = id;
  this->numero = numero;
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
  edad = pEdad;
}
void Usuario::setID(string pID){
  id = pID;
}
void Usuario::setNumero(int pNumero){
  numero = pNumero;
}
string Usuario::getUser(){
  return usuario;
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
