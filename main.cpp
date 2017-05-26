#include "Usuario.h"
#include "Cliente.h"
#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main(){

	Usuario* p = new Cliente ("mir","juan1","juan","juan",23,"123",10000000);
	cout<<p->getNombre();

	bool vivo = true;

	/*while(vivo){
		int op;
		cout<<"------Menu Principal------"<<endl;
		cout<<"1. Crear personal"<<endl;
		cout<<"2. Crear cliente"<<endl;
		cout<<"3. Log In"<<endl;
		cout<<"4. Salir"<<endl;
		cin>>op;
		switch(op){
			case 1:

		}
	}*/

	delete p;

}