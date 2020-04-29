
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
        friend ostream& operator<< (ostream& os, const MyStackGeneric<T>& A){
            for (int i = 0; i <A.size; ++i) {
                os <<'['<<A.mipila.at(i)<<']';
            }
            os << endl;
            return os;
        };
};

#endif
