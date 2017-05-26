#ifndef USUARIO_H
#define USUARIO_H
#include <string>

using namespace std;

class Usuario{

  public:
    string user;
    string password;
    string nombre;
    int edad;
    string id;
    int numero;

    //constructores
    Usuario();
    Usuario(string,string,string,int,string,int);
    virtual ~Usuario();
    //setters
    void setUser(string);
    void setPassword(string);
    void setNombre(string);
    void setEdad(int);
    void setID(string);
    void setNumero(int);

    //getters
    string getUser();
    string getPassword();
    string getNombre();
    virtual int getEdad();
    string getID();
    int getNumero();




};

#endif
