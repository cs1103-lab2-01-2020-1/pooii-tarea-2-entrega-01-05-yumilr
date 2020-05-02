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

bool operator ==(const Usuario& A, const Usuario& B){
    if(A.username==B.username && A.contrasenia==B.contrasenia)
        return true;
    return false;
}

Usuario Usuario::operator =(const Usuario& other){
    this->nombre=other.nombre;
    this->username=other.username;
    this->contrasenia=other.contrasenia;
    this->direccion=other.direccion;
    return *this;
}
ostream& operator <<(ostream& os, const Usuario& A){
    os << A.nombre<<' '<<A.contrasenia<<' '<<A.username<<' '<<A.direccion<<endl;
    return os;
}
//void Usuario::set_Usuario() {
//}
/*
void Usuario::get_Usuario() {
    cout<<"*=*=*=*=*=*=*=*=*=*=*=*=*=*=*"<<endl<<endl;
    cout<<"Bienvenido(a) "<<nombre<<"!"<<endl;
}*/




