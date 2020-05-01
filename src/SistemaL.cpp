//

#include "SistemaL.h"
#include "lib.h"

//
// Created by jlr on 4/30/20.
SistemaL::SistemaL(){}

void SistemaL::menu_inicial(){
    cout<<"*=*=*=*=*=*=*=*=*=*=*=*=*=*=*"<<endl<<endl;
    cout<<"\t\tBIENVENIDO A CSHOP"<<endl<<endl;
    cout<<"*=*=*=*=*=*=*=*=*=*=*=*=*=*=*"<<endl<<endl;
    int option=0;
    while(option!=3) {
        cout << "1. Ingresar\n" <<
             "2. Registrar\n" <<
             "3. Salir\n";
        cin >> option;
        if (option == 1) submenu_login();
        if (option == 2) submenu_register();
    }
    cout<<"Gracias!"<<endl;
}


void SistemaL::submenu_register() {
    cout<<"Ingresar nombre: "<<endl;
    string _nombre,_username, _contrasenia, _direccion;
    cin>>_nombre;
    cout<<"Ingresar username: "<<endl;
    cin>>_username;
    cout<<"Ingresar contraseña: "<<endl;
    cin>>_contrasenia;
    cout<<"Ingresar dirección: "<<endl;
    cin>>_direccion;
    this->lista_usuarios.emplace_back(Usuario(_nombre, _username, _contrasenia, _direccion));
    cout<<"Usuario creado!\n";
}

void SistemaL::submenu_login() {
    string _username, _contrasenia;
    cout<<"Ingresar username: "<<endl;
    cin>>_username;
    cout<<"Ingresar contraseña: "<<endl;
    cin>>_contrasenia;
    this->lista_usuarios.
}


