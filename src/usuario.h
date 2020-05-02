//
#include "lib.h"
//

#ifndef POOII_TAREA_2_ENTREGA_01_05_YUMILR_USUARIO_H
#define POOII_TAREA_2_ENTREGA_01_05_YUMILR_USUARIO_H
class Usuario {
private:
    string nombre;
    string username;
    string contrasenia;
    string direccion;
public:
    Usuario();

    Usuario(string, string, string, string);

    ~Usuario();

    Usuario operator=(const Usuario &other);

    friend bool operator==(const Usuario &, const Usuario &);

    friend ostream &operator<<(ostream &os, const Usuario &);
};
#endif //POOII_TAREA_2_ENTREGA_01_05_YUMILR_USUARIO_H