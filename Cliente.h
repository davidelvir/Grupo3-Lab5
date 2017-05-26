#ifndef CLIENTE_H
#define CLIENTE_H
#include "Usuario.h"

class Cliente : public Usuario{

  public:
    string direccion;
    int rating;

    //constructores
    Cliente();
    Cliente(string,string,string,string,int,string,int);
    
    //setters
    void setDireccion(string);
    void setRating(int);

    //getters
    string getDireccion();
    int getRating();

};

#endif
