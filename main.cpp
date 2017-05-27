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
#include <fstream>
using namespace std;
 
bool validarLogin(vector<Usuario*>,string);
vector<Usuario*>agregar(vector<Usuario*>,int);
vector<Usuario*>eliminar(vector<Usuario*>);
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
    			string t;
    			cin>>t;
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
					cout<<"Ingrese la constraseña: ";
					cin>>password;
					if(activo->getPassword()==password){
					//activo=dynamic_cast<Personal*>(activo);
					//cout<<typeid(*activo).name()<<endl;
						bool salir = false;
						while(!salir){
							if(typeid(*activo).name()==typeid(Administrador).name()){
								int opA;
								cout<<"Elija una opcion"<<endl;
								cout<<"1. Contratar"<<endl;
								cout<<"2. Despedir"<<endl;
								cout<<"3. Aumentar/Decrementar sueldo"<<endl;
								cout<<"4. Empleado con mayor sueldo"<<endl;
								cout<<"5. Empleado con menor sueldo"<<endl;
								cout<<"6. Promedio de salarios"<<endl;
								cout<<"7. Salir"<<endl;
								cin>>opA;
								switch(opA){
									case 1:{
										int op;
    									cout<<"------Sub Menu Agregar------"<<endl;
    									cout<<"1. Agregar Mesero"<<endl;
    									cout<<"2. Agregar Lavaplatos"<<endl;
    									cout<<"3. Agregar Chef"<<endl;
    
    									cin>>op;
										usuarios = agregar(usuarios,op);

										break;
									}
									case 2:{
										usuarios=eliminar(usuarios);
										break;
									}
									case 3:{
                                        
                                        
										break;
									}
									case 4:{
										break;
									}
									case 5:{
										break;
									}
									case 6:{
										break;
									}
									case 7:{
										salir = true;
										break;
									}

								}
							}
							if(typeid(*activo).name()==typeid(Cliente).name()){
								int opC;
								cout<<"Elija una opcion: "<<endl;
								cout<<"1. Dar rating"<<endl;
								cout<<"2. Salir"<<endl;
								cin>>opC;
								Cliente* temp = dynamic_cast<Cliente*>(activo);
								switch(opC){
									
									case 1:{
										int rating;
										cout<<"Ingrese el rating que le da al restaurante: ";
										cin>>rating;
										temp->setRating(rating);
										cout<<"Rating ingresado!"<<endl;
										break;
									}
									case 2:{
										salir = true;
										break;
									}
								}
							}
							if(typeid(*activo).name()==typeid(Mesero).name()){
								Mesero* m = dynamic_cast<Mesero*>(activo);
								int opM;
								cout<<"Ingrese 1 para dejar un plato, ingrese 2 para botar todos los paltos, ingrese 3 para salir: ";
								cin>>opM;
								switch(opM){
									case 1:{
										m->eliminartodos();
										cout<<"Platos eliminados!"<<endl;
										break;
									}
									case 2:{
										m->eliminartodos();
										cout<<"Platos eliminados!"<<endl;
										break;
									}
									case 3:{
										salir = true;
										break;
									}
								}
							}
							if(typeid(*activo).name()==typeid(Chef).name()){

							}
							if(typeid(*activo).name()==typeid(Lavaplatos).name()){
								Lavaplatos* l = dynamic_cast<Lavaplatos*>(activo);
								int opL;
								cout<<"Ingrese 1 para renunciar, ingrese 2 para pedir aumento y 3 para salir: ";
								cin>>opL;
								switch(opL){
									case 1:{

										if(l->renunciar()){
											cout<<"Ha renunciado!!";
										}else{
											cout<<"No puede renunciar!";
										}
										break;
									}
									case 2:{
										if(l->aumento()){
											int aumento;
											cout<<"Ingrese el nuevo salario: ";
											cin>>aumento;
											l->setSueldo(aumento);
										}else{
											cout<<"NO califica para un aumento!";
										}
										break;
									case 3:{
										salir = true;
										break;
									}
									}
								}
							}
						}
					}

    			}else{
    				cout<<"El usuario no existe."<<endl;
    			}
    		break;
    		}
    		case 4:{
    			fstream entrada;
    			entrada.open("usuarios.txt",ios::out);
    			for (int i = 0; i < usuarios.size(); ++i)
    			{
    				entrada<<usuarios[i]->getNombre()<<" "<<usuarios[i]->getUser()<<" "<<usuarios[i]->getPassword()<<" "<<usuarios[i]->getID()<<endl;
    			}
    			entrada.close();
    			vivo =false;
    			break;
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


vector<Usuario*> agregar(vector<Usuario*> usuarios,int op){
    
    
        if (op == 1)
        {
            string user;
            string password;
            string nombre;
            int edad;
            string id;
            int numero;
            int aniocont;
            double sueldo;
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
            cout << "Ingrese el Año de Contratacion: ";
            cin >> aniocont;
            cout << "Ingrese el sueldo: ";
            cin >> sueldo;
            Usuario* m = new Mesero(user, password, nombre, edad, id, numero, aniocont, sueldo);
            usuarios.push_back(m);
        }    
        if (op == 2)
        {
            string user;
            string password;
            string nombre;
            int edad;
            string id;
            int numero;
            int aniocont;
            double sueldo;
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
            cout << "Ingrese el Año de Contratacion: ";
            cin >> aniocont;
            cout << "Ingrese el sueldo: ";
            cin >> sueldo;
            Usuario* l = new Lavaplatos(user, password, nombre, edad, id, numero, aniocont, sueldo);
            usuarios.push_back(l); 
        }   
        if (op == 3)
        {   
            string user;
            string password;
            string nombre;
            int edad;
            string id;
            int numero;
            int aniocont;
            double sueldo;
            string platillo;
            int rating;
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
            cout << "Ingrese el nombre del platillo: ";
            cin >> platillo;
            cout << "Ingrese el rating del platillo: ";
            cin >> rating;
            Usuario* c = new Chef(platillo, rating, aniocont, sueldo, user, password, nombre, edad, id, numero);
            usuarios.push_back(c);

        }
    
    return usuarios;
}

vector<Usuario*> eliminar(vector<Usuario*> usuarios){
        int numbers =  0;
        cout << "Ingrese la posicion que quiere eliminar: " << endl;
        for(int i = 0; i < usuarios.size(); i++){
            cout << i << " --> " << usuarios[i] -> getNombre() << endl;
        }
        cin >> numbers;
        usuarios.erase(usuarios.begin() + numbers);
        cout << "El empleado ha sido despedido" << endl;
        return usuarios;
}

vector<Usuario*> AumDec(vector<Usuario*> usuarios){
        int numbers =  0;
        Personal* p;
        cout << "Ingrese la posicion a la que desea Aumentar o Decrementar el sueldo: " << endl;
        for(int i = 0; i < usuarios.size(); i++){
            cout << i << " --> " << usuarios[i] -> getNombre() << endl;
        }
        cin >> numbers;
        if (typeid(*usuarios[i]).name() == typeid(Personal).name())
        {
            p = dynamic_cast<Personal*>(usuarios[i]);
            
        }
        
        //usuarios.erase(usuarios.begin() + numbers);
        return usuarios;
}
