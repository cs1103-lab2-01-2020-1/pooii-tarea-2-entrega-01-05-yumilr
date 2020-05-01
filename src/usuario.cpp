//
#include "usuario.h"
//
Usuario::Usuario(){}

Usuario::Usuario(string nombre, string username, string contrasenia, string direccion){
    this->nombre=nombre;
    this->username=username;
    this->direccion=direccion;
    this->contrasenia=contrasenia;
}

Usuario::~Usuario() {}

//void Usuario::set_Usuario() {
//}
/*
void Usuario::get_Usuario() {
    cout<<"*=*=*=*=*=*=*=*=*=*=*=*=*=*=*"<<endl<<endl;
    cout<<"Bienvenido(a) "<<nombre<<"!"<<endl;
}*/




