//
// Created by jlr on 4/28/20.
//

#ifndef POOII_TAREA_2_ENTREGA_01_05_YUMILR_MYSTACKINT_H
#define POOII_TAREA_2_ENTREGA_01_05_YUMILR_MYSTACKINT_H

#include "lib.h"

class MyStackInt {
private:
    array<int, N> mipila;
    int size;
public:
    MyStackInt();
    void push(int);
    void pop();
    int top();
    friend ostream &operator<<(ostream &os, const MyStackInt &A);
};
//inline MyStackInt::MyStackInt(){
//    this->size=0;
//    this->mipila.fill(0);
//}
//
//inline void MyStackInt::push(int valor){ //int valor, char valor, etc
//    this->mipila[this->size]=valor;
//    this->size++;
//}
//
//inline void MyStackInt::pop(){
//    if(this->size==0) cerr<<"pila vacía";
//    this->mipila[this->size-1]=0;
//    this->size--;
//}
//
//inline int MyStackInt::top(){
//    return this->mipila[this->size-1];
//}
//
//inline ostream& operator<<(ostream& os, const MyStackInt& A){
//    for (int i = 0; i <A.size; ++i) {
//        os <<'['<<A.mipila.at(i)<<']';
//    }
//    os << endl;
//    return os;
//}

#endif //POOII_TAREA_2_ENTREGA_01_05_YUMILR_MYSTACKINT_H
