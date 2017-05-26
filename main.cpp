#include "Usuario.h"
#include "Cliente.h"
#include "Administrador.h"
#include "Personal.h"
#include "Mesero.h"
#include "Chef.h"
#include "Lavaplatos.h"
#include <string>
#include <iostream>
#include <vector>
#include <typeinfo>
using namespace std;
 
bool validarLogin(vector<Usuario*>,string);
int main(){

	/*Usuario* p = new Cliente ("mir","juan1","juan","juan",23,"123",10000000);
	cout<<p->getNombre();*/

	vector<Usuario*>usuarios;
	bool vivo = true;

	while(vivo){
		int op;
		cout<<"------Menu Principal------"<<endl;
		cout<<"1. Crear Administrador"<<endl;
		cout<<"2. Crear Cliente"<<endl;
		cout<<"3. Log In"<<endl;
		cout<<"4. Salir"<<endl;
		cin>>op;
		switch(op){
			case 1:{
				int aniocont;
				double sueldo;
				string user;
   				string password;
    			string nombre;
  				int edad;
    			string id;
    			int numero;
    			cout<<"Ingrese el username: ";
    			cin>>user;
   				cout<<"Ingrese la constraseña: ";
    			cin>>password;
    			cout<<"Ingrese el nombre: ";
    			cin>>nombre;
    			cout<<"Ingrese la edad. Debe ser mayor de 18: ";
    			cin>>edad;
    			cout<<"Ingrese el id: ";
    			cin>>id;
    			cout<<"Ingrese el numero. Deben ser mínimo 8 digitos: ";
    			cin>>numero;
    			cout<<"Ingrese el año en que se contrata: ";
    			cin>>aniocont;
    			cout<<"Ingrese el sueldo: ";
    			cin>>sueldo;
    			Usuario* a = new Administrador(user,password,nombre,edad,id,numero,aniocont,sueldo,0,0);
    			usuarios.push_back(a);
    			break;
				}
			case 2:{
				string user;
    			string password;
    			string nombre;
   				int edad;
  				string id;
    			int numero;
    			string direccion;
    			cout<<"Ingrese el username: ";
    			cin>>user;
    			cout<<"Ingrese la constraseña: ";
    			cin>>password;
   				cout<<"Ingrese el nombre: ";
    			cin>>nombre;
    			cout<<"Ingrese la edad. Debe ser mayor de 18: ";
    			cin>>edad;
    			cout<<"Ingrese el id: ";
    			cin>>id;
    			cout<<"Ingrese el numero. Deben ser mínimo 8 digitos: ";
    			cin>>numero;
    			cout<<"Ingrese la direccion: ";
    			getline(cin,direccion);
    			Usuario* c = new Cliente(direccion,user,password,nombre,edad,id,numero);
    			usuarios.push_back(c);
    			break;
    		}
    		case 3:{
    			string user;
    			string password;
    			Usuario* activo;
    			cout<<"Ingrese el username: ";
    			cin>>user;
    			if(validarLogin){
    				for (int i = 0; i < usuarios.size(); ++i)
					{
						if(usuarios[i]->getUser()==user){
							activo = usuarios[i];
							break;
						}
					}

					//activo=dynamic_cast<Personal*>(activo);
					cout<<typeid(*activo).name()<<endl;

    			}else{
    				cout<<"El usuario no existe."<<endl;
    			}

    		}
			}
		}
	}

	//delete p;


bool validarLogin(vector<Usuario*> users,string user){
	for (int i = 0; i < users.size(); ++i)
	{
		if(users[i]->getUser()==user){
			return true;
		}
	}
	return false;
}