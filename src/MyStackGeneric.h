
#ifndef POOII_TAREA_2_ENTREGA_01_05_YUMILR_MYSTACKGENERIC_H
#define POOII_TAREA_2_ENTREGA_01_05_YUMILR_MYSTACKGENERIC_H

#include "lib.h"

template <class T>
class MyStackGeneric{
    private:
        array<T,N> mipila;
        int size;
    public:
        MyStackGeneric();
        void push(T);
        void pop();
        T top();
        template<class E>
        friend ostream& operator<< (ostream& os, const MyStackGeneric<E>& A);
};

#endif
