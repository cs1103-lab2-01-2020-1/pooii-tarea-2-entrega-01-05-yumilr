//

#include "SistemaL.h"
#include "lib.h"

//
// Created by jlr on 4/30/20.
SistemaL::SistemaL(){
    this->usuario_logged=Usuario("", "", "", "");
}

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
    cout<<"Ingresar nombre: ";
    string _nombre,_username, _contrasenia, _direccion;
    cin>>_nombre;
    cout<<"Ingresar username: ";
    cin>>_username;
    cout<<"Ingresar contraseña: ";
    cin>>_contrasenia;
    cout<<"Ingresar dirección: ";
    cin>>_direccion;
    this->lista_usuarios.emplace_back(Usuario(_nombre, _username, _contrasenia, _direccion));
    cout<<"Usuario creado!\n";
}

void SistemaL::submenu_login() {
    string _username, _contrasenia;
    cout<<"Ingresar username: ";
    cin>>_username;
    cout<<"Ingresar contraseña: ";
    cin>>_contrasenia;
    encontrar_usuario(Usuario("", _username, _contrasenia, ""));
}


void SistemaL::encontrar_usuario(Usuario A){
    bool founded= false;
    for (int i = 0; i < this->lista_usuarios.size(); ++i) {
        if(this->lista_usuarios[i]==A){
            this->usuario_logged= this->lista_usuarios[i];
            founded= true;
            break;
        }
    }
    if(founded){
        cout<< "Bienvenido! "<<endl;
        menu_sistema();
    }else cout <<"Usuario no Registrado"<<endl;
}

void SistemaL::menu_sistema() {

}