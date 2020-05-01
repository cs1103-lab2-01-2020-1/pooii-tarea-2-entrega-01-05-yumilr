//
#include "lib.h"
//

#ifndef POOII_TAREA_2_ENTREGA_01_05_YUMILR_USUARIO_H
#define POOII_TAREA_2_ENTREGA_01_05_YUMILR_USUARIO_H
class Usuario{
    private:
        string nombre;
        string username;
        string contrasenia;
        string direccion;
    public:
        Usuario();
        Usuario(string, string, string, string);
        ~Usuario();
       // void get_Usuario(string, string);
};
#endif //POOII_TAREA_2_ENTREGA_01_05_YUMILR_USUARIO_H
