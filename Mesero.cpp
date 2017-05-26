#include "Mesero.h"
#include <string>

using namespace std;

Mesero::Mesero(){

}

Mesero::Mesero(string user, string password, string nombre, int edad, string id, int numero,int aniocont,double sueldo, vector<string>* listaplat):Personal(user,password,nombre,edad,id,numero,aniocont,sueldo){
	listaplat = listaplat;
}

/*string Mesero::getListaplat(){
	return listaplat;
}*/

void Mesero::setListaplat(string listaplat){
	listaplat = listaplat;
}

void Mesero::eliminarplat(int num){
	listaplat.erase(listaplat.begin() + num);
}

void Mesero::eliminartodos(){
	listaplat.clear();		
}
