//
#include "lib.h"
#include "usuario.h"
#include "producto.h"

//

#ifndef POOII_TAREA_2_ENTREGA_01_05_YUMILR_MENU_H
#define POOII_TAREA_2_ENTREGA_01_05_YUMILR_MENU_H
class SistemaL{
    private:
    vector<Usuario> lista_usuarios;
    Usuario usuario_logged;
    public:
        SistemaL();
        void menu_inicial();
        void submenu_register();
        void submenu_login();
        void menu_sistema();
        void menu_pedido();
        void menu_orden();
        void encontrar_usuario(Usuario);
};
#endif //POOII_TAREA_2_ENTREGA_01_05_YUMILR_MENU_H
